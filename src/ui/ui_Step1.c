// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Step1_screen_init(void)
{
    ui_Step1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Step1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BottomRowS1 = lv_obj_create(ui_Step1);
    lv_obj_remove_style_all(ui_BottomRowS1);
    lv_obj_set_width(ui_BottomRowS1, 320);
    lv_obj_set_height(ui_BottomRowS1, 80);
    lv_obj_set_x(ui_BottomRowS1, 0);
    lv_obj_set_y(ui_BottomRowS1, 80);
    lv_obj_set_align(ui_BottomRowS1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BottomRowS1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BottomRowS1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END);
    lv_obj_clear_flag(ui_BottomRowS1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_BottomRowS1, &ui_img_bg_arc_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BottomRowS1, lv_color_hex(0xCECECE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BottomRowS1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftColS1 = lv_obj_create(ui_BottomRowS1);
    lv_obj_remove_style_all(ui_LeftColS1);
    lv_obj_set_width(ui_LeftColS1, lv_pct(31));
    lv_obj_set_height(ui_LeftColS1, lv_pct(100));
    lv_obj_set_x(ui_LeftColS1, -4);
    lv_obj_set_y(ui_LeftColS1, -15);
    lv_obj_set_align(ui_LeftColS1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_LeftColS1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_LeftColS1, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LeftColS1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutIconS2 = lv_img_create(ui_LeftColS1);
    lv_img_set_src(ui_InOutIconS2, &ui_img_swatchbook_solid_png);
    lv_obj_set_width(ui_InOutIconS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutIconS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutIconS2, -5);
    lv_obj_set_y(ui_InOutIconS2, 13);
    lv_obj_set_align(ui_InOutIconS2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_InOutIconS2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_InOutIconS2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutTextS2 = lv_label_create(ui_LeftColS1);
    lv_obj_set_width(ui_InOutTextS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutTextS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutTextS2, -5);
    lv_obj_set_y(ui_InOutTextS2, 12);
    lv_obj_set_align(ui_InOutTextS2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_InOutTextS2, "Neue Farbe");

    ui_CenterColS1 = lv_obj_create(ui_BottomRowS1);
    lv_obj_remove_style_all(ui_CenterColS1);
    lv_obj_set_width(ui_CenterColS1, lv_pct(31));
    lv_obj_set_height(ui_CenterColS1, lv_pct(100));
    lv_obj_set_x(ui_CenterColS1, -4);
    lv_obj_set_y(ui_CenterColS1, -15);
    lv_obj_set_align(ui_CenterColS1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_CenterColS1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_CenterColS1, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CenterColS1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanIconS1 = lv_img_create(ui_CenterColS1);
    lv_img_set_src(ui_ScanIconS1, &ui_img_camera_solid_png);
    lv_obj_set_width(ui_ScanIconS1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanIconS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanIconS1, -5);
    lv_obj_set_y(ui_ScanIconS1, 8);
    lv_obj_set_align(ui_ScanIconS1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScanIconS1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScanIconS1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanTextS1 = lv_label_create(ui_CenterColS1);
    lv_obj_set_width(ui_ScanTextS1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanTextS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanTextS1, -5);
    lv_obj_set_y(ui_ScanTextS1, 12);
    lv_obj_set_align(ui_ScanTextS1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScanTextS1, "Scanen");
    lv_obj_set_style_text_font(ui_ScanTextS1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightColS1 = lv_obj_create(ui_BottomRowS1);
    lv_obj_remove_style_all(ui_RightColS1);
    lv_obj_set_width(ui_RightColS1, lv_pct(31));
    lv_obj_set_height(ui_RightColS1, lv_pct(100));
    lv_obj_set_x(ui_RightColS1, -4);
    lv_obj_set_y(ui_RightColS1, -15);
    lv_obj_set_align(ui_RightColS1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RightColS1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_RightColS1, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightColS1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutIconS1 = lv_img_create(ui_RightColS1);
    lv_img_set_src(ui_InOutIconS1, &ui_img_plus_solid_png);
    lv_obj_set_width(ui_InOutIconS1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutIconS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutIconS1, -5);
    lv_obj_set_y(ui_InOutIconS1, 13);
    lv_obj_set_align(ui_InOutIconS1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_InOutIconS1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_InOutIconS1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutTextS1 = lv_label_create(ui_RightColS1);
    lv_obj_set_width(ui_InOutTextS1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutTextS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutTextS1, -5);
    lv_obj_set_y(ui_InOutTextS1, 12);
    lv_obj_set_align(ui_InOutTextS1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_InOutTextS1, "Hinzufuegen");

    ui_MinusIconS1 = lv_img_create(ui_Step1);
    lv_img_set_src(ui_MinusIconS1, &ui_img_minus_solid_png);
    lv_obj_set_width(ui_MinusIconS1, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_MinusIconS1, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_MinusIconS1, 196);
    lv_obj_set_y(ui_MinusIconS1, 53);
    lv_obj_set_align(ui_MinusIconS1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MinusIconS1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MinusIconS1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopRowS1 = lv_obj_create(ui_Step1);
    lv_obj_remove_style_all(ui_TopRowS1);
    lv_obj_set_width(ui_TopRowS1, 320);
    lv_obj_set_height(ui_TopRowS1, 60);
    lv_obj_set_x(ui_TopRowS1, 0);
    lv_obj_set_y(ui_TopRowS1, -75);
    lv_obj_set_align(ui_TopRowS1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_TopRowS1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_TopRowS1, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopRowS1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle1S1 = lv_img_create(ui_TopRowS1);
    lv_img_set_src(ui_Circle1S1, &ui_img_circle_solid_large_png);
    lv_obj_set_width(ui_Circle1S1, 48);
    lv_obj_set_height(ui_Circle1S1, 48);
    lv_obj_set_x(ui_Circle1S1, -124);
    lv_obj_set_y(ui_Circle1S1, -13);
    lv_obj_set_align(ui_Circle1S1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle1S1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle1S1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle1S1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle1S1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle1TextS1 = lv_label_create(ui_Circle1S1);
    lv_obj_set_width(ui_Circle1TextS1, lv_pct(100));
    lv_obj_set_height(ui_Circle1TextS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle1TextS1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle1TextS1, "1");
    lv_obj_set_style_text_color(ui_Circle1TextS1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle1TextS1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle1TextS1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider1S1 = lv_obj_create(ui_TopRowS1);
    lv_obj_set_width(ui_Divider1S1, 50);
    lv_obj_set_height(ui_Divider1S1, 7);
    lv_obj_set_x(ui_Divider1S1, -60);
    lv_obj_set_y(ui_Divider1S1, -92);
    lv_obj_set_align(ui_Divider1S1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider1S1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_width(ui_Divider1S1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle2S1 = lv_img_create(ui_TopRowS1);
    lv_img_set_src(ui_Circle2S1, &ui_img_circle_solid_png);
    lv_obj_set_width(ui_Circle2S1, 48);
    lv_obj_set_height(ui_Circle2S1, 48);
    lv_obj_set_x(ui_Circle2S1, -124);
    lv_obj_set_y(ui_Circle2S1, -13);
    lv_obj_set_align(ui_Circle2S1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle2S1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle2S1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle2S1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle2S1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Circle2S1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Circle2S1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle2S1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui_Circle2S1, lv_color_hex(0x240909), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Circle2S1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle2TextS1 = lv_label_create(ui_Circle2S1);
    lv_obj_set_width(ui_Circle2TextS1, lv_pct(100));
    lv_obj_set_height(ui_Circle2TextS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle2TextS1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle2TextS1, "2");
    lv_obj_set_style_text_color(ui_Circle2TextS1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle2TextS1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle2TextS1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider2S1 = lv_obj_create(ui_TopRowS1);
    lv_obj_set_width(ui_Divider2S1, 50);
    lv_obj_set_height(ui_Divider2S1, 7);
    lv_obj_set_x(ui_Divider2S1, -60);
    lv_obj_set_y(ui_Divider2S1, -92);
    lv_obj_set_align(ui_Divider2S1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider2S1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_width(ui_Divider2S1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle3S1 = lv_img_create(ui_TopRowS1);
    lv_img_set_src(ui_Circle3S1, &ui_img_circle_solid_png);
    lv_obj_set_width(ui_Circle3S1, 48);
    lv_obj_set_height(ui_Circle3S1, 48);
    lv_obj_set_x(ui_Circle3S1, -124);
    lv_obj_set_y(ui_Circle3S1, -13);
    lv_obj_set_align(ui_Circle3S1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle3S1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle3S1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle3S1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle3S1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Circle3S1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Circle3S1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle3S1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle3TextS1 = lv_label_create(ui_Circle3S1);
    lv_obj_set_width(ui_Circle3TextS1, lv_pct(100));
    lv_obj_set_height(ui_Circle3TextS1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle3TextS1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle3TextS1, "3");
    lv_obj_set_style_text_color(ui_Circle3TextS1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle3TextS1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle3TextS1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_Step1);
    lv_img_set_src(ui_Image2, &ui_img_circle_solid_red_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_Image2, 197);
    lv_obj_set_y(ui_Image2, 60);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bar1 = lv_bar_create(ui_Step1);
    lv_bar_set_value(ui_Bar1, 50, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Bar1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Bar1, 39);
    lv_obj_set_height(ui_Bar1, 11);
    lv_obj_set_x(ui_Bar1, 193);
    lv_obj_set_y(ui_Bar1, 28);
    lv_obj_set_align(ui_Bar1, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0xE5F077), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_StatusBarS1 = lv_obj_create(ui_Step1);
    lv_obj_remove_style_all(ui_StatusBarS1);
    lv_obj_set_width(ui_StatusBarS1, 40);
    lv_obj_set_height(ui_StatusBarS1, 20);
    lv_obj_set_x(ui_StatusBarS1, 140);
    lv_obj_set_y(ui_StatusBarS1, -110);
    lv_obj_set_align(ui_StatusBarS1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_StatusBarS1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_StatusBarS1, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_StatusBarS1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_StatusBarS1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_StatusBarS1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_StatusBarS1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_StatusBarS1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiIndicatorS1 = lv_img_create(ui_StatusBarS1);
    lv_img_set_src(ui_WifiIndicatorS1, &ui_img_wifi_solid_png);
    lv_obj_set_width(ui_WifiIndicatorS1, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_WifiIndicatorS1, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_WifiIndicatorS1, 130);
    lv_obj_set_y(ui_WifiIndicatorS1, -110);
    lv_obj_set_align(ui_WifiIndicatorS1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiIndicatorS1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WifiIndicatorS1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BatteryIndicatorS1 = lv_img_create(ui_StatusBarS1);
    lv_img_set_src(ui_BatteryIndicatorS1, &ui_img_battery_full_solid_png);
    lv_obj_set_width(ui_BatteryIndicatorS1, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_BatteryIndicatorS1, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_BatteryIndicatorS1, 150);
    lv_obj_set_y(ui_BatteryIndicatorS1, -110);
    lv_obj_set_align(ui_BatteryIndicatorS1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BatteryIndicatorS1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BatteryIndicatorS1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image5 = lv_img_create(ui_Step1);
    lv_img_set_src(ui_Image5, &ui_img_battery_half_solid_png);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image5, 187);
    lv_obj_set_y(ui_Image5, 42);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image6 = lv_img_create(ui_Step1);
    lv_img_set_src(ui_Image6, &ui_img_battery_three_quarters_solid_png);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image6, 192);
    lv_obj_set_y(ui_Image6, 17);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image7 = lv_img_create(ui_Step1);
    lv_img_set_src(ui_Image7, &ui_img_battery_quarter_solid_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image7, 179);
    lv_obj_set_y(ui_Image7, -15);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image8 = lv_img_create(ui_Step1);
    lv_img_set_src(ui_Image8, &ui_img_battery_empty_solid_png);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image8, 204);
    lv_obj_set_y(ui_Image8, 2);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
