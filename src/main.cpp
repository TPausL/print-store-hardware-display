#include <M5Stack.h>
#include <Arduino.h>
#include "ui/ui.h"
#include "ui/ui_helpers.h"
#include "lvgl.h"
#include <Wire.h>
#include <SPI.h>

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

static void ta_event_cb(lv_event_t *e);
static lv_obj_t *kb;

static void ta_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED || code == LV_EVENT_FOCUSED)
    {
        /*Focus on the clicked text area*/
        if (kb != NULL)
            lv_keyboard_set_textarea(kb, ta);
    }

    else if (code == LV_EVENT_READY)
    {
        LV_LOG_USER("Ready, current text: %s", lv_textarea_get_text(ta));
    }
}

static void btnPowerOff_event(lv_event_t *event)
{
    M5.Power.powerOFF();
}

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

void uitest()
{
    lv_obj_t *btn1 = lv_btn_create(lv_scr_act());
    lv_obj_t *label = lv_label_create(btn1);
    lv_obj_align(btn1, LV_ALIGN_CENTER, 0, 0);
    lv_label_set_text(label, "Power Off");
    lv_obj_center(label);
    lv_obj_add_event_cb(btn1, btnPowerOff_event, LV_EVENT_CLICKED, NULL);
}

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

void setup()
{

    // WiFi.setSleep(false); // Behebt bug mit Button A
    pinMode(GPIO_NUM_39, INPUT);
    pinMode(GPIO_NUM_38, INPUT);
    pinMode(GPIO_NUM_37, INPUT);

    tft_lv_initialization();
    init_disp_driver();
    ui_init(); // The Squareline interface
    setCpuFrequencyMhz(240);
    attachInterrupt(digitalPinToInterrupt(BTN_C), swapInOut, RISING);
    attachInterrupt(digitalPinToInterrupt(BTN_A), changeScreen, RISING);
    lv_disp_load_scr(ui_Step1);
}

void loop()
{
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
}