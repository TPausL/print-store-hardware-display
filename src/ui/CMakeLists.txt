SET(SOURCES ui_Idle.c
    ui_Scanning.c
    ui_Result.c
    ui_Startup.c
    ui_ResultColor.c
    ui_Error.c
    ui_ResultNotFound.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    ui_img_bg_arc_png.c
    ui_img_swatchbook_solid_png.c
    ui_img_camera_solid_png.c
    ui_img_plus_solid_png.c
    ui_img_minus_solid_png.c
    ui_img_circle_solid_large_png.c
    ui_img_circle_solid_png.c
    ui_img_circle_solid_red_png.c
    ui_img_wifi_solid_png.c
    ui_img_battery_empty_solid_png.c
    ui_img_battery_full_solid_png.c
    ui_img_battery_half_solid_png.c
    ui_img_battery_quarter_solid_png.c
    ui_img_battery_three_quarters_solid_png.c
    ui_img_circle_solid_green_png.c
    ui_img_home_solid_png.c
    ui_img_trash_alt_solid_png.c
    ui_img_ruler_horizontal_solid_png.c
    ui_img_palette_solid_png.c
    ui_img_shapes_solid_png.c
    ui_img_hourglass_start_solid_png.c
    ui_img_exclamation_triangle_solid_png.c
    ui_img_tint_slash_solid_png.c
    fonts/ui_font_NotoCheckEmoji.c
    fonts/ui_font_Poppins14.c
    fonts/ui_font_Poppins20.c
    fonts/ui_font_Poppins22.c
    fonts/ui_font_SourceCodeCheckEmoji.c)

add_library(ui ${SOURCES})
