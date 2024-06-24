#include <M5Stack.h>
#include <Arduino.h>
#include "ui/ui.h"
#include "ui/ui_helpers.h"
#include "lvgl.h"
#include <Wire.h>
#include <SPI.h>
#include "StatusBar.h"
#include <TaskScheduler.h>
#include <HTTPClient.h>

#define BTN_A GPIO_NUM_39
#define BTN_B GPIO_NUM_38
#define BTN_C GPIO_NUM_37

#define LV_HOR_RES_MAX 320
#define LV_VER_RES_MAX 240

// init the tft espi
static lv_disp_draw_buf_t draw_buf;
static lv_disp_drv_t disp_drv;   // Descriptor of a display driver
static lv_indev_drv_t indev_drv; // Descriptor of a touch driver

M5Display *tft;

void tft_lv_initialization()
{
    M5.begin(true, true, true, true);

    lv_init();

    static lv_color_t buf1[(LV_HOR_RES_MAX * LV_VER_RES_MAX) / 10]; // Declare a buffer for 1/10 screen siz
    static lv_color_t buf2[(LV_HOR_RES_MAX * LV_VER_RES_MAX) / 10]; // second buffer is optionnal

    // Initialize `disp_buf` display buffer with the buffer(s).
    lv_disp_draw_buf_init(&draw_buf, buf1, buf2, (LV_HOR_RES_MAX * LV_VER_RES_MAX) / 10);

    tft = &M5.Lcd;
}

// Display flushing
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft->startWrite();
    tft->setAddrWindow(area->x1, area->y1, w, h);
    tft->pushColors((uint16_t *)&color_p->full, w * h, true);
    tft->endWrite();

    lv_disp_flush_ready(disp);
}

void init_disp_driver()
{
    lv_disp_drv_init(&disp_drv); // Basic initialization

    disp_drv.flush_cb = my_disp_flush; // Set your driver function
    disp_drv.draw_buf = &draw_buf;     // Assign the buffer to the display
    disp_drv.hor_res = LV_HOR_RES_MAX; // Set the horizontal resolution of the display
    disp_drv.ver_res = LV_VER_RES_MAX; // Set the vertical resolution of the display

    lv_disp_drv_register(&disp_drv);                  // Finally register the driver
    lv_disp_set_bg_color(NULL, lv_color_hex3(0x000)); // Set default background color to black
}
Scheduler scheduler;

void onWiFiConnected()
{
    Serial.println("Connected to WiFi");
    lv_disp_load_scr(ui_Step1);
}

Task UpdateBatteryLevel(1000 * 30, TASK_FOREVER, &batteryTick, &scheduler, true);
Task ConnectWiFi(TASK_IMMEDIATE, TASK_ONCE, &connectWiFi, &scheduler, false, NULL, &onWiFiConnected);

static bool in = true;
static bool prev_in = true;

void swapInOut()
{
    in = !in;
}

static int screen = 1;

void changeScreen()
{
    if (screen == 1)
    {
        screen = 2;
        lv_disp_load_scr(ui_Step2);
    }
    else if (screen == 2)
    {
        screen = 3;
        lv_disp_load_scr(ui_Step3);
    }
    else
    {
        screen = 1;
        lv_disp_load_scr(ui_Step1);
    }
}

bool b_pressed = false;
void receiveImage()
{
    b_pressed = true;
}

void setup()
{
    // Wire.begin();
    // pinMode(SCL, OUTPUT);
    Serial2.begin(115200);

    // WiFi.setSleep(false); // Behebt bug mit Button A
    pinMode(GPIO_NUM_39, INPUT);
    pinMode(GPIO_NUM_38, INPUT);
    pinMode(GPIO_NUM_37, INPUT);

    WiFi.setSleep(false);
    tft_lv_initialization();
    init_disp_driver();
    ui_init(); // The Squareline interface
    setCpuFrequencyMhz(240);
    attachInterrupt(digitalPinToInterrupt(BTN_C), swapInOut, RISING);
    attachInterrupt(digitalPinToInterrupt(BTN_A), changeScreen, RISING);
    attachInterrupt(digitalPinToInterrupt(BTN_B), receiveImage, RISING);
    lv_disp_load_scr(ui_Startup);
    ConnectWiFi.enable();
}

HTTPClient http;

int receive_count = 0;
void loop()
{
    if (b_pressed)
    {
        Serial.println("Gettings data");
        Serial2.write(0x01);
        String p1 = Serial2.readString();
        uint16_t size = p1.toInt();
        Serial.println(String(size));
        if (size == -1)
        {
            Serial2.write(0x03);
            Serial.println("No data received");
            return;
        }
        else
        {
            Serial2.write(0x02);
            u_int8_t *image = (u_int8_t *)malloc(sizeof(u_int8_t[size]));
            Serial2.readBytes(image, size);
            /*  for (int i = 0; i < size; i++)
             {
                 Serial.print(image[i]);
             } */
            bool con = http.begin("http://192.168.188.93:5000/product");
            Serial.println(con);
            http.addHeader("Content-Type", "image/jpeg");
            int err = http.GET();
            Serial.println(err);
            if (err > 0)
            {
                Serial.println(http.getString());
            }
            else
            {
                Serial.println(err);
            }
            // M5.Lcd.drawJpg(image, size);
            Serial.println("Data received");
            b_pressed = false;
            free(image);
        }
        Serial.println(String(size));
    }
    if (prev_in != in)
    {
        prev_in = in;
        if (in)
        {
            lv_img_set_src(ui_InOutIconS1, &ui_img_plus_solid_png);
            lv_label_set_text(ui_InOutTextS1, "Hinzufuegen");
        }
        else
        {
            lv_img_set_src(ui_InOutIconS1, &ui_img_minus_solid_png);
            lv_label_set_text(ui_InOutTextS1, "Entfernen");
        }
    }
    M5.update();
    lv_task_handler();
    scheduler.execute();
}