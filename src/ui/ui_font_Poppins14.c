/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font C:/Users/timoo/print-store-hardware-display/squareline_project/assets/Poppins-Regular.ttf -o C:/Users/timoo/print-store-hardware-display/squareline_project/assets\ui_font_Poppins14.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_POPPINS14
#define UI_FONT_POPPINS14 1
#endif

#if UI_FONT_POPPINS14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfe, 0xc0,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x8, 0x81, 0x10, 0x22, 0x3f, 0xf1, 0x18, 0x22,
    0x4, 0x47, 0xfe, 0x33, 0x4, 0x60, 0x88, 0x0,

    /* U+0024 "$" */
    0x10, 0x47, 0xb5, 0x92, 0x47, 0x7, 0x16, 0x5d,
    0x5e, 0x10,

    /* U+0025 "%" */
    0x62, 0x49, 0x25, 0xc, 0x80, 0x80, 0x40, 0x4c,
    0x29, 0x24, 0xb1, 0x80,

    /* U+0026 "&" */
    0x1c, 0x9, 0x2, 0x0, 0xc0, 0x30, 0x12, 0x28,
    0x52, 0xc, 0xc7, 0x1f, 0x20,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x32, 0x44, 0xc8, 0x88, 0x88, 0x88, 0x44, 0x23,

    /* U+0029 ")" */
    0xc4, 0x22, 0x31, 0x11, 0x11, 0x11, 0x22, 0x4c,

    /* U+002A "*" */
    0x25, 0xd9, 0xf2, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x5a,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x18, 0x84, 0x23, 0x18, 0x84, 0x23, 0x10, 0x84,
    0x62, 0x10,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0031 "1" */
    0xd5, 0x55, 0x54,

    /* U+0032 "2" */
    0x79, 0x9a, 0x10, 0x20, 0x41, 0x2, 0x8, 0x20,
    0x83, 0xf8,

    /* U+0033 "3" */
    0x7b, 0x38, 0x41, 0xc, 0xc0, 0xc1, 0x87, 0x37,
    0x80,

    /* U+0034 "4" */
    0xc, 0xc, 0x14, 0x34, 0x24, 0x44, 0xc4, 0xff,
    0x4, 0x4,

    /* U+0035 "5" */
    0xfd, 0x2, 0x4, 0xb, 0xd8, 0xc0, 0x81, 0x83,
    0x89, 0xe0,

    /* U+0036 "6" */
    0x38, 0x8a, 0xc, 0xb, 0xd8, 0xe0, 0xc1, 0x82,
    0x8c, 0xf0,

    /* U+0037 "7" */
    0xfe, 0xc, 0x10, 0x20, 0xc1, 0x6, 0x8, 0x10,
    0x60, 0x80,

    /* U+0038 "8" */
    0x7d, 0x8e, 0xc, 0x1c, 0x6f, 0xb1, 0xc1, 0x83,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x79, 0x8a, 0xc, 0x18, 0x38, 0xde, 0x81, 0x82,
    0x88, 0xe0,

    /* U+003A ":" */
    0xc3,

    /* U+003B ";" */
    0x50, 0x5, 0x60,

    /* U+003C "<" */
    0x19, 0x10, 0x82, 0xc,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x41, 0x86, 0x33, 0x30,

    /* U+003F "?" */
    0x7b, 0x38, 0x41, 0xc, 0xe2, 0x0, 0x20, 0x80,

    /* U+0040 "@" */
    0xf, 0x81, 0x6, 0x27, 0xb4, 0x99, 0xd0, 0x99,
    0x9, 0x91, 0x99, 0x1a, 0x8e, 0xcc, 0x0, 0x61,
    0x3, 0xf0,

    /* U+0041 "A" */
    0xc, 0xe, 0x5, 0x2, 0xc3, 0x21, 0x10, 0x8c,
    0xfe, 0x41, 0x20, 0xc0,

    /* U+0042 "B" */
    0xfd, 0xe, 0xc, 0x3f, 0xd0, 0xe0, 0xc1, 0x87,
    0xf8,

    /* U+0043 "C" */
    0x1e, 0x31, 0x90, 0x70, 0x8, 0x4, 0x2, 0x0,
    0x83, 0x63, 0xf, 0x0,

    /* U+0044 "D" */
    0xf8, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82,
    0x86, 0xf8,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0x87, 0xc0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0x42, 0x10, 0x84, 0x0,

    /* U+0047 "G" */
    0x1e, 0x18, 0x64, 0xa, 0x0, 0x80, 0x21, 0xf8,
    0x5, 0x3, 0x61, 0x87, 0x80,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x83,
    0x4,

    /* U+0049 "I" */
    0xff, 0xc0,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x84, 0x31, 0x8b, 0x80,

    /* U+004B "K" */
    0x85, 0x12, 0x45, 0x8e, 0x1c, 0x2c, 0x48, 0x89,
    0x8,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0x80, 0x70, 0x3c, 0xf, 0x87, 0xa1, 0x6c, 0xd9,
    0x26, 0x79, 0x8c, 0x63, 0x10,

    /* U+004E "N" */
    0x81, 0xc1, 0xe1, 0xb1, 0x91, 0x89, 0x8d, 0x87,
    0x83, 0x81,

    /* U+004F "O" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x5, 0x2, 0x61, 0x87, 0x80,

    /* U+0050 "P" */
    0xfa, 0x38, 0x61, 0x8f, 0xe8, 0x20, 0x82, 0x0,

    /* U+0051 "Q" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x5, 0x2, 0x61, 0x87, 0xc0, 0x18, 0x3,

    /* U+0052 "R" */
    0xfa, 0x38, 0x61, 0x8f, 0xe9, 0x26, 0x8a, 0x10,

    /* U+0053 "S" */
    0x7a, 0x38, 0x20, 0x70, 0x60, 0x61, 0xcd, 0xe0,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x44,
    0x70,

    /* U+0056 "V" */
    0xc0, 0xa0, 0xd8, 0x44, 0x22, 0x21, 0x90, 0x58,
    0x28, 0x1c, 0x6, 0x0,

    /* U+0057 "W" */
    0xc3, 0xa, 0x18, 0x51, 0xc6, 0xcb, 0x22, 0x49,
    0x12, 0x48, 0xb2, 0xc7, 0x1c, 0x18, 0x60, 0xc3,
    0x0,

    /* U+0058 "X" */
    0x86, 0x89, 0xb1, 0x43, 0x6, 0xa, 0x26, 0x45,
    0xc,

    /* U+0059 "Y" */
    0x82, 0x89, 0x11, 0x42, 0x82, 0x4, 0x8, 0x10,
    0x20,

    /* U+005A "Z" */
    0xfc, 0x30, 0x86, 0x10, 0x86, 0x10, 0xc3, 0xf0,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xab,

    /* U+005C "\\" */
    0x86, 0x10, 0x84, 0x30, 0x84, 0x21, 0x84, 0x21,
    0x84, 0x21,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0x57,

    /* U+005E "^" */
    0x10, 0x60, 0xa3, 0x44, 0xc8, 0xb1, 0xc1,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x8c, 0x0,

    /* U+0061 "a" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0xbc, 0xc2, 0x81, 0x81, 0x81,
    0x81, 0xc2, 0xbc,

    /* U+0063 "c" */
    0x3c, 0x8e, 0xc, 0x8, 0x10, 0x51, 0x9c,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x3d, 0x43, 0x81, 0x81, 0x81,
    0x81, 0x43, 0x3d,

    /* U+0065 "e" */
    0x38, 0x8e, 0xf, 0xf8, 0x10, 0x51, 0x1c,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0xc1, 0x42, 0x3c,

    /* U+0068 "h" */
    0x81, 0x2, 0x5, 0xec, 0x70, 0x60, 0xc1, 0x83,
    0x6, 0x8,

    /* U+0069 "i" */
    0xdf, 0xe0,

    /* U+006A "j" */
    0x51, 0x55, 0x55, 0x5c,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x92, 0x8e, 0x38, 0xa2, 0x48,
    0x80,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xbc, 0xf6, 0x38, 0xe0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1,

    /* U+006F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0xc2, 0xbc,
    0x80, 0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xba, 0x49, 0x24,

    /* U+0073 "s" */
    0x7a, 0x38, 0x38, 0x1c, 0x18, 0x5e,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x47,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x71, 0xbd,

    /* U+0076 "v" */
    0xc2, 0x42, 0x46, 0x64, 0x24, 0x3c, 0x18, 0x18,

    /* U+0077 "w" */
    0xc6, 0x28, 0xc5, 0x29, 0xa5, 0x22, 0x94, 0x52,
    0x8c, 0x61, 0x8c,

    /* U+0078 "x" */
    0xc4, 0xd8, 0xa1, 0x83, 0x5, 0x13, 0x62,

    /* U+0079 "y" */
    0xc3, 0x42, 0x46, 0x24, 0x24, 0x3c, 0x18, 0x18,
    0x10, 0x10, 0x30, 0x20,

    /* U+007A "z" */
    0xf8, 0xc4, 0x66, 0x23, 0x1f,

    /* U+007B "{" */
    0x29, 0x24, 0x96, 0xc9, 0x24, 0x93,

    /* U+007C "|" */
    0xff, 0xf8,

    /* U+007D "}" */
    0x84, 0x44, 0x44, 0x47, 0x74, 0x44, 0x44, 0x4c,

    /* U+007E "~" */
    0xe6, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 67, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 65, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 5, .adv_w = 188, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 139, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 31, .adv_w = 170, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 166, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 36, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 57, .adv_w = 102, .box_w = 4, .box_h = 16, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 65, .adv_w = 102, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 73, .adv_w = 109, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 77, .adv_w = 153, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 84, .adv_w = 44, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 85, .adv_w = 123, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 86, .adv_w = 47, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 107, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 97, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 72, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 48, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 59, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 193, .adv_w = 124, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 197, .adv_w = 162, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 201, .adv_w = 121, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 205, .adv_w = 117, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 227, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 231, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 158, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 115, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 113, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 174, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 155, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 55, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 119, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 97, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 193, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 157, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 176, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 177, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 392, .adv_w = 136, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 131, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 151, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 219, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 121, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 95, .box_w = 2, .box_h = 16, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 485, .adv_w = 147, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 495, .adv_w = 95, .box_w = 2, .box_h = 16, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 499, .adv_w = 141, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 506, .adv_w = 164, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 507, .adv_w = 58, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 509, .adv_w = 151, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 74, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 571, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 55, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 56, .box_w = 2, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 587, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 55, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 231, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 143, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 638, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 650, .adv_w = 84, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 82, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 184, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 126, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 709, .adv_w = 102, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 103, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 720, .adv_w = 65, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 722, .adv_w = 103, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 730, .adv_w = 116, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
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
const lv_font_t ui_font_Poppins14 = {
#else
lv_font_t ui_font_Poppins14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_POPPINS14*/

