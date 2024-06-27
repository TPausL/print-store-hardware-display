#ifndef STATUS_BAR_H
#define STATUS_BAR_H

#include "ui/ui.h"
#include "utils.h"
#include <M5Stack.h>
#include <WiFi.h>
#include <WiFiMulti.h>

void connectWiFi();
void batteryTick();

#endif // STATUS_BAR_H
