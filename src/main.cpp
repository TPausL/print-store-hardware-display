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
#include "ui_init.h"
#include "main.h"
#define BTN_A_PIN GPIO_NUM_39
#define BTN_B_PIN GPIO_NUM_38
#define BTN_C_PIN GPIO_NUM_37

Scheduler scheduler;

Task UpdateBatteryLevel(1000 * 30, TASK_FOREVER, &batteryTick, &scheduler, true);
Task ConnectWiFi(TASK_IMMEDIATE, TASK_ONCE, &connectWiFi, &scheduler, false, NULL, &onWiFiConnected);

bool scanning = false;

bool b_pressed = false;
bool c_pressed = false;

void cbBtnPressedC()
{
    if (!scanning)
        c_pressed = true;
}

void cbBtnPressedB()
{
    if (!scanning)
        b_pressed = true;
}

void setup()
{
    // Wire.begin();
    // pinMode(SCL, OUTPUT);
    Serial2.begin(115200);
    pinMode(GPIO_NUM_39, INPUT);
    pinMode(GPIO_NUM_38, INPUT);
    pinMode(GPIO_NUM_37, INPUT);
    pinMode(GPIO_NUM_26, OUTPUT);

    M5.begin(true, false, true, true);

    attachInterrupt(digitalPinToInterrupt(BTN_C_PIN), cbBtnPressedC, RISING);
    attachInterrupt(digitalPinToInterrupt(BTN_B_PIN), cbBtnPressedB, RISING);

    WiFi.setSleep(false); // Btn A interrupt does not work otherwise

    tft_lv_initialization();
    init_disp_driver();
    ui_init(); // The Squareline interface

    setCpuFrequencyMhz(240);

    lv_disp_load_scr(ui_Startup);
    ConnectWiFi.enable();
}

HTTPClient http;

void loop()
{
    if (c_pressed)
    {
        c_pressed = false;
        handleInOut();
    }

    if (b_pressed)
    {
        b_pressed = false;
        handleScan();
    }
    M5.update();
    lv_task_handler();
    scheduler.execute();
}

void handleInOut()
{
    static bool in;
    in != in;
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

void handleScan()
{

    lv_disp_load_scr(ui_Step2);
    digitalWrite(GPIO_NUM_26, HIGH);
    delay(500);
    Serial.println("Getting image data");
    Serial2.write(0x01);
    String p1 = Serial2.readString();
    uint16_t size = p1.toInt();
    Serial.println("got image size: " + String(size));
    if (size == -1)
    {
        Serial2.write(0x03);
        Serial.println("No size received");
        return;
    }
    else
    {
        Serial2.write(0x02);
        u_int8_t *image = (u_int8_t *)malloc(sizeof(u_int8_t[size]));
        Serial2.readBytes(image, size);
        Serial.println("receiving image data");
        digitalWrite(GPIO_NUM_26, LOW);
        Serial.write(size);
        bool con = http.begin("http://192.168.178.96:5000/product");
        Serial.println(con);

        http.addHeader("Content-Type", "image/jpeg");
        int err = http.PUT(image, size);
        Serial.println(err);
        if (err > 0)
        {
            Serial.println("Sucessfully sent image data to server");
            Serial.println(http.getString());

            lv_disp_load_scr(ui_Step3);
        }
        else
        {
            Serial.println(err);
            // error sreen?
        }
        Serial.println("Data received");
        b_pressed = false;
        free(image);
    }
}