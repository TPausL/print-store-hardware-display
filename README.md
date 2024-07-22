# PrintStore

Scan 3D-printed products in order to keep track of the stock in a digital twin of the storage shelf.

## This repo

This is the code that runs on the M5Stack and communicates with the camera to take pictures and send them to the server in order to be scanned and added to the database. It also displays info of the current scan to the user. The UI is built using [Squareline Studio](https://squareline.io/), the port to the M5-Stack is taken from [this](https://github.com/OzInFl/m5core2-lvgl8-SquarelineStudio-PlatformIO) repo.

## Notes for setup

1. Move `lv_conf.h` into `.pio/libdeps/lvgl`
2. Copy `include/secrets.h.example` to `include/secrets.h` and fill in value for the server url.
3. Once compiled and uploaded follow these steps to connect to WiFi (just one time setup, for more info see [WiFiManager Library](https://github.com/MartinVerges/esp32-wifi-manager)):
   - join AP created by M5Stack (ESP-some_numbers)
   - send POST Request with
   ```json
   { "apName": "mySSID", "apPass": "secret" }
   ```
   to `192.168.4.1`
   - disconnect from AP


