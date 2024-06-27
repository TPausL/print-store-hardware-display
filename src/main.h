#ifndef MAIN_H
#define MAIN_H

void cbBtnPressedC();
void cbBtnPressedB();
void setup();
void loop();
void handleScan();
void handleInOut();
void checkWifi();
void getImage(uint8_t **img, uint16_t *size);
void handleColorAdd();

bool beforeImageRequest();
void afterImageRequest();
void imageRequest();

#endif // MAIN_H