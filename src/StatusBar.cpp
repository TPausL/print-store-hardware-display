#include "StatusBar.h"
#include <wifimanager.h>

int lastBatteryLevel = 0;

lv_obj_t **batteryIndicators[5] = {
    &ui_BatteryS1,
    &ui_BatteryS2,
    &ui_BatteryS3,
};

void batteryTick()
{
    int batteryLevel = M5.Power.getBatteryLevel();
    if (batteryLevel != lastBatteryLevel)
    {
        lastBatteryLevel = batteryLevel;
        lv_img_dsc_t *battery_image;
        switch (batteryLevel)
        {
        case 100:
            changeIcons(batteryIndicators, 3, &ui_img_battery_full_solid_png);
            break;
        case 75:
            changeIcons(batteryIndicators, 3, &ui_img_battery_three_quarters_solid_png);
            break;
        case 50:
            changeIcons(batteryIndicators, 3, &ui_img_battery_half_solid_png);
            break;
        case 25:
            changeIcons(batteryIndicators, 3, &ui_img_battery_quarter_solid_png);

            break;
        default:
            changeIcons(batteryIndicators, 3, &ui_img_battery_empty_solid_png);
            break;
        }
    }
}

WIFIMANAGER WifiManager;
AsyncWebServer webServer(80);

void connectWiFi()
{

    WifiManager.startBackgroundTask();       // Run the background task to take care of our Wifi
    WifiManager.fallbackToSoftAp(true);      // Run a SoftAP if no known AP can be reached
    WifiManager.attachWebServer(&webServer); // Attach our API to the Webserver

    // Run the Webserver and add your webpages to it
    webServer.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
                 { request->send(200, "text/plain", "Hello World"); });
    webServer.onNotFound([&](AsyncWebServerRequest *request)
                         { request->send(404, "text/plain", "Not found"); });
    webServer.begin();
}