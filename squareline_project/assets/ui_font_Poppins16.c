/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/timoo/print-store-hardware-display/squareline_project/assets/Poppins-Regular.ttf -o C:/Users/timoo/print-store-hardware-display/squareline_project/assets\ui_font_Poppins16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_POPPINS16
#define UI_FONT_POPPINS16 1
#endif

#if UI_FONT_POPPINS16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x60,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0xc, 0x40, 0x84, 0x8, 0xc7, 0xff, 0x18, 0x81,
    0x88, 0x10, 0x81, 0x8, 0xff, 0xe3, 0x10, 0x31,
    0x2, 0x10,

    /* U+0024 "$" */
    0x10, 0x21, 0xf6, 0xb9, 0x32, 0x34, 0x1e, 0x16,
    0x26, 0x4e, 0xb7, 0xc2, 0x4, 0x0,

    /* U+0025 "%" */
    0x70, 0x91, 0x32, 0x2c, 0x39, 0x80, 0x60, 0x8,
    0x3, 0x70, 0xd1, 0x1a, 0x26, 0x44, 0x87, 0x0,

    /* U+0026 "&" */
    0x1c, 0x4, 0x40, 0x80, 0x10, 0x3, 0x0, 0x91,
    0xa1, 0x24, 0x1c, 0x81, 0x8, 0xf0, 0xf3, 0x0,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x19, 0x88, 0x84, 0x62, 0x10, 0x84, 0x21, 0x8,
    0x21, 0xc, 0x30, 0xc0,

    /* U+0029 ")" */
    0x41, 0xc, 0x21, 0xc, 0x21, 0x8, 0x42, 0x10,
    0x88, 0x46, 0x23, 0x0,

    /* U+002A "*" */
    0x22, 0x87, 0x9e, 0xa8, 0x80,

    /* U+002B "+" */
    0x8, 0x8, 0x8, 0xff, 0x8, 0x8, 0x8, 0x8,

    /* U+002C "," */
    0x69, 0x68,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x20, 0x86, 0x18, 0x41, 0xc, 0x30, 0x82,
    0x18, 0x61, 0x4, 0x30, 0xc2, 0x0,

    /* U+0030 "0" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x83, 0x42, 0x3c,

    /* U+0031 "1" */
    0xe4, 0x92, 0x49, 0x24, 0x90,

    /* U+0032 "2" */
    0x38, 0x44, 0x82, 0x82, 0x2, 0x6, 0x4, 0x8,
    0x18, 0x20, 0x40, 0xff,

    /* U+0033 "3" */
    0x3d, 0x8f, 0x8, 0x10, 0x67, 0x1, 0x1, 0x3,
    0x7, 0x1b, 0xe0,

    /* U+0034 "4" */
    0x6, 0x7, 0x2, 0x82, 0x43, 0x23, 0x13, 0x9,
    0xff, 0x2, 0x1, 0x0, 0x80,

    /* U+0035 "5" */
    0xfe, 0x80, 0x80, 0x80, 0xbc, 0xc2, 0x81, 0x1,
    0x1, 0x81, 0xc2, 0x3c,

    /* U+0036 "6" */
    0x3c, 0x42, 0xc1, 0x80, 0xbc, 0xc2, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0037 "7" */
    0xff, 0x3, 0x2, 0x6, 0x4, 0x4, 0xc, 0x8,
    0x18, 0x10, 0x30, 0x30,

    /* U+0038 "8" */
    0x3e, 0x63, 0x41, 0x41, 0x63, 0x3e, 0x43, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0xc1, 0x42, 0x3c,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x4a, 0x0,

    /* U+003C "<" */
    0xc, 0x46, 0x30, 0x60, 0x40, 0xc0,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x60, 0xc1, 0x83, 0x18, 0xc6, 0x0,

    /* U+003F "?" */
    0x7d, 0x8e, 0x8, 0x10, 0x67, 0x8, 0x10, 0x0,
    0xc1, 0x80,

    /* U+0040 "@" */
    0x7, 0xe0, 0x60, 0x43, 0x0, 0x91, 0xf9, 0x48,
    0xc6, 0x41, 0x19, 0x4, 0x64, 0x31, 0x91, 0xca,
    0x39, 0xc4, 0x0, 0x18, 0x20, 0x1f, 0x80,

    /* U+0041 "A" */
    0x18, 0xe, 0x5, 0x6, 0xc2, 0x61, 0x11, 0x8c,
    0xfe, 0xc1, 0x60, 0xe0, 0x20,

    /* U+0042 "B" */
    0xfc, 0x86, 0x82, 0x82, 0x86, 0xfc, 0x82, 0x81,
    0x81, 0x83, 0xfe,

    /* U+0043 "C" */
    0x1f, 0x8, 0x64, 0xe, 0x0, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x40, 0xc8, 0x61, 0xf0,

    /* U+0044 "D" */
    0xfc, 0x41, 0x20, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x81, 0x41, 0xbf, 0x0,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xe8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xe8, 0x20, 0x82, 0x8,
    0x0,

    /* U+0047 "G" */
    0x1f, 0x4, 0x39, 0x1, 0x40, 0x8, 0x1, 0xf,
    0xe0, 0x1c, 0x3, 0x40, 0x44, 0x30, 0x7c, 0x0,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xe0,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x10, 0x41, 0x87, 0x37,
    0x80,

    /* U+004B "K" */
    0x86, 0x8c, 0x98, 0xb0, 0xa0, 0xc0, 0xe0, 0xb0,
    0x98, 0x8c, 0x86,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0x84, 0x3e,

    /* U+004D "M" */
    0x80, 0x38, 0xf, 0x1, 0xf0, 0x7a, 0xb, 0x63,
    0x64, 0x4c, 0xd9, 0x8a, 0x31, 0xc6, 0x10, 0x80,

    /* U+004E "N" */
    0x80, 0xe0, 0x78, 0x36, 0x19, 0x8c, 0x46, 0x33,
    0xd, 0x83, 0xc0, 0xe0, 0x20,

    /* U+004F "O" */
    0x1f, 0x4, 0x11, 0x1, 0x40, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x40, 0x44, 0x10, 0x7c, 0x0,

    /* U+0050 "P" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa0, 0x40, 0x81,
    0x2, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x4, 0x11, 0x1, 0x40, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x40, 0x44, 0x18, 0x7e, 0x0,
    0x60, 0x6,

    /* U+0052 "R" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa6, 0x44, 0x8d,
    0xa, 0x8,

    /* U+0053 "S" */
    0x7d, 0x8e, 0xc, 0xe, 0xf, 0x81, 0x81, 0x83,
    0x8d, 0xf0,

    /* U+0054 "T" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0x40, 0x50, 0x36, 0xc, 0x82, 0x31, 0x8c, 0x41,
    0x30, 0x6c, 0xa, 0x3, 0x80, 0xc0,

    /* U+0057 "W" */
    0x41, 0x82, 0x83, 0xd, 0x8e, 0x1b, 0x16, 0x22,
    0x2c, 0xc4, 0xc9, 0x8d, 0x12, 0x1a, 0x34, 0x14,
    0x38, 0x38, 0x60, 0x60, 0xc0,

    /* U+0058 "X" */
    0xc3, 0x42, 0x66, 0x34, 0x18, 0x18, 0x18, 0x2c,
    0x66, 0x42, 0xc3,

    /* U+0059 "Y" */
    0x41, 0x31, 0x88, 0x86, 0xc1, 0x40, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0,

    /* U+005A "Z" */
    0xfe, 0xc, 0x30, 0x61, 0x82, 0xc, 0x30, 0x61,
    0x83, 0xf8,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x24, 0x9c,

    /* U+005C "\\" */
    0xc0, 0x81, 0x3, 0x6, 0x4, 0x8, 0x18, 0x30,
    0x20, 0x40, 0xc0, 0x81, 0x3, 0x6, 0x4, 0x8,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x49, 0x3c,

    /* U+005E "^" */
    0x18, 0x18, 0x3c, 0x34, 0x24, 0x66, 0x42, 0xc3,
    0x81,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0xc, 0x30,

    /* U+0061 "a" */
    0x3e, 0xb1, 0xf0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc7, 0x3e, 0x80,

    /* U+0062 "b" */
    0x80, 0x40, 0x20, 0x17, 0xce, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xf8, 0xd7, 0xc0,

    /* U+0063 "c" */
    0x3c, 0x46, 0x83, 0x80, 0x80, 0x80, 0x83, 0x46,
    0x3c,

    /* U+0064 "d" */
    0x0, 0x80, 0x40, 0x27, 0xd6, 0x3e, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xe7, 0xd0,

    /* U+0065 "e" */
    0x3c, 0x42, 0x81, 0x81, 0xff, 0x80, 0x81, 0x42,
    0x3c,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x3e, 0xb1, 0xf0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc7, 0x3e, 0x80, 0x70, 0x2c, 0x23, 0xe0,

    /* U+0068 "h" */
    0x80, 0x80, 0x80, 0xbc, 0xc2, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81,

    /* U+0069 "i" */
    0xf2, 0xaa, 0xaa,

    /* U+006A "j" */
    0x6c, 0x24, 0x92, 0x49, 0x24, 0x94,

    /* U+006B "k" */
    0x82, 0x8, 0x23, 0x9a, 0xce, 0x30, 0xe2, 0xc9,
    0xa3,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xbc, 0x79, 0x87, 0xa, 0x4, 0xc, 0x8, 0x18,
    0x10, 0x30, 0x20, 0x60, 0x40, 0xc0, 0x81, 0x81,
    0x2,

    /* U+006E "n" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81,

    /* U+006F "o" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0070 "p" */
    0xbe, 0x71, 0xb0, 0x70, 0x18, 0xc, 0x7, 0x7,
    0xc6, 0xbe, 0x40, 0x20, 0x10, 0x8, 0x0,

    /* U+0071 "q" */
    0x3e, 0xb1, 0xf0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc7, 0x3e, 0x80, 0x40, 0x20, 0x10, 0x8,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0073 "s" */
    0x7a, 0x38, 0x70, 0x78, 0x38, 0x61, 0x78,

    /* U+0074 "t" */
    0x42, 0x3e, 0x84, 0x21, 0x8, 0x42, 0xe,

    /* U+0075 "u" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x43,
    0x3d,

    /* U+0076 "v" */
    0xc1, 0xa0, 0x98, 0xc4, 0x42, 0x21, 0xb0, 0x50,
    0x38, 0x1c, 0x0,

    /* U+0077 "w" */
    0xc3, 0x1a, 0x38, 0x91, 0x44, 0xca, 0x22, 0x5b,
    0x16, 0x50, 0xa2, 0x87, 0x1c, 0x18, 0x40,

    /* U+0078 "x" */
    0x42, 0xcc, 0xb1, 0xc1, 0x87, 0xb, 0x33, 0x46,

    /* U+0079 "y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x43, 0x21, 0xb0, 0x50,
    0x38, 0x8, 0xc, 0x6, 0x2, 0x3, 0x0,

    /* U+007A "z" */
    0xfc, 0x31, 0x84, 0x30, 0x86, 0x30, 0xfc,

    /* U+007B "{" */
    0x1c, 0x82, 0x8, 0x20, 0x41, 0x4, 0xe3, 0x81,
    0x4, 0x10, 0x82, 0x8, 0x20, 0x70,

    /* U+007C "|" */
    0xff, 0xfe,

    /* U+007D "}" */
    0xe0, 0x84, 0x63, 0x10, 0x84, 0x18, 0xc8, 0x42,
    0x8, 0x42, 0x17, 0x0,

    /* U+007E "~" */
    0xe7, 0x38
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 68, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 76, .box_w = 1, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 5, .adv_w = 215, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 159, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 37, .adv_w = 194, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 189, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 41, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 70, .adv_w = 116, .box_w = 5, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 82, .adv_w = 116, .box_w = 5, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 94, .adv_w = 124, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 99, .adv_w = 175, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 107, .adv_w = 51, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 109, .adv_w = 141, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 110, .adv_w = 54, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 122, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 125, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 82, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 147, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 151, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 140, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 55, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 68, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 246, .adv_w = 142, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 252, .adv_w = 185, .box_w = 8, .box_h = 5, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 257, .adv_w = 138, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 263, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 259, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 296, .adv_w = 173, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 198, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 181, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 131, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 129, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 199, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 177, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 63, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 136, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 111, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 220, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 180, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 201, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 202, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 494, .adv_w = 156, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 150, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 173, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 173, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 250, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 150, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 108, .box_w = 3, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 612, .adv_w = 168, .box_w = 7, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 628, .adv_w = 108, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 635, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 644, .adv_w = 188, .box_w = 9, .box_h = 1, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 646, .adv_w = 66, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 648, .adv_w = 173, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 173, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 173, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 84, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 726, .adv_w = 164, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 63, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 63, .box_w = 3, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 747, .adv_w = 132, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 63, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 264, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 164, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 164, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 810, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 825, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 134, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 164, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 210, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 144, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 903, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 118, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 924, .adv_w = 74, .box_w = 1, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 926, .adv_w = 118, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 938, .adv_w = 133, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Poppins16 = {
#else
lv_font_t ui_font_Poppins16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_POPPINS16*/

