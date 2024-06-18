SET(SOURCES ui_Screen1.c
    ui_Screen2.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    ui_img_camera_solid_png.c
    ui_img_plus_solid_png.c
    ui_img_minus_solid_png.c
    ui_img_circle_solid_png.c)

add_library(ui ${SOURCES})
