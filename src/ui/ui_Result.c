// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Result_screen_init(void)
{
    ui_Result = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Result, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_Result, &ui_font_Poppins14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TopRowS4 = lv_obj_create(ui_Result);
    lv_obj_remove_style_all(ui_TopRowS4);
    lv_obj_set_width(ui_TopRowS4, 320);
    lv_obj_set_height(ui_TopRowS4, 60);
    lv_obj_set_x(ui_TopRowS4, 0);
    lv_obj_set_y(ui_TopRowS4, -75);
    lv_obj_set_align(ui_TopRowS4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_TopRowS4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_TopRowS4, LV_FLEX_ALIGN_SPACE_AROUND, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopRowS4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle1S4 = lv_img_create(ui_TopRowS4);
    lv_img_set_src(ui_Circle1S4, &ui_img_circle_solid_green_png);
    lv_obj_set_width(ui_Circle1S4, 48);
    lv_obj_set_height(ui_Circle1S4, 48);
    lv_obj_set_x(ui_Circle1S4, -124);
    lv_obj_set_y(ui_Circle1S4, -13);
    lv_obj_set_align(ui_Circle1S4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle1S4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle1S4, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle1S4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle1S4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Circle1S4, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Circle1S4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle1S4, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle1TextS4 = lv_label_create(ui_Circle1S4);
    lv_obj_set_width(ui_Circle1TextS4, lv_pct(100));
    lv_obj_set_height(ui_Circle1TextS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle1TextS4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle1TextS4, "1");
    lv_obj_set_style_text_color(ui_Circle1TextS4, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle1TextS4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle1TextS4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider1S4 = lv_obj_create(ui_TopRowS4);
    lv_obj_set_width(ui_Divider1S4, 80);
    lv_obj_set_height(ui_Divider1S4, 7);
    lv_obj_set_x(ui_Divider1S4, -60);
    lv_obj_set_y(ui_Divider1S4, -92);
    lv_obj_set_align(ui_Divider1S4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider1S4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle2S4 = lv_img_create(ui_TopRowS4);
    lv_img_set_src(ui_Circle2S4, &ui_img_circle_solid_green_png);
    lv_obj_set_width(ui_Circle2S4, 48);
    lv_obj_set_height(ui_Circle2S4, 48);
    lv_obj_set_x(ui_Circle2S4, -124);
    lv_obj_set_y(ui_Circle2S4, -13);
    lv_obj_set_align(ui_Circle2S4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle2S4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle2S4, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle2S4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle2S4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Circle2S4, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Circle2S4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle2S4, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui_Circle2S4, lv_color_hex(0x240909), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Circle2S4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle2TextS4 = lv_label_create(ui_Circle2S4);
    lv_obj_set_width(ui_Circle2TextS4, lv_pct(100));
    lv_obj_set_height(ui_Circle2TextS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle2TextS4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle2TextS4, "2");
    lv_obj_set_style_text_color(ui_Circle2TextS4, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle2TextS4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle2TextS4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider2S4 = lv_obj_create(ui_TopRowS4);
    lv_obj_set_width(ui_Divider2S4, 80);
    lv_obj_set_height(ui_Divider2S4, 7);
    lv_obj_set_x(ui_Divider2S4, -60);
    lv_obj_set_y(ui_Divider2S4, -92);
    lv_obj_set_align(ui_Divider2S4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider2S4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle3S4 = lv_img_create(ui_TopRowS4);
    lv_img_set_src(ui_Circle3S4, &ui_img_circle_solid_large_png);
    lv_obj_set_width(ui_Circle3S4, 48);
    lv_obj_set_height(ui_Circle3S4, 48);
    lv_obj_set_x(ui_Circle3S4, -124);
    lv_obj_set_y(ui_Circle3S4, -13);
    lv_obj_set_align(ui_Circle3S4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Circle3S4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Circle3S4, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Circle3S4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Circle3S4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Circle3TextS4 = lv_label_create(ui_Circle3S4);
    lv_obj_set_width(ui_Circle3TextS4, lv_pct(100));
    lv_obj_set_height(ui_Circle3TextS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Circle3TextS4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Circle3TextS4, "3");
    lv_obj_set_style_text_color(ui_Circle3TextS4, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Circle3TextS4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Circle3TextS4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ResultHeadlineProd = lv_label_create(ui_Result);
    lv_obj_set_width(ui_ResultHeadlineProd, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ResultHeadlineProd, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ResultHeadlineProd, 0);
    lv_obj_set_y(ui_ResultHeadlineProd, -48);
    lv_obj_set_align(ui_ResultHeadlineProd, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ResultHeadlineProd, "Ergebnis");
    lv_obj_set_style_text_color(ui_ResultHeadlineProd, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ResultHeadlineProd, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BottomRowS3 = lv_obj_create(ui_Result);
    lv_obj_remove_style_all(ui_BottomRowS3);
    lv_obj_set_width(ui_BottomRowS3, 320);
    lv_obj_set_height(ui_BottomRowS3, 80);
    lv_obj_set_x(ui_BottomRowS3, 0);
    lv_obj_set_y(ui_BottomRowS3, 80);
    lv_obj_set_align(ui_BottomRowS3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BottomRowS3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BottomRowS3, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END);
    lv_obj_clear_flag(ui_BottomRowS3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_BottomRowS3, &ui_img_bg_arc_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BottomRowS3, lv_color_hex(0xCECECE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BottomRowS3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftColS3 = lv_obj_create(ui_BottomRowS3);
    lv_obj_remove_style_all(ui_LeftColS3);
    lv_obj_set_width(ui_LeftColS3, lv_pct(31));
    lv_obj_set_height(ui_LeftColS3, lv_pct(100));
    lv_obj_set_x(ui_LeftColS3, -4);
    lv_obj_set_y(ui_LeftColS3, -15);
    lv_obj_set_align(ui_LeftColS3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_LeftColS3, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_LeftColS3, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_LeftColS3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CenterColS3 = lv_obj_create(ui_BottomRowS3);
    lv_obj_remove_style_all(ui_CenterColS3);
    lv_obj_set_width(ui_CenterColS3, lv_pct(31));
    lv_obj_set_height(ui_CenterColS3, lv_pct(100));
    lv_obj_set_x(ui_CenterColS3, -3);
    lv_obj_set_y(ui_CenterColS3, -14);
    lv_obj_set_align(ui_CenterColS3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_CenterColS3, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_CenterColS3, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CenterColS3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanIconS3 = lv_img_create(ui_CenterColS3);
    lv_img_set_src(ui_ScanIconS3, &ui_img_home_solid_png);
    lv_obj_set_width(ui_ScanIconS3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanIconS3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanIconS3, -5);
    lv_obj_set_y(ui_ScanIconS3, 8);
    lv_obj_set_align(ui_ScanIconS3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScanIconS3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScanIconS3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScanTextS3 = lv_label_create(ui_CenterColS3);
    lv_obj_set_width(ui_ScanTextS3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScanTextS3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScanTextS3, -5);
    lv_obj_set_y(ui_ScanTextS3, 12);
    lv_obj_set_align(ui_ScanTextS3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScanTextS3, "Zurück");
    lv_obj_set_style_text_font(ui_ScanTextS3, &ui_font_Poppins20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RightColS3 = lv_obj_create(ui_BottomRowS3);
    lv_obj_remove_style_all(ui_RightColS3);
    lv_obj_set_width(ui_RightColS3, lv_pct(31));
    lv_obj_set_height(ui_RightColS3, lv_pct(100));
    lv_obj_set_x(ui_RightColS3, -4);
    lv_obj_set_y(ui_RightColS3, -15);
    lv_obj_set_align(ui_RightColS3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RightColS3, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_RightColS3, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RightColS3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutIconS3 = lv_img_create(ui_RightColS3);
    lv_img_set_src(ui_InOutIconS3, &ui_img_trash_alt_solid_png);
    lv_obj_set_width(ui_InOutIconS3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutIconS3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutIconS3, -5);
    lv_obj_set_y(ui_InOutIconS3, 13);
    lv_obj_set_align(ui_InOutIconS3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_InOutIconS3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_InOutIconS3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_InOutTextS3 = lv_label_create(ui_RightColS3);
    lv_obj_set_width(ui_InOutTextS3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InOutTextS3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InOutTextS3, -5);
    lv_obj_set_y(ui_InOutTextS3, 12);
    lv_obj_set_align(ui_InOutTextS3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_InOutTextS3, "Löschen");

    ui_Container1 = lv_obj_create(ui_Result);
    lv_obj_remove_style_all(ui_Container1);
    lv_obj_set_width(ui_Container1, 320);
    lv_obj_set_height(ui_Container1, 70);
    lv_obj_set_align(ui_Container1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container3 = lv_obj_create(ui_Container1);
    lv_obj_remove_style_all(ui_Container3);
    lv_obj_set_width(ui_Container3, lv_pct(33));
    lv_obj_set_height(ui_Container3, lv_pct(100));
    lv_obj_set_align(ui_Container3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container3, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Container3, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image1 = lv_img_create(ui_Container3);
    lv_img_set_src(ui_Image1, &ui_img_ruler_horizontal_solid_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ResultSize = lv_label_create(ui_Container3);
    lv_obj_set_width(ui_ResultSize, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ResultSize, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ResultSize, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ResultSize, "Klein");
    lv_obj_set_style_text_color(ui_ResultSize, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ResultSize, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container4 = lv_obj_create(ui_Container1);
    lv_obj_remove_style_all(ui_Container4);
    lv_obj_set_width(ui_Container4, lv_pct(33));
    lv_obj_set_height(ui_Container4, lv_pct(100));
    lv_obj_set_align(ui_Container4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container4, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Container4, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image3 = lv_img_create(ui_Container4);
    lv_img_set_src(ui_Image3, &ui_img_palette_solid_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_Image3, -115);
    lv_obj_set_y(ui_Image3, -6);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ResultCol = lv_label_create(ui_Container4);
    lv_obj_set_width(ui_ResultCol, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ResultCol, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ResultCol, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ResultCol, "Rot");
    lv_obj_set_style_text_color(ui_ResultCol, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ResultCol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container5 = lv_obj_create(ui_Container1);
    lv_obj_remove_style_all(ui_Container5);
    lv_obj_set_width(ui_Container5, lv_pct(33));
    lv_obj_set_height(ui_Container5, lv_pct(100));
    lv_obj_set_align(ui_Container5, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container5, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Container5, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image4 = lv_img_create(ui_Container5);
    lv_img_set_src(ui_Image4, &ui_img_shapes_solid_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_Image4, 75);
    lv_obj_set_y(ui_Image4, -3);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ResultShape = lv_label_create(ui_Container5);
    lv_obj_set_width(ui_ResultShape, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ResultShape, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ResultShape, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ResultShape, "Fahrrad");
    lv_obj_set_style_text_color(ui_ResultShape, lv_color_hex(0xCDCECD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ResultShape, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container9 = lv_obj_create(ui_Result);
    lv_obj_remove_style_all(ui_Container9);
    lv_obj_set_width(ui_Container9, 28);
    lv_obj_set_height(ui_Container9, 15);
    lv_obj_set_x(ui_Container9, 142);
    lv_obj_set_y(ui_Container9, -110);
    lv_obj_set_align(ui_Container9, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Container9, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container9, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container9, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image8 = lv_img_create(ui_Container9);
    lv_img_set_src(ui_Image8, &ui_img_wifi_solid_png);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_Image8, 114);
    lv_obj_set_y(ui_Image8, 1);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BatteryS3 = lv_img_create(ui_Container9);
    lv_img_set_src(ui_BatteryS3, &ui_img_battery_empty_solid_png);
    lv_obj_set_width(ui_BatteryS3, LV_SIZE_CONTENT);   /// 12
    lv_obj_set_height(ui_BatteryS3, LV_SIZE_CONTENT);    /// 12
    lv_obj_set_x(ui_BatteryS3, 147);
    lv_obj_set_y(ui_BatteryS3, -2);
    lv_obj_set_align(ui_BatteryS3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BatteryS3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BatteryS3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
