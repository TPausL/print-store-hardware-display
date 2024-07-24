/*******************************************************************************
 * Size: 14 px
 * Bpp: 4
 * Opts: --bpp 4 --size 14 --font C:/Users/timoo/print-store-hardware-display/squareline_project/assets/Poppins-Regular.ttf -o C:/Users/timoo/print-store-hardware-display/squareline_project/assets\ui_font_Poppins14.c --format lvgl -r 0x20-0x7f -r 0xc4 -r 0xe4 -r 0xdc -r 0xfc -r 0xd6 -r 0xf6 --no-compress --no-prefilter
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

    /* U+0021 "!" */
    0xab, 0x9b, 0x9a, 0x9a, 0x8a, 0x89, 0x89, 0x11,
    0x68, 0x9b,

    /* U+0022 "\"" */
    0x69, 0x87, 0x69, 0x88, 0x69, 0x77,

    /* U+0023 "#" */
    0x0, 0x0, 0xd6, 0x0, 0xa8, 0x0, 0x0, 0xf,
    0x20, 0xe, 0x50, 0x0, 0x3, 0xf0, 0x1, 0xf2,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x1, 0x2b,
    0x92, 0x28, 0xc2, 0x20, 0x0, 0xd6, 0x0, 0xa8,
    0x0, 0x0, 0xf, 0x30, 0xd, 0x60, 0x8, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0x12, 0x8d, 0x22, 0x6f,
    0x22, 0x0, 0xa, 0x90, 0x7, 0xb0, 0x0, 0x0,
    0xd6, 0x0, 0xa8, 0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0x2, 0x40, 0x0, 0x0, 0x4, 0x80, 0x0,
    0x2, 0xbf, 0xfc, 0x20, 0xd, 0xa5, 0x9a, 0xe0,
    0x1f, 0x24, 0x81, 0x71, 0xf, 0x74, 0x80, 0x0,
    0x5, 0xfe, 0xb2, 0x0, 0x0, 0x7, 0xdf, 0xa0,
    0x0, 0x4, 0x82, 0xf3, 0xa, 0x24, 0x80, 0xf5,
    0xc, 0xc6, 0x87, 0xf1, 0x1, 0xaf, 0xfd, 0x30,
    0x0, 0x4, 0x80, 0x0,

    /* U+0025 "%" */
    0xa, 0xdc, 0x10, 0xc, 0x70, 0x5, 0xb0, 0x79,
    0x5, 0xe0, 0x0, 0x4c, 0x7, 0x80, 0xe5, 0x0,
    0x0, 0x8c, 0xa1, 0x7c, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0x30, 0x0, 0x0, 0x0, 0x9, 0xa0, 0x0,
    0x0, 0x0, 0x3, 0xf1, 0x4c, 0xc4, 0x0, 0x0,
    0xc8, 0xe, 0x12, 0xe0, 0x0, 0x5e, 0x0, 0xe0,
    0xe, 0x0, 0xd, 0x60, 0x6, 0xbb, 0x50,

    /* U+0026 "&" */
    0x0, 0x3d, 0xfd, 0x30, 0x0, 0x0, 0xe, 0x91,
    0xad, 0x0, 0x0, 0x0, 0xf5, 0x1, 0x30, 0x0,
    0x0, 0x7, 0xd1, 0x0, 0x0, 0x0, 0x4, 0xed,
    0xd1, 0x0, 0x43, 0x1, 0xf6, 0x9, 0xd1, 0x2f,
    0x40, 0x6d, 0x0, 0xa, 0xdc, 0xa0, 0x6, 0xe0,
    0x0, 0xc, 0xf3, 0x0, 0x1f, 0xa3, 0x39, 0xfc,
    0xd0, 0x0, 0x3b, 0xff, 0xb3, 0xd, 0xc0,

    /* U+0027 "'" */
    0x69, 0x6a, 0x59,

    /* U+0028 "(" */
    0x0, 0xc, 0x90, 0xa, 0xb0, 0x3, 0xf2, 0x0,
    0xaa, 0x0, 0xf, 0x50, 0x3, 0xf0, 0x0, 0x5e,
    0x0, 0x6, 0xc0, 0x0, 0x7c, 0x0, 0x6, 0xd0,
    0x0, 0x4f, 0x0, 0x0, 0xf4, 0x0, 0xb, 0x90,
    0x0, 0x4f, 0x10, 0x0, 0xca, 0x0, 0x1, 0xe6,

    /* U+0029 ")" */
    0x3f, 0x30, 0x0, 0x6e, 0x10, 0x0, 0xc8, 0x0,
    0x5, 0xf0, 0x0, 0xf, 0x40, 0x0, 0xb9, 0x0,
    0x8, 0xb0, 0x0, 0x7c, 0x0, 0x6, 0xc0, 0x0,
    0x8b, 0x0, 0xa, 0x90, 0x0, 0xe6, 0x0, 0x3f,
    0x10, 0xb, 0xa0, 0x4, 0xf2, 0x1, 0xe6, 0x0,

    /* U+002A "*" */
    0x0, 0x1e, 0x0, 0xc, 0x4b, 0x6a, 0x2, 0xbf,
    0x91, 0xc, 0xac, 0xc9, 0x3, 0xd, 0x3, 0x0,
    0x5, 0x0,

    /* U+002B "+" */
    0x0, 0x4, 0x10, 0x0, 0x0, 0xd, 0x60, 0x0,
    0x0, 0xd, 0x60, 0x0, 0x0, 0xd, 0x60, 0x0,
    0xbf, 0xff, 0xff, 0xf5, 0x12, 0x2d, 0x72, 0x20,
    0x0, 0xd, 0x60, 0x0, 0x0, 0xd, 0x60, 0x0,

    /* U+002C "," */
    0x2, 0xf3, 0x6, 0xc0, 0xa, 0x60, 0xd, 0x0,

    /* U+002D "-" */
    0x2f, 0xff, 0xff, 0x50, 0x22, 0x22, 0x20,

    /* U+002E "." */
    0x2b, 0x13, 0xe2,

    /* U+002F "/" */
    0x0, 0x0, 0x8b, 0x0, 0x0, 0xc7, 0x0, 0x0,
    0xf3, 0x0, 0x4, 0xf0, 0x0, 0x8, 0xc0, 0x0,
    0xc, 0x80, 0x0, 0xf, 0x40, 0x0, 0x3f, 0x0,
    0x0, 0x7c, 0x0, 0x0, 0xb8, 0x0, 0x0, 0xf5,
    0x0, 0x3, 0xf1, 0x0, 0x6, 0xd0, 0x0, 0xa,
    0x90, 0x0, 0xe, 0x50, 0x0, 0x2f, 0x10, 0x0,

    /* U+0030 "0" */
    0x0, 0x7e, 0xfd, 0x40, 0x5, 0xf6, 0x39, 0xf2,
    0xb, 0x80, 0x0, 0xc8, 0xf, 0x40, 0x0, 0x7c,
    0x1f, 0x20, 0x0, 0x6d, 0x1f, 0x20, 0x0, 0x5e,
    0x1f, 0x20, 0x0, 0x6d, 0xf, 0x40, 0x0, 0x7b,
    0xb, 0x80, 0x0, 0xc8, 0x5, 0xf6, 0x38, 0xf2,
    0x0, 0x7e, 0xfd, 0x40,

    /* U+0031 "1" */
    0x7f, 0xf2, 0x14, 0xf2, 0x2, 0xf2, 0x2, 0xf2,
    0x2, 0xf2, 0x2, 0xf2, 0x2, 0xf2, 0x2, 0xf2,
    0x2, 0xf2, 0x2, 0xf2, 0x2, 0xf2,

    /* U+0032 "2" */
    0x0, 0x9e, 0xea, 0x10, 0xa, 0xc3, 0x3c, 0xb0,
    0x1f, 0x30, 0x3, 0xf0, 0x17, 0x0, 0x2, 0xf1,
    0x0, 0x0, 0x6, 0xe0, 0x0, 0x0, 0xd, 0x80,
    0x0, 0x0, 0x9e, 0x0, 0x0, 0x8, 0xf3, 0x0,
    0x0, 0x8f, 0x30, 0x0, 0xa, 0xe4, 0x11, 0x10,
    0x4f, 0xff, 0xff, 0xf7,

    /* U+0033 "3" */
    0x0, 0x9e, 0xfb, 0x20, 0xa, 0xd4, 0x3b, 0xd0,
    0xf, 0x40, 0x1, 0xf2, 0x1, 0x0, 0x1, 0xf1,
    0x0, 0x0, 0x1a, 0xb0, 0x0, 0xf, 0xfd, 0x10,
    0x0, 0x2, 0x4b, 0xc0, 0x0, 0x0, 0x0, 0xf4,
    0x2f, 0x10, 0x0, 0xe5, 0xc, 0xb3, 0x29, 0xf1,
    0x1, 0xae, 0xfc, 0x30,

    /* U+0034 "4" */
    0x0, 0x0, 0xd, 0xf0, 0x0, 0x0, 0x8, 0xef,
    0x0, 0x0, 0x3, 0xf5, 0xf0, 0x0, 0x0, 0xd6,
    0x3f, 0x0, 0x0, 0x9b, 0x3, 0xf0, 0x0, 0x4f,
    0x10, 0x3f, 0x0, 0x1e, 0x60, 0x3, 0xf0, 0x6,
    0xff, 0xff, 0xff, 0xf6, 0x12, 0x22, 0x26, 0xf2,
    0x10, 0x0, 0x0, 0x4f, 0x0,

    /* U+0035 "5" */
    0xcf, 0xff, 0xff, 0x5c, 0x72, 0x22, 0x20, 0xc6,
    0x0, 0x0, 0xc, 0x60, 0x0, 0x0, 0xc8, 0xbe,
    0xd7, 0xc, 0xf6, 0x35, 0xe7, 0x54, 0x0, 0x6,
    0xd0, 0x0, 0x0, 0x4f, 0xb5, 0x0, 0x7, 0xd7,
    0xe5, 0x25, 0xe6, 0x6, 0xdf, 0xd6, 0x0,

    /* U+0036 "6" */
    0x4, 0xdf, 0xd5, 0x0, 0x2f, 0x61, 0x5f, 0x30,
    0x99, 0x0, 0x8, 0x70, 0xd4, 0x0, 0x0, 0x0,
    0xf4, 0xae, 0xd7, 0x0, 0xfd, 0x62, 0x5e, 0x70,
    0xe7, 0x0, 0x6, 0xe0, 0xd5, 0x0, 0x3, 0xf0,
    0x98, 0x0, 0x6, 0xe0, 0x2e, 0x62, 0x4e, 0x80,
    0x4, 0xcf, 0xe8, 0x0,

    /* U+0037 "7" */
    0x8f, 0xff, 0xff, 0xf1, 0x12, 0x22, 0x26, 0xe0,
    0x0, 0x0, 0xb, 0x80, 0x0, 0x0, 0x1f, 0x20,
    0x0, 0x0, 0x7b, 0x0, 0x0, 0x0, 0xe5, 0x0,
    0x0, 0x4, 0xe0, 0x0, 0x0, 0xa, 0x90, 0x0,
    0x0, 0x1f, 0x20, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x0, 0xd6, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x8e, 0xfd, 0x60, 0x0, 0x8e, 0x42, 0x5f,
    0x50, 0xd, 0x60, 0x0, 0x9a, 0x0, 0xd6, 0x0,
    0x9, 0xa0, 0x6, 0xe3, 0x4, 0xe3, 0x0, 0xb,
    0xff, 0xf9, 0x0, 0xb, 0xb2, 0x3, 0xd8, 0x1,
    0xf2, 0x0, 0x5, 0xf0, 0x1f, 0x30, 0x0, 0x6f,
    0x0, 0xbc, 0x31, 0x5e, 0x80, 0x0, 0x9e, 0xfd,
    0x70, 0x0,

    /* U+0039 "9" */
    0x6, 0xdf, 0xd4, 0x6, 0xe5, 0x26, 0xf2, 0xd7,
    0x0, 0x9, 0x8f, 0x40, 0x0, 0x6c, 0xe6, 0x0,
    0x8, 0xd8, 0xe3, 0x4, 0xee, 0xa, 0xff, 0xd7,
    0xd0, 0x0, 0x10, 0x5b, 0x78, 0x0, 0x9, 0x83,
    0xf5, 0x26, 0xf2, 0x5, 0xdf, 0xd4, 0x0,

    /* U+003A ":" */
    0x3e, 0x22, 0xa1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2b, 0x13, 0xe2,

    /* U+003B ";" */
    0xd, 0x70, 0x94, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0x81, 0xf2, 0x5b, 0x7, 0x40,

    /* U+003C "<" */
    0x0, 0x7, 0x70, 0x0, 0x9e, 0x20, 0x9, 0xd2,
    0x0, 0x8f, 0x10, 0x0, 0x2e, 0x90, 0x0, 0x1,
    0xd9, 0x0, 0x0, 0x1d, 0xa0,

    /* U+003D "=" */
    0x9f, 0xff, 0xff, 0xfa, 0x12, 0x22, 0x22, 0x21,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0xfa,
    0x12, 0x22, 0x22, 0x21,

    /* U+003E ">" */
    0x39, 0x20, 0x0, 0x8, 0xe2, 0x0, 0x0, 0x8e,
    0x20, 0x0, 0x9, 0xe1, 0x0, 0x3e, 0x70, 0x3,
    0xe7, 0x0, 0x3f, 0x70, 0x0,

    /* U+003F "?" */
    0x4, 0xdf, 0xd5, 0x2, 0xf6, 0x25, 0xf4, 0x6b,
    0x0, 0xa, 0x90, 0x0, 0x0, 0xa9, 0x0, 0x0,
    0x5f, 0x40, 0xd, 0xec, 0x50, 0x0, 0xe4, 0x0,
    0x0, 0x2, 0x0, 0x0, 0x0, 0xb3, 0x0, 0x0,
    0xe, 0x50, 0x0,

    /* U+0040 "@" */
    0x0, 0x1, 0x7c, 0xde, 0xc7, 0x0, 0x0, 0x4,
    0xd8, 0x20, 0x3, 0xad, 0x10, 0x4, 0xd2, 0x4c,
    0xd7, 0xc3, 0x89, 0x1, 0xe3, 0x4e, 0x52, 0xbf,
    0x11, 0xf0, 0x6a, 0xc, 0x60, 0x4, 0xf0, 0xe,
    0x1c, 0x41, 0xf1, 0x0, 0x4c, 0x0, 0xf1, 0xe2,
    0x2f, 0x0, 0x8, 0xa0, 0x2d, 0xf, 0x10, 0xe6,
    0x4, 0xda, 0xa, 0x60, 0xd4, 0x4, 0xee, 0x91,
    0xde, 0x80, 0x7, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xc4, 0x10, 0x24, 0x0, 0x0, 0x0,
    0x6, 0xce, 0xec, 0x60, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x3, 0xfa, 0x0, 0x0, 0x0, 0x8f, 0xf0,
    0x0, 0x0, 0xe, 0x8f, 0x50, 0x0, 0x4, 0xf2,
    0xba, 0x0, 0x0, 0x9c, 0x5, 0xf0, 0x0, 0xe,
    0x70, 0xf, 0x60, 0x4, 0xf2, 0x0, 0xbb, 0x0,
    0xaf, 0xff, 0xff, 0xf1, 0xf, 0x72, 0x22, 0x2f,
    0x75, 0xf0, 0x0, 0x0, 0x9c,

    /* U+0042 "B" */
    0xef, 0xff, 0xe8, 0xe, 0x61, 0x15, 0xf7, 0xe5,
    0x0, 0xa, 0xae, 0x50, 0x2, 0xe5, 0xef, 0xff,
    0xf8, 0xe, 0x72, 0x25, 0xe4, 0xe5, 0x0, 0x7,
    0xce, 0x50, 0x0, 0x7d, 0xe6, 0x11, 0x4e, 0x8e,
    0xff, 0xfe, 0x80,

    /* U+0043 "C" */
    0x0, 0x18, 0xdf, 0xd8, 0x10, 0x1, 0xeb, 0x42,
    0x5c, 0xe2, 0xb, 0xb0, 0x0, 0x0, 0xcb, 0x2f,
    0x20, 0x0, 0x0, 0x0, 0x5f, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0x0, 0x0, 0x0, 0x0, 0x2f, 0x20,
    0x0, 0x0, 0x0, 0xc, 0xb0, 0x0, 0x0, 0xcb,
    0x2, 0xeb, 0x42, 0x4c, 0xe2, 0x0, 0x19, 0xef,
    0xd9, 0x10,

    /* U+0044 "D" */
    0xef, 0xff, 0xd8, 0x10, 0xe, 0x61, 0x14, 0xbe,
    0x10, 0xe5, 0x0, 0x0, 0xbb, 0xe, 0x50, 0x0,
    0x3, 0xf1, 0xe5, 0x0, 0x0, 0xf, 0x3e, 0x50,
    0x0, 0x1, 0xf3, 0xe5, 0x0, 0x0, 0x4f, 0x1e,
    0x50, 0x0, 0xc, 0xb0, 0xe6, 0x11, 0x4b, 0xe1,
    0xe, 0xff, 0xfd, 0x81, 0x0,

    /* U+0045 "E" */
    0xef, 0xff, 0xf5, 0xe6, 0x11, 0x10, 0xe5, 0x0,
    0x0, 0xe5, 0x0, 0x0, 0xef, 0xff, 0xd0, 0xe7,
    0x22, 0x10, 0xe5, 0x0, 0x0, 0xe5, 0x0, 0x0,
    0xe6, 0x11, 0x10, 0xef, 0xff, 0xf5,

    /* U+0046 "F" */
    0xef, 0xff, 0xf9, 0xe6, 0x11, 0x10, 0xe5, 0x0,
    0x0, 0xe5, 0x0, 0x0, 0xef, 0xff, 0xb0, 0xe7,
    0x22, 0x10, 0xe5, 0x0, 0x0, 0xe5, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0xe5, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x18, 0xdf, 0xe9, 0x20, 0x0, 0x1e, 0xc5,
    0x34, 0xbf, 0x30, 0xb, 0xb0, 0x0, 0x0, 0x88,
    0x2, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x0,
    0xe, 0xff, 0xff, 0x45, 0xf0, 0x0, 0x12, 0x24,
    0xf3, 0x2f, 0x20, 0x0, 0x0, 0x6e, 0x0, 0xbb,
    0x0, 0x0, 0xe, 0x80, 0x1, 0xec, 0x53, 0x6d,
    0xc0, 0x0, 0x1, 0x8d, 0xfd, 0x70, 0x0,

    /* U+0048 "H" */
    0xe5, 0x0, 0x0, 0xa9, 0xe5, 0x0, 0x0, 0xa9,
    0xe5, 0x0, 0x0, 0xa9, 0xe5, 0x0, 0x0, 0xa9,
    0xef, 0xff, 0xff, 0xf9, 0xe7, 0x22, 0x22, 0xb9,
    0xe5, 0x0, 0x0, 0xa9, 0xe5, 0x0, 0x0, 0xa9,
    0xe5, 0x0, 0x0, 0xa9, 0xe5, 0x0, 0x0, 0xa9,

    /* U+0049 "I" */
    0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5,
    0xe5, 0xe5,

    /* U+004A "J" */
    0x0, 0x0, 0x4f, 0x0, 0x0, 0x4f, 0x0, 0x0,
    0x4f, 0x0, 0x0, 0x4f, 0x0, 0x0, 0x4f, 0x0,
    0x0, 0x4f, 0x0, 0x0, 0x4f, 0x4b, 0x0, 0x5f,
    0x2f, 0x73, 0xcb, 0x5, 0xdf, 0xb1,

    /* U+004B "K" */
    0xe5, 0x0, 0x2e, 0x80, 0xe5, 0x1, 0xda, 0x0,
    0xe5, 0xc, 0xc0, 0x0, 0xe5, 0xad, 0x10, 0x0,
    0xed, 0xe1, 0x0, 0x0, 0xed, 0xe1, 0x0, 0x0,
    0xe5, 0xbd, 0x10, 0x0, 0xe5, 0xc, 0xc0, 0x0,
    0xe5, 0x1, 0xda, 0x0, 0xe5, 0x0, 0x2e, 0x90,

    /* U+004C "L" */
    0xe5, 0x0, 0xe, 0x50, 0x0, 0xe5, 0x0, 0xe,
    0x50, 0x0, 0xe5, 0x0, 0xe, 0x50, 0x0, 0xe5,
    0x0, 0xe, 0x50, 0x0, 0xe6, 0x11, 0xe, 0xff,
    0xfc,

    /* U+004D "M" */
    0xea, 0x0, 0x0, 0x0, 0x9f, 0xef, 0x10, 0x0,
    0x1, 0xff, 0xef, 0x80, 0x0, 0x7, 0xff, 0xe9,
    0xe0, 0x0, 0xe, 0x9f, 0xe5, 0xc6, 0x0, 0x5d,
    0x4f, 0xe5, 0x5d, 0x0, 0xc6, 0x4f, 0xe5, 0xe,
    0x43, 0xf0, 0x4f, 0xe5, 0x7, 0xba, 0x90, 0x4f,
    0xe5, 0x1, 0xff, 0x20, 0x4f, 0xe5, 0x0, 0x9b,
    0x0, 0x4f,

    /* U+004E "N" */
    0xea, 0x0, 0x0, 0x8c, 0xef, 0x50, 0x0, 0x8c,
    0xeb, 0xe1, 0x0, 0x8c, 0xe5, 0xb9, 0x0, 0x8c,
    0xe5, 0x1f, 0x40, 0x8c, 0xe5, 0x6, 0xd0, 0x8c,
    0xe5, 0x0, 0xc8, 0x8c, 0xe5, 0x0, 0x2f, 0xbc,
    0xe5, 0x0, 0x7, 0xfc, 0xe5, 0x0, 0x0, 0xdc,

    /* U+004F "O" */
    0x0, 0x18, 0xdf, 0xd8, 0x10, 0x0, 0x1e, 0xb4,
    0x24, 0xbe, 0x10, 0xb, 0xb0, 0x0, 0x0, 0xbc,
    0x2, 0xf2, 0x0, 0x0, 0x2, 0xf2, 0x5f, 0x0,
    0x0, 0x0, 0xf, 0x55, 0xf0, 0x0, 0x0, 0x0,
    0xf5, 0x2f, 0x20, 0x0, 0x0, 0x2f, 0x20, 0xcb,
    0x0, 0x0, 0xb, 0xc0, 0x2, 0xeb, 0x42, 0x4b,
    0xe2, 0x0, 0x1, 0x9e, 0xfe, 0x91, 0x0,

    /* U+0050 "P" */
    0xef, 0xff, 0xc4, 0xe, 0x61, 0x17, 0xf2, 0xe5,
    0x0, 0xc, 0x8e, 0x50, 0x0, 0xc8, 0xe5, 0x0,
    0x4f, 0x3e, 0xff, 0xfe, 0x60, 0xe7, 0x21, 0x0,
    0xe, 0x50, 0x0, 0x0, 0xe5, 0x0, 0x0, 0xe,
    0x50, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x18, 0xdf, 0xd8, 0x10, 0x0, 0x1e, 0xb4,
    0x24, 0xbe, 0x10, 0xb, 0xb0, 0x0, 0x0, 0xbc,
    0x2, 0xf2, 0x0, 0x0, 0x2, 0xf2, 0x5f, 0x0,
    0x0, 0x0, 0xf, 0x55, 0xf0, 0x0, 0x0, 0x0,
    0xf5, 0x2f, 0x20, 0x0, 0x0, 0x2f, 0x20, 0xcb,
    0x0, 0x0, 0xb, 0xb0, 0x2, 0xeb, 0x42, 0x4b,
    0xe2, 0x0, 0x1, 0x9e, 0xfd, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xf3, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xe2,

    /* U+0052 "R" */
    0xef, 0xff, 0xc4, 0xe, 0x61, 0x17, 0xf3, 0xe5,
    0x0, 0xc, 0x8e, 0x50, 0x0, 0xc8, 0xe5, 0x0,
    0x5f, 0x3e, 0xfe, 0xfe, 0x60, 0xe6, 0x1d, 0x90,
    0xe, 0x50, 0x4f, 0x30, 0xe5, 0x0, 0xac, 0xe,
    0x50, 0x1, 0xf6,

    /* U+0053 "S" */
    0x1, 0xae, 0xfb, 0x20, 0xc, 0xb3, 0x3b, 0xe0,
    0x1f, 0x30, 0x1, 0x82, 0xf, 0x80, 0x0, 0x0,
    0x6, 0xfd, 0x83, 0x0, 0x0, 0x5, 0xaf, 0xa0,
    0x0, 0x0, 0x3, 0xf4, 0x1b, 0x20, 0x0, 0xe6,
    0xd, 0xc3, 0x28, 0xf1, 0x1, 0xae, 0xfc, 0x30,

    /* U+0054 "T" */
    0x8f, 0xff, 0xff, 0xf1, 0x1, 0x1d, 0x71, 0x10,
    0x0, 0xd, 0x60, 0x0, 0x0, 0xd, 0x60, 0x0,
    0x0, 0xd, 0x60, 0x0, 0x0, 0xd, 0x60, 0x0,
    0x0, 0xd, 0x60, 0x0, 0x0, 0xd, 0x60, 0x0,
    0x0, 0xd, 0x60, 0x0, 0x0, 0xd, 0x60, 0x0,

    /* U+0055 "U" */
    0xf5, 0x0, 0x0, 0xe6, 0xf5, 0x0, 0x0, 0xe6,
    0xf5, 0x0, 0x0, 0xe6, 0xf5, 0x0, 0x0, 0xe6,
    0xf5, 0x0, 0x0, 0xe6, 0xf5, 0x0, 0x0, 0xe6,
    0xe5, 0x0, 0x0, 0xe6, 0xc9, 0x0, 0x2, 0xf3,
    0x5f, 0x72, 0x4c, 0xc0, 0x5, 0xcf, 0xe9, 0x10,

    /* U+0056 "V" */
    0x8d, 0x0, 0x0, 0x6, 0xe0, 0x2f, 0x30, 0x0,
    0xb, 0x90, 0xc, 0x80, 0x0, 0x1f, 0x30, 0x6,
    0xe0, 0x0, 0x7d, 0x0, 0x1, 0xf4, 0x0, 0xc7,
    0x0, 0x0, 0xa9, 0x2, 0xf1, 0x0, 0x0, 0x4f,
    0x8, 0xb0, 0x0, 0x0, 0xe, 0x5d, 0x50, 0x0,
    0x0, 0x9, 0xdf, 0x0, 0x0, 0x0, 0x3, 0xfa,
    0x0, 0x0,

    /* U+0057 "W" */
    0x8c, 0x0, 0x0, 0xfb, 0x0, 0x2, 0xf3, 0x4f,
    0x10, 0x4, 0xff, 0x0, 0x6, 0xe0, 0xf, 0x50,
    0x8, 0xbf, 0x40, 0xa, 0xa0, 0xb, 0x90, 0xd,
    0x5c, 0x80, 0xe, 0x50, 0x7, 0xd0, 0x1f, 0x17,
    0xc0, 0x2f, 0x10, 0x2, 0xf1, 0x5c, 0x2, 0xf0,
    0x6c, 0x0, 0x0, 0xe5, 0xa7, 0x0, 0xe4, 0xa8,
    0x0, 0x0, 0xa9, 0xe3, 0x0, 0x99, 0xe3, 0x0,
    0x0, 0x5f, 0xe0, 0x0, 0x5f, 0xe0, 0x0, 0x0,
    0x1f, 0x90, 0x0, 0x1f, 0xa0, 0x0,

    /* U+0058 "X" */
    0x1f, 0x50, 0x0, 0xac, 0x0, 0x7e, 0x0, 0x3f,
    0x20, 0x0, 0xd8, 0xc, 0x90, 0x0, 0x4, 0xf8,
    0xe0, 0x0, 0x0, 0xa, 0xf5, 0x0, 0x0, 0x0,
    0xaf, 0x50, 0x0, 0x0, 0x4f, 0x9e, 0x0, 0x0,
    0xd, 0x70, 0xd8, 0x0, 0x7, 0xe0, 0x4, 0xf2,
    0x1, 0xf5, 0x0, 0xa, 0xc0,

    /* U+0059 "Y" */
    0x7e, 0x0, 0x0, 0xba, 0xe, 0x60, 0x3, 0xf2,
    0x7, 0xd0, 0xb, 0xa0, 0x0, 0xe5, 0x2f, 0x20,
    0x0, 0x6d, 0xa9, 0x0, 0x0, 0xe, 0xf2, 0x0,
    0x0, 0x8, 0xb0, 0x0, 0x0, 0x8, 0xb0, 0x0,
    0x0, 0x8, 0xb0, 0x0, 0x0, 0x8, 0xb0, 0x0,

    /* U+005A "Z" */
    0x4f, 0xff, 0xff, 0xe0, 0x22, 0x22, 0xe9, 0x0,
    0x0, 0x7e, 0x10, 0x0, 0x1f, 0x60, 0x0, 0xa,
    0xc0, 0x0, 0x4, 0xf3, 0x0, 0x0, 0xd9, 0x0,
    0x0, 0x7e, 0x10, 0x0, 0x1f, 0x72, 0x22, 0x25,
    0xff, 0xff, 0xfe,

    /* U+005B "[" */
    0x2f, 0xf5, 0x2f, 0x20, 0x2f, 0x0, 0x2f, 0x0,
    0x2f, 0x0, 0x2f, 0x0, 0x2f, 0x0, 0x2f, 0x0,
    0x2f, 0x0, 0x2f, 0x0, 0x2f, 0x0, 0x2f, 0x0,
    0x2f, 0x0, 0x2f, 0x0, 0x2f, 0x0, 0x2f, 0xf5,
    0x2, 0x20,

    /* U+005C "\\" */
    0xf, 0x30, 0x0, 0x0, 0xc8, 0x0, 0x0, 0x7,
    0xc0, 0x0, 0x0, 0x3f, 0x10, 0x0, 0x0, 0xe5,
    0x0, 0x0, 0xa, 0x90, 0x0, 0x0, 0x6d, 0x0,
    0x0, 0x1, 0xf2, 0x0, 0x0, 0xd, 0x60, 0x0,
    0x0, 0x9b, 0x0, 0x0, 0x4, 0xf0, 0x0, 0x0,
    0xf, 0x30, 0x0, 0x0, 0xb8, 0x0, 0x0, 0x7,
    0xc0, 0x0, 0x0, 0x3f, 0x10, 0x0, 0x0, 0xe5,

    /* U+005D "]" */
    0x6f, 0xf0, 0x3, 0xf1, 0x2, 0xf1, 0x2, 0xf1,
    0x2, 0xf1, 0x2, 0xf1, 0x2, 0xf1, 0x2, 0xf1,
    0x2, 0xf1, 0x2, 0xf1, 0x2, 0xf1, 0x2, 0xf1,
    0x2, 0xf1, 0x2, 0xf1, 0x2, 0xf1, 0x6f, 0xf1,
    0x12, 0x20,

    /* U+005E "^" */
    0x0, 0x2, 0x80, 0x0, 0x0, 0x0, 0xaf, 0x70,
    0x0, 0x0, 0x1f, 0xad, 0x0, 0x0, 0x8, 0xc0,
    0xe5, 0x0, 0x0, 0xe5, 0x8, 0xc0, 0x0, 0x6e,
    0x0, 0x2f, 0x30, 0xd, 0x70, 0x0, 0xaa, 0x4,
    0xf1, 0x0, 0x3, 0xf1,

    /* U+005F "_" */
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xfe,
    0x13, 0x33, 0x33, 0x32,

    /* U+0060 "`" */
    0x0, 0x0, 0xb7, 0x0, 0x19, 0xd1, 0x0, 0x21,

    /* U+0061 "a" */
    0x0, 0x8e, 0xfb, 0x2e, 0x60, 0xae, 0x52, 0x6d,
    0xf6, 0x2f, 0x40, 0x0, 0x4f, 0x65, 0xf0, 0x0,
    0x0, 0xf6, 0x5f, 0x0, 0x0, 0xf, 0x62, 0xf3,
    0x0, 0x4, 0xf6, 0xa, 0xd3, 0x3, 0xdf, 0x60,
    0x8, 0xef, 0xc3, 0xe6,

    /* U+0062 "b" */
    0xe5, 0x0, 0x0, 0x0, 0xe5, 0x0, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0x0, 0xe6, 0x8e, 0xfb, 0x30,
    0xed, 0xa3, 0x3a, 0xf2, 0xeb, 0x0, 0x0, 0xc9,
    0xe6, 0x0, 0x0, 0x7c, 0xe6, 0x0, 0x0, 0x8c,
    0xeb, 0x0, 0x0, 0xd9, 0xee, 0xa3, 0x3a, 0xf2,
    0xe6, 0x8e, 0xfb, 0x30,

    /* U+0063 "c" */
    0x0, 0x8e, 0xfd, 0x50, 0xa, 0xd4, 0x26, 0xf5,
    0x2f, 0x30, 0x0, 0x67, 0x5f, 0x0, 0x0, 0x0,
    0x5f, 0x0, 0x0, 0x0, 0x2f, 0x30, 0x0, 0x67,
    0xa, 0xd4, 0x26, 0xf5, 0x0, 0x8e, 0xfc, 0x50,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0xe, 0x60, 0x0, 0x0, 0x0,
    0xe6, 0x0, 0x0, 0x0, 0xe, 0x60, 0x8, 0xef,
    0xb2, 0xe6, 0xa, 0xe5, 0x26, 0xdf, 0x62, 0xf4,
    0x0, 0x4, 0xf6, 0x5f, 0x0, 0x0, 0xf, 0x65,
    0xf0, 0x0, 0x0, 0xf6, 0x2f, 0x30, 0x0, 0x4f,
    0x60, 0xad, 0x30, 0x3d, 0xf6, 0x0, 0x8e, 0xfc,
    0x3e, 0x60,

    /* U+0065 "e" */
    0x0, 0x8e, 0xfd, 0x60, 0x0, 0xac, 0x42, 0x6e,
    0x70, 0x2f, 0x10, 0x0, 0x5e, 0x5, 0xff, 0xff,
    0xff, 0xf0, 0x5f, 0x22, 0x22, 0x22, 0x2, 0xf4,
    0x0, 0x7, 0x80, 0x9, 0xe5, 0x26, 0xf5, 0x0,
    0x8, 0xef, 0xc5, 0x0,

    /* U+0066 "f" */
    0x1, 0xae, 0x10, 0x8d, 0x20, 0xa, 0x90, 0xa,
    0xff, 0xf3, 0xb, 0xa1, 0x0, 0xb9, 0x0, 0xb,
    0x90, 0x0, 0xb9, 0x0, 0xb, 0x90, 0x0, 0xb9,
    0x0, 0xb, 0x90, 0x0,

    /* U+0067 "g" */
    0x0, 0x8e, 0xfc, 0x3e, 0x60, 0xad, 0x30, 0x4d,
    0xf6, 0x2f, 0x30, 0x0, 0x3f, 0x65, 0xf0, 0x0,
    0x0, 0xf6, 0x5f, 0x0, 0x0, 0xf, 0x62, 0xf4,
    0x0, 0x5, 0xf6, 0xa, 0xe5, 0x25, 0xdf, 0x60,
    0x8, 0xef, 0xb2, 0xe6, 0x0, 0x0, 0x0, 0xf,
    0x50, 0xb6, 0x0, 0x3, 0xf2, 0x6, 0xf6, 0x24,
    0xdb, 0x0, 0x6, 0xdf, 0xe9, 0x0,

    /* U+0068 "h" */
    0xe5, 0x0, 0x0, 0xe, 0x50, 0x0, 0x0, 0xe5,
    0x0, 0x0, 0xe, 0x7a, 0xfe, 0x80, 0xef, 0x62,
    0x6f, 0x7e, 0x90, 0x0, 0x8d, 0xe6, 0x0, 0x5,
    0xfe, 0x50, 0x0, 0x5f, 0xe5, 0x0, 0x5, 0xfe,
    0x50, 0x0, 0x5f, 0xe5, 0x0, 0x5, 0xf0,

    /* U+0069 "i" */
    0xe, 0x60, 0xa4, 0x0, 0x0, 0xe5, 0xe, 0x50,
    0xe5, 0xe, 0x50, 0xe5, 0xe, 0x50, 0xe5, 0xe,
    0x50,

    /* U+006A "j" */
    0x0, 0xd6, 0x0, 0x94, 0x0, 0x0, 0x0, 0xe6,
    0x0, 0xe6, 0x0, 0xe6, 0x0, 0xe6, 0x0, 0xe6,
    0x0, 0xe6, 0x0, 0xe6, 0x0, 0xe6, 0x0, 0xe6,
    0x0, 0xe6, 0x3, 0xf4, 0x6f, 0xb0,

    /* U+006B "k" */
    0xe5, 0x0, 0x0, 0xe, 0x50, 0x0, 0x0, 0xe5,
    0x0, 0x0, 0xe, 0x50, 0x2f, 0x90, 0xe5, 0x1d,
    0xb0, 0xe, 0x6b, 0xc0, 0x0, 0xee, 0xd1, 0x0,
    0xe, 0xed, 0x10, 0x0, 0xe6, 0xbc, 0x0, 0xe,
    0x51, 0xdb, 0x0, 0xe5, 0x2, 0xea, 0x0,

    /* U+006C "l" */
    0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5,
    0xe5, 0xe5, 0xe5,

    /* U+006D "m" */
    0xe7, 0xbf, 0xe8, 0x6, 0xdf, 0xc2, 0xe, 0xf4,
    0x4, 0xfb, 0xb1, 0x1a, 0xe0, 0xe8, 0x0, 0x8,
    0xf1, 0x0, 0xf, 0x4e, 0x60, 0x0, 0x6e, 0x0,
    0x0, 0xd6, 0xe5, 0x0, 0x6, 0xe0, 0x0, 0xd,
    0x6e, 0x50, 0x0, 0x6e, 0x0, 0x0, 0xd6, 0xe5,
    0x0, 0x6, 0xe0, 0x0, 0xd, 0x6e, 0x50, 0x0,
    0x6e, 0x0, 0x0, 0xd6,

    /* U+006E "n" */
    0xe8, 0xbf, 0xe8, 0xe, 0xf4, 0x4, 0xe7, 0xe8,
    0x0, 0x7, 0xde, 0x60, 0x0, 0x5f, 0xe5, 0x0,
    0x5, 0xfe, 0x50, 0x0, 0x5f, 0xe5, 0x0, 0x5,
    0xfe, 0x50, 0x0, 0x5f,

    /* U+006F "o" */
    0x0, 0x7d, 0xfd, 0x70, 0x0, 0x9e, 0x52, 0x6e,
    0x80, 0x2f, 0x40, 0x0, 0x5f, 0x15, 0xf0, 0x0,
    0x0, 0xf4, 0x5f, 0x0, 0x0, 0xf, 0x42, 0xf4,
    0x0, 0x5, 0xf1, 0x9, 0xe5, 0x26, 0xf8, 0x0,
    0x7, 0xdf, 0xd6, 0x0,

    /* U+0070 "p" */
    0xe6, 0x8e, 0xfb, 0x30, 0xed, 0xa3, 0x3a, 0xf2,
    0xeb, 0x0, 0x0, 0xc9, 0xe6, 0x0, 0x0, 0x7c,
    0xe6, 0x0, 0x0, 0x8c, 0xeb, 0x0, 0x0, 0xd9,
    0xee, 0xa3, 0x3a, 0xf2, 0xe6, 0x8e, 0xfb, 0x30,
    0xe5, 0x0, 0x0, 0x0, 0xe5, 0x0, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0x0, 0xe5, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0x8e, 0xfb, 0x3e, 0x60, 0xae, 0x52, 0x5d,
    0xf6, 0x2f, 0x40, 0x0, 0x4f, 0x65, 0xf0, 0x0,
    0x0, 0xf6, 0x5f, 0x0, 0x0, 0xf, 0x62, 0xf4,
    0x0, 0x4, 0xf6, 0xa, 0xe5, 0x25, 0xdf, 0x60,
    0x8, 0xef, 0xb2, 0xe6, 0x0, 0x0, 0x0, 0xe,
    0x60, 0x0, 0x0, 0x0, 0xe6, 0x0, 0x0, 0x0,
    0xe, 0x60, 0x0, 0x0, 0x0, 0xe6,

    /* U+0072 "r" */
    0xe6, 0xac, 0xee, 0x94, 0xe9, 0x0, 0xe6, 0x0,
    0xe5, 0x0, 0xe5, 0x0, 0xe5, 0x0, 0xe5, 0x0,

    /* U+0073 "s" */
    0x4, 0xcf, 0xd6, 0x1, 0xf7, 0x25, 0xf4, 0x2f,
    0x30, 0x5, 0x30, 0x9f, 0x94, 0x0, 0x0, 0x38,
    0xdd, 0x21, 0x60, 0x0, 0xc8, 0x1f, 0x82, 0x4e,
    0x60, 0x3c, 0xfe, 0x80,

    /* U+0074 "t" */
    0xa, 0xa0, 0x0, 0xaa, 0x0, 0xaf, 0xff, 0xa0,
    0xaa, 0x10, 0xa, 0xa0, 0x0, 0xaa, 0x0, 0xa,
    0xa0, 0x0, 0xaa, 0x0, 0x8, 0xc2, 0x10, 0x2c,
    0xfa,

    /* U+0075 "u" */
    0xf4, 0x0, 0x6, 0xef, 0x40, 0x0, 0x6e, 0xf4,
    0x0, 0x6, 0xef, 0x40, 0x0, 0x6e, 0xf4, 0x0,
    0x6, 0xee, 0x60, 0x0, 0x9e, 0x8e, 0x30, 0x5f,
    0xe0, 0x8e, 0xfb, 0x8e,

    /* U+0076 "v" */
    0xab, 0x0, 0x0, 0xd7, 0x4f, 0x10, 0x3, 0xf1,
    0xe, 0x70, 0x9, 0xb0, 0x8, 0xc0, 0xe, 0x50,
    0x2, 0xf2, 0x4f, 0x0, 0x0, 0xc8, 0xa9, 0x0,
    0x0, 0x6e, 0xf3, 0x0, 0x0, 0xf, 0xd0, 0x0,

    /* U+0077 "w" */
    0xa9, 0x0, 0xf, 0x90, 0x1, 0xf2, 0x6d, 0x0,
    0x4f, 0xd0, 0x5, 0xd0, 0x1f, 0x10, 0x98, 0xf2,
    0x9, 0x80, 0xc, 0x60, 0xd3, 0xb6, 0xd, 0x30,
    0x7, 0xa2, 0xe0, 0x6a, 0x2e, 0x0, 0x2, 0xe6,
    0x90, 0x2f, 0x6a, 0x0, 0x0, 0xdd, 0x50, 0xd,
    0xd5, 0x0, 0x0, 0x9f, 0x0, 0x8, 0xf1, 0x0,

    /* U+0078 "x" */
    0x8e, 0x0, 0x2f, 0x30, 0xd8, 0xb, 0x90, 0x4,
    0xf7, 0xe0, 0x0, 0xa, 0xf5, 0x0, 0x0, 0xaf,
    0x60, 0x0, 0x4e, 0x8e, 0x10, 0xd, 0x60, 0xd9,
    0x8, 0xc0, 0x3, 0xf3,

    /* U+0079 "y" */
    0xac, 0x0, 0x0, 0xc7, 0x4f, 0x20, 0x2, 0xf1,
    0xd, 0x70, 0x8, 0xb0, 0x7, 0xd0, 0xe, 0x50,
    0x1, 0xf3, 0x4e, 0x0, 0x0, 0xb9, 0x99, 0x0,
    0x0, 0x5e, 0xf2, 0x0, 0x0, 0xe, 0xc0, 0x0,
    0x0, 0xe, 0x60, 0x0, 0x0, 0x4f, 0x0, 0x0,
    0x0, 0xaa, 0x0, 0x0, 0x1, 0xf4, 0x0, 0x0,

    /* U+007A "z" */
    0x6f, 0xff, 0xfc, 0x1, 0x12, 0xe7, 0x0, 0x9,
    0xd0, 0x0, 0x4f, 0x30, 0x0, 0xd9, 0x0, 0x8,
    0xe0, 0x0, 0x2f, 0x61, 0x10, 0x6f, 0xff, 0xfc,

    /* U+007B "{" */
    0x0, 0x9e, 0x70, 0x4f, 0x41, 0x5, 0xe0, 0x0,
    0x4e, 0x0, 0x3, 0xf0, 0x0, 0x2f, 0x10, 0x3,
    0xf1, 0x4, 0xd9, 0x0, 0x5e, 0x60, 0x0, 0x4f,
    0x0, 0x2, 0xf1, 0x0, 0x3f, 0x0, 0x4, 0xf0,
    0x0, 0x5e, 0x0, 0x4, 0xf1, 0x0, 0xc, 0xf8,
    0x0, 0x1, 0x10,

    /* U+007C "|" */
    0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a,
    0x9a, 0x9a, 0x9a, 0x9a, 0x9a,

    /* U+007D "}" */
    0xf, 0xd3, 0x0, 0x2a, 0xb0, 0x0, 0x6d, 0x0,
    0x7, 0xc0, 0x0, 0x8a, 0x0, 0xa, 0x90, 0x0,
    0x9a, 0x0, 0x3, 0xe9, 0x0, 0x1c, 0xc0, 0x9,
    0xb0, 0x0, 0xa9, 0x0, 0x9, 0xa0, 0x0, 0x7b,
    0x0, 0x6, 0xd0, 0x0, 0x9c, 0x0, 0xff, 0x50,
    0x2, 0x0, 0x0,

    /* U+007E "~" */
    0xa, 0xea, 0x17, 0x94, 0xc3, 0xaf, 0xe2, 0x11,
    0x0, 0x10, 0x0,

    /* U+00C4 "Ä" */
    0x0, 0x6, 0x4, 0x20, 0x0, 0x0, 0xe3, 0xb6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x8, 0xff, 0x0, 0x0, 0x0,
    0xe8, 0xf5, 0x0, 0x0, 0x4f, 0x2b, 0xa0, 0x0,
    0x9, 0xc0, 0x5f, 0x0, 0x0, 0xe7, 0x0, 0xf6,
    0x0, 0x4f, 0x20, 0xb, 0xb0, 0xa, 0xff, 0xff,
    0xff, 0x10, 0xf7, 0x22, 0x22, 0xf7, 0x5f, 0x0,
    0x0, 0x9, 0xc0,

    /* U+00D6 "Ö" */
    0x0, 0x0, 0x60, 0x51, 0x0, 0x0, 0x0, 0x3e,
    0xd, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x8d, 0xfd, 0x81, 0x0, 0x1, 0xeb,
    0x42, 0x4b, 0xe1, 0x0, 0xbb, 0x0, 0x0, 0xb,
    0xc0, 0x2f, 0x20, 0x0, 0x0, 0x2f, 0x25, 0xf0,
    0x0, 0x0, 0x0, 0xf5, 0x5f, 0x0, 0x0, 0x0,
    0xf, 0x52, 0xf2, 0x0, 0x0, 0x2, 0xf2, 0xc,
    0xb0, 0x0, 0x0, 0xbc, 0x0, 0x2e, 0xb4, 0x24,
    0xbe, 0x20, 0x0, 0x19, 0xef, 0xe9, 0x10, 0x0,

    /* U+00DC "Ü" */
    0x0, 0x60, 0x42, 0x0, 0x0, 0xe3, 0xb6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf5, 0x0, 0x0, 0xe6,
    0xf5, 0x0, 0x0, 0xe6, 0xf5, 0x0, 0x0, 0xe6,
    0xf5, 0x0, 0x0, 0xe6, 0xf5, 0x0, 0x0, 0xe6,
    0xf5, 0x0, 0x0, 0xe6, 0xe5, 0x0, 0x0, 0xe6,
    0xc9, 0x0, 0x2, 0xf3, 0x5f, 0x72, 0x4c, 0xc0,
    0x5, 0xcf, 0xe9, 0x10,

    /* U+00E4 "ä" */
    0x0, 0xe, 0x3a, 0x70, 0x0, 0x0, 0x60, 0x42,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xef,
    0xb2, 0xe6, 0xa, 0xe5, 0x26, 0xdf, 0x62, 0xf4,
    0x0, 0x4, 0xf6, 0x5f, 0x0, 0x0, 0xf, 0x65,
    0xf0, 0x0, 0x0, 0xf6, 0x2f, 0x30, 0x0, 0x4f,
    0x60, 0xad, 0x30, 0x3d, 0xf6, 0x0, 0x8e, 0xfc,
    0x3e, 0x60,

    /* U+00F6 "ö" */
    0x0, 0x3d, 0xd, 0x30, 0x0, 0x1, 0x60, 0x61,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xdf,
    0xd7, 0x0, 0x9, 0xe5, 0x26, 0xe8, 0x2, 0xf4,
    0x0, 0x5, 0xf1, 0x5f, 0x0, 0x0, 0xf, 0x45,
    0xf0, 0x0, 0x0, 0xf4, 0x2f, 0x40, 0x0, 0x5f,
    0x10, 0x9e, 0x52, 0x6f, 0x80, 0x0, 0x7d, 0xfd,
    0x60, 0x0,

    /* U+00FC "ü" */
    0x3, 0xd0, 0xd3, 0x0, 0x16, 0x6, 0x10, 0x0,
    0x0, 0x0, 0xf, 0x40, 0x0, 0x6e, 0xf4, 0x0,
    0x6, 0xef, 0x40, 0x0, 0x6e, 0xf4, 0x0, 0x6,
    0xef, 0x40, 0x0, 0x6e, 0xe6, 0x0, 0x9, 0xe8,
    0xe3, 0x5, 0xfe, 0x8, 0xef, 0xb8, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 67, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 65, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 16, .adv_w = 188, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 129, .adv_w = 170, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 166, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 242, .adv_w = 102, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 282, .adv_w = 102, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 322, .adv_w = 109, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 340, .adv_w = 153, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 372, .adv_w = 44, .box_w = 4, .box_h = 4, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 380, .adv_w = 123, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 387, .adv_w = 47, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 107, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 438, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 72, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 132, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 122, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 59, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 880, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 901, .adv_w = 162, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 921, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 942, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 227, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1055, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 158, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 115, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1290, .adv_w = 174, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1345, .adv_w = 155, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 55, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1395, .adv_w = 119, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1465, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1490, .adv_w = 193, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1540, .adv_w = 157, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1580, .adv_w = 176, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1635, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1670, .adv_w = 177, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1736, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1771, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1811, .adv_w = 121, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1851, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1891, .adv_w = 151, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1941, .adv_w = 219, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2011, .adv_w = 139, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2056, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2096, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2131, .adv_w = 95, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2165, .adv_w = 147, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2221, .adv_w = 95, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2255, .adv_w = 141, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 2291, .adv_w = 164, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2303, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 2311, .adv_w = 151, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2347, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2391, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2423, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2473, .adv_w = 139, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2509, .adv_w = 74, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2537, .adv_w = 151, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2591, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2630, .adv_w = 55, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2647, .adv_w = 56, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2677, .adv_w = 115, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2716, .adv_w = 55, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2727, .adv_w = 231, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2779, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2807, .adv_w = 143, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2843, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2891, .adv_w = 151, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2945, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2961, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2989, .adv_w = 82, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3014, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3042, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3074, .adv_w = 184, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3122, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3150, .adv_w = 126, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3198, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3222, .adv_w = 103, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3265, .adv_w = 65, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3278, .adv_w = 103, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3321, .adv_w = 116, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3332, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3391, .adv_w = 176, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3463, .adv_w = 151, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3515, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3565, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3615, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x12, 0x18, 0x20, 0x32, 0x38
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 196, .range_length = 57, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .cmap_num = 2,
    .bpp = 4,
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

