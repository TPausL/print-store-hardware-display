/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/timoo/print-store-hardware-display/squareline_project/assets/Poppins-Regular.ttf -o C:/Users/timoo/print-store-hardware-display/squareline_project/assets\ui_font_Poppins18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_POPPINS18
#define UI_FONT_POPPINS18 1
#endif

#if UI_FONT_POPPINS18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc3, 0xc0,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0x6, 0x30, 0x10, 0xc0, 0xc3, 0x1f, 0xff, 0x8,
    0x60, 0x21, 0x81, 0x86, 0x6, 0x18, 0xff, 0xf8,
    0x43, 0x1, 0xc, 0xc, 0x30, 0x30, 0x80,

    /* U+0024 "$" */
    0x8, 0x1f, 0x1b, 0xd9, 0x7c, 0x86, 0x41, 0xe0,
    0x7c, 0xf, 0x4, 0xc2, 0x79, 0x37, 0xb1, 0xf0,
    0x20, 0x10,

    /* U+0025 "%" */
    0x78, 0x4c, 0xc8, 0xcc, 0x8c, 0xd0, 0xcd, 0x7,
    0xa0, 0x2, 0x0, 0x40, 0x4, 0xe0, 0x9b, 0x9,
    0xb1, 0x1b, 0x30, 0xe0,

    /* U+0026 "&" */
    0x1e, 0x3, 0x30, 0x33, 0x3, 0x0, 0x38, 0x1,
    0x80, 0x3c, 0x6, 0x66, 0xc7, 0x6c, 0x3c, 0xc1,
    0x86, 0x3e, 0x3e, 0x70,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x8, 0x43, 0x18, 0x61, 0x8c, 0x30, 0xc3, 0xc,
    0x30, 0xc3, 0x6, 0x18, 0x60, 0xc1, 0x6,

    /* U+0029 ")" */
    0xc1, 0x83, 0xc, 0x18, 0x60, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x31, 0x86, 0x18, 0xc6, 0x10,

    /* U+002A "*" */
    0x11, 0xa9, 0xe3, 0xed, 0x42, 0x0,

    /* U+002B "+" */
    0xc, 0x6, 0x3, 0x1, 0x8f, 0xf8, 0x60, 0x30,
    0x18, 0xc, 0x0,

    /* U+002C "," */
    0x69, 0x68,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x18, 0x30, 0x60, 0x81, 0x6, 0xc, 0x10,
    0x20, 0xc1, 0x82, 0x4, 0x18, 0x30, 0x40, 0x83,
    0x6, 0x0,

    /* U+0030 "0" */
    0x3e, 0x31, 0x90, 0x58, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd0, 0x4c, 0x63, 0xe0,

    /* U+0031 "1" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0x3c, 0x33, 0x30, 0xd8, 0x60, 0x30, 0x18, 0x18,
    0x1c, 0xc, 0xc, 0xc, 0xc, 0xf, 0xf8,

    /* U+0033 "3" */
    0x3e, 0x31, 0xb0, 0x60, 0x30, 0x18, 0x18, 0x70,
    0x6, 0x1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0034 "4" */
    0x7, 0x1, 0xc0, 0xf0, 0x6c, 0x13, 0xc, 0xc2,
    0x31, 0x8c, 0xc3, 0x3f, 0xf0, 0x30, 0xc, 0x3,
    0x0,

    /* U+0035 "5" */
    0xff, 0x60, 0x30, 0x18, 0xd, 0xe7, 0x1b, 0x6,
    0x3, 0x1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0036 "6" */
    0x3e, 0x31, 0x98, 0xd8, 0xc, 0x6, 0xf3, 0x8d,
    0x83, 0xc1, 0xe0, 0xd0, 0x6c, 0x63, 0xe0,

    /* U+0037 "7" */
    0xff, 0x80, 0xc0, 0x40, 0x60, 0x20, 0x30, 0x18,
    0x18, 0xc, 0x4, 0x6, 0x2, 0x3, 0x0,

    /* U+0038 "8" */
    0x3e, 0x71, 0xf0, 0x78, 0x36, 0x31, 0xf1, 0x8d,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0039 "9" */
    0x3e, 0x31, 0xb0, 0x58, 0x3c, 0x1e, 0xd, 0x8e,
    0x7b, 0x1, 0xa0, 0xd8, 0xcc, 0x63, 0xe0,

    /* U+003A ":" */
    0xf0, 0x0, 0xf0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x69, 0x40,

    /* U+003C "<" */
    0x18, 0xc6, 0x30, 0xc1, 0x83, 0x6,

    /* U+003D "=" */
    0xff, 0x80, 0x0, 0x0, 0xf, 0xf8,

    /* U+003E ">" */
    0xc1, 0x83, 0x83, 0x1c, 0xc6, 0x30,

    /* U+003F "?" */
    0x3c, 0x66, 0xc3, 0xc3, 0x3, 0x3, 0x6, 0x3c,
    0x30, 0x30, 0x0, 0x30, 0x30,

    /* U+0040 "@" */
    0x3, 0xf0, 0xc, 0x1c, 0x18, 0x6, 0x30, 0x6,
    0x63, 0xf3, 0x6c, 0x63, 0xcc, 0x23, 0xd8, 0x23,
    0xd8, 0x23, 0xd8, 0x66, 0xdc, 0xa6, 0xcf, 0x3c,
    0x60, 0x0, 0x30, 0x40, 0x1f, 0xc0,

    /* U+0041 "A" */
    0xc, 0x1, 0xc0, 0x78, 0xf, 0x1, 0x30, 0x66,
    0xc, 0xc3, 0xc, 0x61, 0x8f, 0xf3, 0x3, 0x60,
    0x6c, 0x4,

    /* U+0042 "B" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0x1b, 0xf9,
    0x86, 0xc1, 0xe0, 0xf0, 0x78, 0x6f, 0xe0,

    /* U+0043 "C" */
    0xf, 0x83, 0x86, 0x60, 0x36, 0x3, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0x6, 0x3, 0x60,
    0x33, 0x86, 0xf, 0x80,

    /* U+0044 "D" */
    0xfe, 0x18, 0x73, 0x3, 0x60, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0x1b, 0x3, 0x61,
    0xcf, 0xe0,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0xe0, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+0047 "G" */
    0xf, 0x81, 0xc3, 0x18, 0xc, 0xc0, 0x3c, 0x0,
    0x60, 0x3, 0xf, 0xf8, 0x3, 0xc0, 0x1b, 0x0,
    0x98, 0xc, 0x70, 0xc0, 0xf8, 0x0,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3f,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xf, 0x1e, 0x27, 0x80,

    /* U+004B "K" */
    0xc1, 0xe1, 0xb1, 0x99, 0x8d, 0x87, 0x83, 0xc1,
    0xe0, 0xd8, 0x66, 0x31, 0x98, 0x6c, 0x18,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x30, 0xfc,

    /* U+004D "M" */
    0xc0, 0x1f, 0x1, 0xf8, 0xf, 0xe0, 0xff, 0x7,
    0xe8, 0x2f, 0x63, 0x79, 0x13, 0xcd, 0x9e, 0x28,
    0xf1, 0x47, 0x8e, 0x3c, 0x21, 0x80,

    /* U+004E "N" */
    0xc0, 0xf8, 0x3e, 0xf, 0xc3, 0xd8, 0xf2, 0x3c,
    0xcf, 0x13, 0xc6, 0xf0, 0xfc, 0x1f, 0x7, 0xc0,
    0xc0,

    /* U+004F "O" */
    0xf, 0x81, 0x87, 0x18, 0xc, 0xc0, 0x6c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1b, 0x1,
    0x98, 0xc, 0x71, 0xc0, 0xf8, 0x0,

    /* U+0050 "P" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0xd,
    0xfc, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0051 "Q" */
    0xf, 0x81, 0x87, 0x18, 0xc, 0xc0, 0x6c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1b, 0x1,
    0x98, 0xc, 0x71, 0xc0, 0xfc, 0x0, 0x30, 0x0,
    0xe0,

    /* U+0052 "R" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0xd,
    0xfc, 0xcc, 0x63, 0x31, 0x98, 0x6c, 0x18,

    /* U+0053 "S" */
    0x3e, 0x31, 0xb0, 0x78, 0xe, 0x7, 0xc0, 0xfc,
    0x1f, 0x3, 0x80, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0054 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x1, 0x80,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xd, 0x86, 0x3e,
    0x0,

    /* U+0056 "V" */
    0x40, 0x36, 0x6, 0x60, 0x62, 0x4, 0x30, 0xc3,
    0xc, 0x10, 0x81, 0x98, 0x19, 0x80, 0x90, 0xf,
    0x0, 0x70, 0x6, 0x0,

    /* U+0057 "W" */
    0x40, 0xc1, 0xb0, 0xe0, 0xd8, 0x70, 0x4c, 0x2c,
    0x22, 0x16, 0x31, 0x99, 0x18, 0xcc, 0x88, 0x64,
    0x64, 0x12, 0x36, 0xf, 0xb, 0x7, 0x7, 0x1,
    0x83, 0x80, 0xc0, 0xc0,

    /* U+0058 "X" */
    0xc1, 0xb0, 0xd8, 0xc6, 0x43, 0x60, 0xe0, 0x30,
    0x38, 0x36, 0x1b, 0x18, 0xcc, 0x2c, 0x18,

    /* U+0059 "Y" */
    0xc0, 0xd0, 0x26, 0x18, 0x84, 0x33, 0x4, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0x6, 0xc, 0x8, 0x18, 0x30,
    0x30, 0x60, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcf,

    /* U+005C "\\" */
    0xc0, 0x40, 0x60, 0x60, 0x20, 0x30, 0x30, 0x30,
    0x10, 0x18, 0x18, 0x8, 0xc, 0xc, 0xc, 0x4,
    0x6, 0x6, 0x2, 0x2,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x3f,

    /* U+005E "^" */
    0x8, 0x7, 0x1, 0xc0, 0x58, 0x32, 0x8, 0xc6,
    0x31, 0x6, 0xc1, 0xb0, 0x20,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0x8e, 0x30,

    /* U+0061 "a" */
    0x3e, 0xd8, 0x7e, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x87, 0x61, 0xcf, 0xb0,

    /* U+0062 "b" */
    0xc0, 0x30, 0xc, 0x3, 0x7c, 0xe1, 0xb8, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x3e, 0x1b, 0x86, 0xdf,
    0x0,

    /* U+0063 "c" */
    0x1e, 0x18, 0x66, 0xb, 0x0, 0xc0, 0x30, 0xc,
    0x1, 0x82, 0x61, 0x87, 0x80,

    /* U+0064 "d" */
    0x0, 0xc0, 0x30, 0xc, 0xfb, 0x61, 0xf8, 0x7c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x1d, 0x87, 0x3e,
    0xc0,

    /* U+0065 "e" */
    0x1f, 0x18, 0x64, 0xf, 0x3, 0xff, 0xf0, 0xc,
    0x1, 0x86, 0x71, 0x87, 0x80,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x18, 0xc6,
    0x0,

    /* U+0067 "g" */
    0x3e, 0xd8, 0x7e, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x87, 0x61, 0xcf, 0xb0, 0xc, 0x3, 0x60,
    0xdc, 0x61, 0xf0,

    /* U+0068 "h" */
    0xc0, 0x60, 0x30, 0x1b, 0xce, 0x36, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+0069 "i" */
    0xf3, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3e,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc7, 0xce, 0xcc, 0xd8, 0xf0,
    0xf0, 0xd8, 0xcc, 0xc6, 0xc7,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xde, 0x3c, 0xe3, 0x46, 0xc1, 0x83, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83,

    /* U+006E "n" */
    0xde, 0x71, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+006F "o" */
    0x1e, 0x18, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x86, 0x63, 0x87, 0x80,

    /* U+0070 "p" */
    0xdf, 0x38, 0x6e, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x86, 0xe1, 0xb7, 0xcc, 0x3, 0x0, 0xc0,
    0x30, 0xc, 0x0,

    /* U+0071 "q" */
    0x3e, 0xd8, 0x7e, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x87, 0x61, 0xcf, 0xb0, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc,

    /* U+0072 "r" */
    0xdf, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x0,

    /* U+0073 "s" */
    0x3c, 0xc7, 0xc3, 0xe0, 0x7c, 0x3e, 0x7, 0xc3,
    0xe3, 0x3c,

    /* U+0074 "t" */
    0x63, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x18, 0xc3,
    0x80,

    /* U+0075 "u" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x9e, 0xc0,

    /* U+0076 "v" */
    0xc0, 0xd8, 0x26, 0x18, 0x86, 0x33, 0xc, 0xc1,
    0x20, 0x78, 0xe, 0x3, 0x0,

    /* U+0077 "w" */
    0xc3, 0x4, 0x87, 0x19, 0x8e, 0x33, 0x14, 0x42,
    0x6c, 0x84, 0x9b, 0xd, 0x16, 0xe, 0x28, 0x18,
    0x70, 0x30, 0x60,

    /* U+0078 "x" */
    0x43, 0x62, 0x36, 0x34, 0x18, 0x1c, 0x3c, 0x26,
    0x62, 0x43,

    /* U+0079 "y" */
    0xc0, 0xd8, 0x26, 0x18, 0x84, 0x31, 0xc, 0xc1,
    0x20, 0x78, 0xe, 0x3, 0x0, 0xc0, 0x20, 0x18,
    0x6, 0x3, 0x0,

    /* U+007A "z" */
    0xfe, 0xc, 0x30, 0xc1, 0x86, 0xc, 0x30, 0xc1,
    0xfc,

    /* U+007B "{" */
    0x1c, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x33, 0x8e,
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0x7,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe0, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0x71,
    0xcc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0x38,

    /* U+007E "~" */
    0x73, 0x8e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 86, .box_w = 2, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 84, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 7, .adv_w = 242, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 179, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 48, .adv_w = 219, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 213, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 89, .adv_w = 131, .box_w = 6, .box_h = 20, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 104, .adv_w = 131, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 119, .adv_w = 140, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 125, .adv_w = 197, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 136, .adv_w = 57, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 138, .adv_w = 159, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 139, .adv_w = 60, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 137, .box_w = 7, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 158, .adv_w = 181, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 92, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 166, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 181, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 183, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 157, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 182, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 181, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 61, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 76, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 310, .adv_w = 160, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 316, .adv_w = 208, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 322, .adv_w = 155, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 328, .adv_w = 151, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 292, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 371, .adv_w = 194, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 177, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 222, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 204, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 148, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 145, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 199, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 71, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 153, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 124, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 248, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 202, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 226, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 227, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 647, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 169, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 194, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 195, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 281, .box_w = 17, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 168, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 156, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 122, .box_w = 4, .box_h = 20, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 812, .adv_w = 190, .box_w = 8, .box_h = 20, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 832, .adv_w = 122, .box_w = 4, .box_h = 20, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 842, .adv_w = 181, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 855, .adv_w = 211, .box_w = 10, .box_h = 1, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 857, .adv_w = 74, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 859, .adv_w = 195, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 195, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 175, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 195, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 179, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 95, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 960, .adv_w = 184, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 71, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 71, .box_w = 4, .box_h = 18, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 988, .adv_w = 148, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 71, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 297, .box_w = 16, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 184, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1037, .adv_w = 184, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1069, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1088, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 105, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1114, .adv_w = 184, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1126, .adv_w = 162, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 236, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 162, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1187, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 133, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1211, .adv_w = 84, .box_w = 2, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1215, .adv_w = 133, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1230, .adv_w = 149, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
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
const lv_font_t ui_font_Poppins18 = {
#else
lv_font_t ui_font_Poppins18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_POPPINS18*/
