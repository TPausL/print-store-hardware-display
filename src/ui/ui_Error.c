// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Error_screen_init(void)
{
    ui_Error = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Error, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BottomRowS5 = lv_obj_create(ui_Error);
    lv_obj_remove_style_all(ui_BottomRowS5);
    lv_obj_set_width(ui_BottomRowS5, 320);
    lv_obj_set_height(ui_BottomRowS5, 80);
    lv_obj_set_x(ui_BottomRowS5, 0);
    lv_obj_set_y(ui_BottomRowS5, 80);
    lv_obj_set_align(ui_BottomRowS5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BottomRowS5, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BottomRowS5, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END);
    lv_obj_clear_flag(ui_BottomRowS5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_BottomRowS5, &ui_img_bg_arc_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BottomRowS5, lv_color_hex(0xCECECE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BottomRowS5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftColS5 = lv_obj_create(ui_BottomRowS5);
    lv_obj_remove_style_all(ui_LeftColS5);
    lv_obj_set_width(ui_LeftColS5, lv_pct(31));
    lv_obj_set_height(ui_LeftColS5, lv_pct(100));
    lv_obj_set_x(ui_LeftColS5, -4);
    lv_obj_set_y(ui_LeftColS5, -15);
    lv_obj_set_align(ui_LeftColS5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_LeftColS5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_LeftColS5, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_LeftColS5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CenterColS5 = lv_obj_create(ui_BottomRowS5);
    lv_obj_remove_style_all(ui_CenterColS5);
    lv_obj_set_width(ui_CenterColS5, lv_pct(31));
    lv_obj_set_height(ui_CenterColS5, lv_pct(100));
    lv_obj_set_x(ui_CenterColS5, -4);
    lv_obj_set_y(ui_CenterColS5, -15);
    lv_obj_set_align(ui_CenterColS5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_CenterColS5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_CenterColS5, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CenterColS5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanIconS5 = lv_img_create(ui_CenterColS5);
    lv_img_set_src(ui_ScanIconS5, &ui_img_home_solid_png);
    lv_obj_set_width(ui_ScanIconS5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanIconS5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanIconS5, -5);
    lv_obj_set_y(ui_ScanIconS5, 8);
    lv_obj_set_align(ui_ScanIconS5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScanIconS5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScanIconS5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanTextS5 = lv_label_create(ui_CenterColS5);
    lv_obj_set_width(ui_ScanTextS5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanTextS5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanTextS5, -5);
    lv_obj_set_y(ui_ScanTextS5, 12);
    lv_obj_set_align(ui_ScanTextS5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScanTextS5, "Zurueck");
    lv_obj_set_style_text_font(ui_ScanTextS5, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightColS5 = lv_obj_create(ui_BottomRowS5);
    lv_obj_remove_style_all(ui_RightColS5);
    lv_obj_set_width(ui_RightColS5, lv_pct(31));
    lv_obj_set_height(ui_RightColS5, lv_pct(100));
    lv_obj_set_x(ui_RightColS5, -4);
    lv_obj_set_y(ui_RightColS5, -15);
    lv_obj_set_align(ui_RightColS5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RightColS5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_RightColS5, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightColS5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ErrorText = lv_label_create(ui_Error);
    lv_obj_set_width(ui_ErrorText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ErrorText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ErrorText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ErrorText, "Es ist ein Fehler aufgetreten!");
    lv_obj_set_style_text_color(ui_ErrorText, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ErrorText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ErrorText, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image13 = lv_img_create(ui_Error);
    lv_img_set_src(ui_Image13, &ui_img_exclamation_triangle_solid_png);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 64
    lv_obj_set_x(ui_Image13, 0);
    lv_obj_set_y(ui_Image13, -67);
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container13 = lv_obj_create(ui_Error);
    lv_obj_remove_style_all(ui_Container13);
    lv_obj_set_width(ui_Container13, 28);
    lv_obj_set_height(ui_Container13, 15);
    lv_obj_set_x(ui_Container13, 142);
    lv_obj_set_y(ui_Container13, -110);
    lv_obj_set_align(ui_Container13, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container13, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container13, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container13, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image17 = lv_img_create(ui_Container13);
    lv_img_set_src(ui_Image17, &ui_img_wifi_solid_png);
    lv_obj_set_width(ui_Image17, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image17, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image17, 114);
    lv_obj_set_y(ui_Image17, 1);
    lv_obj_set_align(ui_Image17, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image17, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BatteryS7 = lv_img_create(ui_Container13);
    lv_img_set_src(ui_BatteryS7, &ui_img_battery_empty_solid_png);
    lv_obj_set_width(ui_BatteryS7, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_BatteryS7, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_BatteryS7, 147);
    lv_obj_set_y(ui_BatteryS7, -2);
    lv_obj_set_align(ui_BatteryS7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BatteryS7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BatteryS7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
