// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_ResultNotFound_screen_init(void)
{
    ui_ResultNotFound = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ResultNotFound, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopRowS5 = lv_obj_create(ui_ResultNotFound);
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
    lv_label_set_text(ui_Circle1TextS5, "1");
    lv_obj_set_style_text_color(ui_Circle1TextS5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle1TextS5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle1TextS5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_label_set_text(ui_Circle2TextS5, "2");
    lv_obj_set_style_text_color(ui_Circle2TextS5, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle2TextS5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle2TextS5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

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

    ui_Label10 = lv_label_create(ui_ResultNotFound);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, 0);
    lv_obj_set_y(ui_Label10, -45);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "Ergebnis");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BottomRowS4 = lv_obj_create(ui_ResultNotFound);
    lv_obj_remove_style_all(ui_BottomRowS4);
    lv_obj_set_width(ui_BottomRowS4, 320);
    lv_obj_set_height(ui_BottomRowS4, 80);
    lv_obj_set_x(ui_BottomRowS4, 0);
    lv_obj_set_y(ui_BottomRowS4, 80);
    lv_obj_set_align(ui_BottomRowS4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BottomRowS4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BottomRowS4, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END);
    lv_obj_clear_flag(ui_BottomRowS4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_BottomRowS4, &ui_img_bg_arc_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BottomRowS4, lv_color_hex(0xCECECE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BottomRowS4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftColS4 = lv_obj_create(ui_BottomRowS4);
    lv_obj_remove_style_all(ui_LeftColS4);
    lv_obj_set_width(ui_LeftColS4, lv_pct(31));
    lv_obj_set_height(ui_LeftColS4, lv_pct(100));
    lv_obj_set_x(ui_LeftColS4, -4);
    lv_obj_set_y(ui_LeftColS4, -15);
    lv_obj_set_align(ui_LeftColS4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_LeftColS4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_LeftColS4, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_LeftColS4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CenterColS4 = lv_obj_create(ui_BottomRowS4);
    lv_obj_remove_style_all(ui_CenterColS4);
    lv_obj_set_width(ui_CenterColS4, lv_pct(31));
    lv_obj_set_height(ui_CenterColS4, lv_pct(100));
    lv_obj_set_x(ui_CenterColS4, -4);
    lv_obj_set_y(ui_CenterColS4, -15);
    lv_obj_set_align(ui_CenterColS4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_CenterColS4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_CenterColS4, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CenterColS4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanIconS4 = lv_img_create(ui_CenterColS4);
    lv_img_set_src(ui_ScanIconS4, &ui_img_home_solid_png);
    lv_obj_set_width(ui_ScanIconS4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanIconS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanIconS4, -5);
    lv_obj_set_y(ui_ScanIconS4, 8);
    lv_obj_set_align(ui_ScanIconS4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScanIconS4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScanIconS4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanTextS4 = lv_label_create(ui_CenterColS4);
    lv_obj_set_width(ui_ScanTextS4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanTextS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanTextS4, -5);
    lv_obj_set_y(ui_ScanTextS4, 12);
    lv_obj_set_align(ui_ScanTextS4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScanTextS4, "Zurueck");
    lv_obj_set_style_text_font(ui_ScanTextS4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightColS4 = lv_obj_create(ui_BottomRowS4);
    lv_obj_remove_style_all(ui_RightColS4);
    lv_obj_set_width(ui_RightColS4, lv_pct(31));
    lv_obj_set_height(ui_RightColS4, lv_pct(100));
    lv_obj_set_x(ui_RightColS4, -4);
    lv_obj_set_y(ui_RightColS4, -15);
    lv_obj_set_align(ui_RightColS4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RightColS4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_RightColS4, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightColS4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container16 = lv_obj_create(ui_ResultNotFound);
    lv_obj_remove_style_all(ui_Container16);
    lv_obj_set_width(ui_Container16, 28);
    lv_obj_set_height(ui_Container16, 15);
    lv_obj_set_x(ui_Container16, 142);
    lv_obj_set_y(ui_Container16, -110);
    lv_obj_set_align(ui_Container16, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container16, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container16, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container16, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image18 = lv_img_create(ui_Container16);
    lv_img_set_src(ui_Image18, &ui_img_wifi_solid_png);
    lv_obj_set_width(ui_Image18, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image18, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image18, 114);
    lv_obj_set_y(ui_Image18, 1);
    lv_obj_set_align(ui_Image18, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image18, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BatteryS5 = lv_img_create(ui_Container16);
    lv_img_set_src(ui_BatteryS5, &ui_img_battery_empty_solid_png);
    lv_obj_set_width(ui_BatteryS5, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_BatteryS5, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_BatteryS5, 147);
    lv_obj_set_y(ui_BatteryS5, -2);
    lv_obj_set_align(ui_BatteryS5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BatteryS5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BatteryS5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container11 = lv_obj_create(ui_ResultNotFound);
    lv_obj_remove_style_all(ui_Container11);
    lv_obj_set_height(ui_Container11, 50);
    lv_obj_set_width(ui_Container11, lv_pct(100));
    lv_obj_set_align(ui_Container11, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container11, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container11, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container11, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image14 = lv_img_create(ui_Container11);
    lv_img_set_src(ui_Image14, &ui_img_tint_slash_solid_png);
    lv_obj_set_width(ui_Image14, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_Image14, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_Image14, -109);
    lv_obj_set_y(ui_Image14, 0);
    lv_obj_set_align(ui_Image14, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image14, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label11 = lv_label_create(ui_Container11);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, 75);
    lv_obj_set_y(ui_Label11, 6);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Die Farbe wurde nicht gefunden");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}