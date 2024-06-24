#ifndef UI_INIT_H
#define UI_INIT_H

#include <hal/lv_hal_disp.h>

// #include <lvgl.h>

void tft_lv_initialization();
void flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
void init_disp_driver();

#endif // UI_INIT_H