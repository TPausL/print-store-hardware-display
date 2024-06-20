// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Step5_screen_init(void)
{
    ui_Step5 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Step5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopRowS5 = lv_obj_create(ui_Step5);
    lv_obj_remove_style_all(ui_TopRowS5);
    lv_obj_set_width(ui_TopRowS5, 320);
    lv_obj_set_height(ui_TopRowS5, 60);
    lv_obj_set_x(ui_TopRowS5, 0);
    lv_obj_set_y(ui_TopRowS5, -75);
    lv_obj_set_align(ui_TopRowS5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_TopRowS5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_TopRowS5, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopRowS5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle1S5 = lv_img_create(ui_TopRowS5);
    lv_img_set_src(ui_Circle1S5, &ui_img_circle_solid_green_png);
    lv_obj_set_width(ui_Circle1S5, 48);
    lv_obj_set_height(ui_Circle1S5, 48);
    lv_obj_set_x(ui_Circle1S5, -124);
    lv_obj_set_y(ui_Circle1S5, -13);
    lv_obj_set_align(ui_Circle1S5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle1S5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle1S5, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle1S5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle1S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Circle1S5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Circle1S5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle1S5, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle1TextS5 = lv_label_create(ui_Circle1S5);
    lv_obj_set_width(ui_Circle1TextS5, lv_pct(100));
    lv_obj_set_height(ui_Circle1TextS5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle1TextS5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle1TextS5, "✔");
    lv_obj_set_style_text_color(ui_Circle1TextS5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle1TextS5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle1TextS5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Circle1TextS5, &ui_font_NotoCheckEmoji, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider1S5 = lv_obj_create(ui_TopRowS5);
    lv_obj_set_width(ui_Divider1S5, 80);
    lv_obj_set_height(ui_Divider1S5, 7);
    lv_obj_set_x(ui_Divider1S5, -60);
    lv_obj_set_y(ui_Divider1S5, -92);
    lv_obj_set_align(ui_Divider1S5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider1S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle2S5 = lv_img_create(ui_TopRowS5);
    lv_img_set_src(ui_Circle2S5, &ui_img_circle_solid_green_png);
    lv_obj_set_width(ui_Circle2S5, 48);
    lv_obj_set_height(ui_Circle2S5, 48);
    lv_obj_set_x(ui_Circle2S5, -124);
    lv_obj_set_y(ui_Circle2S5, -13);
    lv_obj_set_align(ui_Circle2S5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle2S5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle2S5, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle2S5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle2S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Circle2S5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Circle2S5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle2S5, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui_Circle2S5, lv_color_hex(0x240909), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Circle2S5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle2TextS5 = lv_label_create(ui_Circle2S5);
    lv_obj_set_width(ui_Circle2TextS5, lv_pct(100));
    lv_obj_set_height(ui_Circle2TextS5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle2TextS5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle2TextS5, "✔");
    lv_obj_set_style_text_color(ui_Circle2TextS5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle2TextS5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle2TextS5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Circle2TextS5, &ui_font_NotoCheckEmoji, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider2S5 = lv_obj_create(ui_TopRowS5);
    lv_obj_set_width(ui_Divider2S5, 80);
    lv_obj_set_height(ui_Divider2S5, 7);
    lv_obj_set_x(ui_Divider2S5, -60);
    lv_obj_set_y(ui_Divider2S5, -92);
    lv_obj_set_align(ui_Divider2S5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider2S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle3S5 = lv_img_create(ui_TopRowS5);
    lv_img_set_src(ui_Circle3S5, &ui_img_circle_solid_large_png);
    lv_obj_set_width(ui_Circle3S5, 48);
    lv_obj_set_height(ui_Circle3S5, 48);
    lv_obj_set_x(ui_Circle3S5, -124);
    lv_obj_set_y(ui_Circle3S5, -13);
    lv_obj_set_align(ui_Circle3S5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle3S5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle3S5, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle3S5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle3S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle3TextS5 = lv_label_create(ui_Circle3S5);
    lv_obj_set_width(ui_Circle3TextS5, lv_pct(100));
    lv_obj_set_height(ui_Circle3TextS5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle3TextS5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle3TextS5, "3");
    lv_obj_set_style_text_color(ui_Circle3TextS5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle3TextS5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle3TextS5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BottomRowS2 = lv_obj_create(ui_Step5);
    lv_obj_remove_style_all(ui_BottomRowS2);
    lv_obj_set_width(ui_BottomRowS2, 320);
    lv_obj_set_height(ui_BottomRowS2, 80);
    lv_obj_set_x(ui_BottomRowS2, 0);
    lv_obj_set_y(ui_BottomRowS2, 80);
    lv_obj_set_align(ui_BottomRowS2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BottomRowS2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BottomRowS2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END);
    lv_obj_clear_flag(ui_BottomRowS2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_BottomRowS2, &ui_img_bg_arc_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BottomRowS2, lv_color_hex(0xCECECE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BottomRowS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftColS2 = lv_obj_create(ui_BottomRowS2);
    lv_obj_remove_style_all(ui_LeftColS2);
    lv_obj_set_width(ui_LeftColS2, lv_pct(31));
    lv_obj_set_height(ui_LeftColS2, lv_pct(100));
    lv_obj_set_x(ui_LeftColS2, -4);
    lv_obj_set_y(ui_LeftColS2, -15);
    lv_obj_set_align(ui_LeftColS2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_LeftColS2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_LeftColS2, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_LeftColS2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CenterColS2 = lv_obj_create(ui_BottomRowS2);
    lv_obj_remove_style_all(ui_CenterColS2);
    lv_obj_set_width(ui_CenterColS2, lv_pct(31));
    lv_obj_set_height(ui_CenterColS2, lv_pct(100));
    lv_obj_set_x(ui_CenterColS2, -4);
    lv_obj_set_y(ui_CenterColS2, -15);
    lv_obj_set_align(ui_CenterColS2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_CenterColS2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_CenterColS2, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CenterColS2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanIconS2 = lv_img_create(ui_CenterColS2);
    lv_img_set_src(ui_ScanIconS2, &ui_img_home_solid_png);
    lv_obj_set_width(ui_ScanIconS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanIconS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanIconS2, -5);
    lv_obj_set_y(ui_ScanIconS2, 8);
    lv_obj_set_align(ui_ScanIconS2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScanIconS2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScanIconS2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanTextS2 = lv_label_create(ui_CenterColS2);
    lv_obj_set_width(ui_ScanTextS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanTextS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanTextS2, -5);
    lv_obj_set_y(ui_ScanTextS2, 12);
    lv_obj_set_align(ui_ScanTextS2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScanTextS2, "Zurueck");
    lv_obj_set_style_text_font(ui_ScanTextS2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightColS2 = lv_obj_create(ui_BottomRowS2);
    lv_obj_remove_style_all(ui_RightColS2);
    lv_obj_set_width(ui_RightColS2, lv_pct(31));
    lv_obj_set_height(ui_RightColS2, lv_pct(100));
    lv_obj_set_x(ui_RightColS2, -4);
    lv_obj_set_y(ui_RightColS2, -15);
    lv_obj_set_align(ui_RightColS2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RightColS2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_RightColS2, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightColS2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutIconS4 = lv_img_create(ui_RightColS2);
    lv_img_set_src(ui_InOutIconS4, &ui_img_trash_alt_solid_png);
    lv_obj_set_width(ui_InOutIconS4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutIconS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutIconS4, -5);
    lv_obj_set_y(ui_InOutIconS4, 13);
    lv_obj_set_align(ui_InOutIconS4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_InOutIconS4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_InOutIconS4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutTextS4 = lv_label_create(ui_RightColS2);
    lv_obj_set_width(ui_InOutTextS4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutTextS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutTextS4, -5);
    lv_obj_set_y(ui_InOutTextS4, 12);
    lv_obj_set_align(ui_InOutTextS4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_InOutTextS4, "Loeschen");

    ui_Container7 = lv_obj_create(ui_Step5);
    lv_obj_remove_style_all(ui_Container7);
    lv_obj_set_width(ui_Container7, 320);
    lv_obj_set_height(ui_Container7, 70);
    lv_obj_set_x(ui_Container7, 0);
    lv_obj_set_y(ui_Container7, -5);
    lv_obj_set_align(ui_Container7, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container7, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container7, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container7, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label7 = lv_label_create(ui_Container7);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -158);
    lv_obj_set_y(ui_Label7, -14);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Farbe hinzugeguefgt");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ColorIndicator = lv_obj_create(ui_Container7);
    lv_obj_set_width(ui_ColorIndicator, 70);
    lv_obj_set_height(ui_ColorIndicator, 70);
    lv_obj_set_x(ui_ColorIndicator, 85);
    lv_obj_set_y(ui_ColorIndicator, -11);
    lv_obj_set_align(ui_ColorIndicator, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ColorIndicator, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ColorIndicator, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ColorIndicator, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StatusBarS5 = lv_obj_create(ui_Step5);
    lv_obj_remove_style_all(ui_StatusBarS5);
    lv_obj_set_width(ui_StatusBarS5, 40);
    lv_obj_set_height(ui_StatusBarS5, 20);
    lv_obj_set_x(ui_StatusBarS5, 140);
    lv_obj_set_y(ui_StatusBarS5, -110);
    lv_obj_set_align(ui_StatusBarS5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_StatusBarS5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_StatusBarS5, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_StatusBarS5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_StatusBarS5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_StatusBarS5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_StatusBarS5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_StatusBarS5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiIndicatorS5 = lv_img_create(ui_StatusBarS5);
    lv_img_set_src(ui_WifiIndicatorS5, &ui_img_wifi_solid_png);
    lv_obj_set_width(ui_WifiIndicatorS5, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_WifiIndicatorS5, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_WifiIndicatorS5, 130);
    lv_obj_set_y(ui_WifiIndicatorS5, -110);
    lv_obj_set_align(ui_WifiIndicatorS5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiIndicatorS5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WifiIndicatorS5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BatteryIndicatorS5 = lv_img_create(ui_StatusBarS5);
    lv_img_set_src(ui_BatteryIndicatorS5, &ui_img_battery_full_solid_png);
    lv_obj_set_width(ui_BatteryIndicatorS5, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_BatteryIndicatorS5, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_BatteryIndicatorS5, 150);
    lv_obj_set_y(ui_BatteryIndicatorS5, -110);
    lv_obj_set_align(ui_BatteryIndicatorS5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BatteryIndicatorS5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BatteryIndicatorS5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
