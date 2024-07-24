#include <M5Stack.h>
#include <Arduino.h>
#include "ui/ui.h"
#include "ui/ui_helpers.h"
#include "lvgl.h"
#include <Wire.h>
#include <SPI.h>
#include "StatusBar.h"
#define _TASK_PRIORITY
#include <TaskScheduler.h>
#include <HTTPClient.h>
#include "ui_init.h"
#include "main.h"
#include "WiFi.h"
#include <ArduinoJson.h>
#include "secrets.h"

#define BTN_A_PIN GPIO_NUM_39
#define BTN_B_PIN GPIO_NUM_38
#define BTN_C_PIN GPIO_NUM_37
HTTPClient http;

Scheduler scheduler, displayScheduler;
Task tConnectWifi(TASK_IMMEDIATE, TASK_ONCE, &connectWiFi, &scheduler, true);
Task tBatteryLevel(1000 * 30, TASK_FOREVER, &batteryTick, &scheduler, true);
Task tReqImage(2000, TASK_ONCE, &imageRequest, &scheduler, false, &beforeImageRequest, &afterImageRequest);
Task tUi(10, TASK_FOREVER, [](void)
         { lv_task_handler(); }, &displayScheduler, true);

uint8_t *image;
uint16_t size;

void imageRequest()
{
    Serial.println(millis());
    Serial.println("Getting image data");
    Serial2.write(0x01);
    String p1 = Serial2.readString();
    size = p1.toInt();
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
        image = (uint8_t *)malloc(sizeof(uint8_t[size]));
        Serial2.readBytes(image, size);
        Serial.println("receiving image data");
        digitalWrite(GPIO_NUM_26, LOW);
    }
}

bool beforeImageRequest()
{
    lv_disp_load_scr(ui_Scanning);
    pinMode(GPIO_NUM_26, OUTPUT);
    digitalWrite(GPIO_NUM_26, HIGH);
    return true;
}

void afterImageRequest()
{
    lv_disp_load_scr(ui_Result);
    digitalWrite(GPIO_NUM_26, LOW);
}

void scanImage()
{
    bool con = http.begin(SCAN_SERVER_BASE_URL + String("/product"));
    Serial.println(SCAN_SERVER_BASE_URL + String("/product"));
    Serial.println(con);

    http.addHeader("Content-Type", "image/jpeg");
    int err = http.PUT(image, size);
    Serial.println(err);
    if (err > 0)
    {
        String strResponse = http.getString();
        JsonDocument response;
        deserializeJson(response, strResponse);
        const char *data_color = response["data"]["color"];
        const char *data_size = response["data"]["size"];
        const char *data_shape = response["data"]["shape"];

        Serial.println("Sucessfully sent image data to server");
        if (err == 201)
        {
            lv_label_set_text(ui_ResultSize, data_size);
            lv_label_set_text(ui_ResultCol, data_color);
            lv_label_set_text(ui_ResultShape, data_shape);
            lv_disp_load_scr(ui_Result);
            free(image);
            return;
        }
        else if (err == 404)
        {
            /* const char *error = response["message"];
            lv_label_set_text(ui_ResultHeadlineNotFound, error); */
            lv_disp_load_scr(ui_ResultNotFound);
            free(image);
            return;
        }
        else
        {
            const char *error = response["message"];
            lv_label_set_text(ui_ErrorText, error);
            lv_disp_load_scr(ui_Error);
        }
    }
    else
    {
        lv_label_set_text(ui_ErrorText, "Fehler beim Senden des Bildes");
        lv_disp_load_scr(ui_Error);
        free(image);
        Serial.println("Error sending image data to server");
        // error sreen?
    }
    free(image);
}

void addColor()
{
    bool con = http.begin(SCAN_SERVER_BASE_URL + String("/color"));
    if (!con)
    {
        lv_label_set_text(ui_ErrorText, "Fehler beim Verbinden mit Server");
        lv_disp_load_scr(ui_Error);
        return;
    }

    http.addHeader("Content-Type", "image/jpeg");
    int err = http.PUT(image, size);
    Serial.println(err);
    if (err > 0)
    {
        String strResponse = http.getString();
        Serial.println("Sucessfully sent image data to server");
        Serial.println(strResponse);
        if (err == 201 || err == 200)
        {
            if (err == 201)
            {
                lv_label_set_text(ui_ResultHeadlineColor, "Farbe hinzugefuegt");
            }
            else if (err == 200)
            {
                lv_label_set_text(ui_ResultHeadlineColor, "Farbe existiert bereits");
            }
            JsonDocument response;
            deserializeJson(response, strResponse);
            const char *data_hex = response["data"]["hex"];
            Serial.println(data_hex);
            String hex = response["data"]["hex"];
            uint32_t hex_int = (uint32_t)strtol(hex.substring(1).c_str(), NULL, 16);
            lv_label_set_text(ui_ResultColorText, hex.c_str());
            static lv_style_t panelStyle;
            lv_obj_set_style_bg_color(ui_ResultColorBackground, lv_color_hex(hex_int), LV_STATE_DEFAULT);
            lv_disp_load_scr(ui_ResultColor);
            free(image);
            return;
        }
        else
        {
            JsonDocument response;
            deserializeJson(response, strResponse);
            const char *error = response["message"];
            lv_label_set_text(ui_ErrorText, error);
            lv_disp_load_scr(ui_Error);
        }
    }
    else
    {
        lv_label_set_text(ui_ErrorText, "Fehler beim Senden des Bildes");
        lv_disp_load_scr(ui_Error);
        Serial.println("Error sending image data to server");
    }
    free(image);
}

void cbBtnPressedB()
{
    lv_obj_t *curScreen = lv_scr_act();
    if (curScreen == ui_Idle)
    {
        tReqImage.setOnDisable(&scanImage);
        tReqImage.restartDelayed();
    }
    if (curScreen == ui_Result || curScreen == ui_ResultNotFound || curScreen == ui_Error || curScreen == ui_ResultColor)
    {
        lv_disp_load_scr(ui_Idle);
    }
}

void cbBtnPressedC()
{
    // currently unsused as multipart sending does not work
}

void cbBtnPressedA()
{
    Serial.println("A pressed");
    lv_obj_t *curScreen = lv_scr_act();
    if (curScreen == ui_Idle)
    {
        tReqImage.setOnDisable(&addColor);
        tReqImage.restartDelayed();
    }
}

void cbWifiEvent(WiFiEvent_t event, WiFiEventInfo_t info)
{
    Serial.println("Wifi event" + String(event));
    if (event == WiFiEvent_t::ARDUINO_EVENT_WIFI_STA_CONNECTED)
    {
        lv_disp_load_scr(ui_Idle);
    }
    if (event == WiFiEvent_t::ARDUINO_EVENT_WIFI_STA_DISCONNECTED)
    {
        tReqImage.setOnDisable(nullptr);
        tReqImage.disable();
        lv_disp_load_scr(ui_Startup);
    }
}

void setup()
{
    Serial2.begin(115200);
    pinMode(GPIO_NUM_39, INPUT);
    pinMode(GPIO_NUM_38, INPUT);
    pinMode(GPIO_NUM_37, INPUT);
    pinMode(GPIO_NUM_26, OUTPUT);

    M5.begin(true, false, true, true);

    attachInterrupt(digitalPinToInterrupt(BTN_C_PIN), cbBtnPressedC, RISING);
    attachInterrupt(digitalPinToInterrupt(BTN_B_PIN), cbBtnPressedB, RISING);
    attachInterrupt(digitalPinToInterrupt(BTN_A_PIN), cbBtnPressedA, RISING);

    WiFi.setSleep(false); // Btn A interrupt does not work otherwise

    tft_lv_initialization();
    init_disp_driver();
    ui_init(); // The Squareline interface

    setCpuFrequencyMhz(240);

    lv_disp_load_scr(ui_Startup);
    Serial.println("Startup");

    scheduler.setHighPriorityScheduler(&displayScheduler);
    tUi.enable();
    // scheduler.enableAll(true);

    // lv_task_handler();
    // connectWiFi();
    // tConnectWifi.enable();

    WiFi.onEvent(cbWifiEvent);
}

void loop()
{
    scheduler.execute();
}
// currently unused as multipart sending does not work
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
