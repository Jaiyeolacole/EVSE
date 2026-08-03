/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font C:/Users/USER/SquareLine/assets/Magic Yellow.otf -o C:/Users/USER/SquareLine/assets\ui_font_Font1.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x6d, 0xb6, 0x3b,

    /* U+0022 "\"" */
    0xf7, 0xb4,

    /* U+0023 "#" */
    0x37, 0x1b, 0xbf, 0xef, 0xef, 0xf7, 0xf9, 0xb8,
    0x48,

    /* U+0024 "$" */
    0x33, 0xff, 0xbe, 0x1f, 0xff, 0x84,

    /* U+0025 "%" */
    0x31, 0xf, 0x61, 0x68, 0x3f, 0x40, 0x5e, 0x1a,
    0xc3, 0x78, 0x40,

    /* U+0026 "&" */
    0x7c, 0xf9, 0xb3, 0x7d, 0xf9, 0xff, 0x3e, 0x4,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x37, 0x6c, 0xcc, 0xcc, 0x63,

    /* U+0029 ")" */
    0xc6, 0x73, 0x33, 0x36, 0xec,

    /* U+002A "*" */
    0x2f, 0x75, 0x0,

    /* U+002B "+" */
    0x30, 0xcf, 0xff, 0x30,

    /* U+002C "," */
    0x7d, 0x0,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x19, 0x8c, 0xc6, 0x33, 0x18,

    /* U+0030 "0" */
    0x79, 0xfc, 0xf3, 0xcf, 0xff, 0xde,

    /* U+0031 "1" */
    0x7f, 0xf6, 0xdb,

    /* U+0032 "2" */
    0x3b, 0xfc, 0xf7, 0x19, 0xcf, 0xff,

    /* U+0033 "3" */
    0x7b, 0xfd, 0xce, 0x3b, 0x3f, 0xfe,

    /* U+0034 "4" */
    0xed, 0xdb, 0xb7, 0xff, 0xff, 0xc3, 0x4,

    /* U+0035 "5" */
    0x7f, 0xff, 0xff, 0xff, 0xfe,

    /* U+0036 "6" */
    0x7d, 0xec, 0xbe, 0xef, 0x3f, 0xde,

    /* U+0037 "7" */
    0xff, 0xc4, 0x62, 0x31, 0x8,

    /* U+0038 "8" */
    0x0, 0xf9, 0xfb, 0x77, 0xcc, 0xfb, 0xbf, 0x3c,

    /* U+0039 "9" */
    0x7b, 0xfc, 0xf3, 0x7d, 0x37, 0xbe,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0xf8, 0xd, 0x80,

    /* U+003C "<" */
    0x36, 0xef, 0x70,

    /* U+003D "=" */
    0xfd, 0xf0,

    /* U+003E ">" */
    0xc3, 0x3f, 0xe0,

    /* U+003F "?" */
    0xf7, 0xe6, 0xe6, 0x30, 0x8c,

    /* U+0040 "@" */
    0x1f, 0x1f, 0x9b, 0x6b, 0xfd, 0xf2, 0xf9, 0x84,
    0xff, 0x3e, 0x0,

    /* U+0041 "A" */
    0x7c, 0xff, 0xbe, 0x3c, 0x7f, 0xff, 0xf7, 0x0,

    /* U+0042 "B" */
    0xfb, 0xfc, 0xfe, 0xcf, 0xff, 0xfe, 0xe0,

    /* U+0043 "C" */
    0x39, 0xee, 0x30, 0xe3, 0xf7, 0xce,

    /* U+0044 "D" */
    0xf9, 0xfb, 0x36, 0x6d, 0xdf, 0xbf, 0x78,

    /* U+0045 "E" */
    0xff, 0xfd, 0xec, 0x7f, 0xff,

    /* U+0046 "F" */
    0xff, 0xfc, 0x3e, 0xfb, 0xc, 0x30,

    /* U+0047 "G" */
    0x0, 0x0, 0x63, 0xe6, 0xd9, 0xf7, 0xf7, 0xfe,
    0xfc, 0x60,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xff, 0xf1, 0xe3,

    /* U+0049 "I" */
    0xff, 0xec, 0x63, 0x3f, 0xff,

    /* U+004A "J" */
    0x3c, 0xf0, 0xc3, 0x1f, 0xff, 0xfe,

    /* U+004B "K" */
    0xcf, 0x7f, 0x3c, 0xfb, 0x6d, 0xf3,

    /* U+004C "L" */
    0xc6, 0x31, 0x8c, 0x7f, 0xff,

    /* U+004D "M" */
    0xc2, 0xe7, 0xe7, 0xff, 0xdb, 0xdb, 0xc3, 0xc3,

    /* U+004E "N" */
    0xe7, 0xcf, 0x9f, 0xbf, 0xfb, 0xf3, 0xe7,

    /* U+004F "O" */
    0x0, 0x79, 0xf7, 0x7c, 0x79, 0xff, 0xbe, 0x38,

    /* U+0050 "P" */
    0x7d, 0x9f, 0x1e, 0x3f, 0xdf, 0x30, 0x60,

    /* U+0051 "Q" */
    0x0, 0x71, 0xf7, 0x7c, 0x79, 0xff, 0xbe, 0x3c,
    0x18,

    /* U+0052 "R" */
    0x0, 0xfb, 0x3e, 0x3c, 0xff, 0xff, 0x67, 0xce,

    /* U+0053 "S" */
    0x7d, 0xfb, 0x87, 0xe1, 0xdf, 0xbf, 0x7c,

    /* U+0054 "T" */
    0xff, 0xff, 0xcc, 0x30, 0xc3, 0xc,

    /* U+0055 "U" */
    0x6d, 0xdf, 0x3e, 0x7e, 0xff, 0xff, 0x3e,

    /* U+0056 "V" */
    0xe3, 0xb9, 0x9c, 0xce, 0xc3, 0xe1, 0xf0, 0x70,
    0x38,

    /* U+0057 "W" */
    0xe3, 0xf1, 0xfa, 0xff, 0x7f, 0xff, 0x3f, 0x9f,
    0x82,

    /* U+0058 "X" */
    0xee, 0xee, 0x7c, 0x3c, 0x38, 0x7c, 0x7e, 0xee,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xf3, 0x7f, 0xff, 0xfe,

    /* U+005A "Z" */
    0xff, 0xf1, 0xce, 0x63, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0xc6, 0x18, 0xc3, 0x18, 0xc3,

    /* U+005D "]" */
    0x77, 0x33, 0x33, 0x33, 0x3f, 0x70,

    /* U+005E "^" */
    0x23, 0x1d, 0xb0,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0061 "a" */
    0x79, 0xf1, 0xff, 0xdf, 0xff, 0xc0,

    /* U+0062 "b" */
    0xc1, 0x83, 0xf6, 0xec, 0xd9, 0xbf, 0x7c,

    /* U+0063 "c" */
    0x7b, 0xec, 0x30, 0xfb, 0xf7, 0x80,

    /* U+0064 "d" */
    0xc, 0x37, 0xfb, 0xef, 0xff, 0xcf,

    /* U+0065 "e" */
    0x7f, 0xff, 0xf8, 0xff, 0xf7, 0x80,

    /* U+0066 "f" */
    0x3d, 0xf7, 0xd8, 0x63, 0xf6, 0x18,

    /* U+0067 "g" */
    0x7b, 0xfe, 0xff, 0x7c, 0x3f, 0xff, 0xf0,

    /* U+0068 "h" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xf3,

    /* U+0069 "i" */
    0x7, 0x6e, 0xe6, 0x66, 0x60,

    /* U+006A "j" */
    0x11, 0x80, 0x71, 0x8c, 0x6f, 0x7b, 0x80,

    /* U+006B "k" */
    0xc3, 0xc, 0xb6, 0xfb, 0x6d, 0xb7,

    /* U+006C "l" */
    0xff, 0xff,

    /* U+006D "m" */
    0xdb, 0xbf, 0xff, 0xef, 0x33, 0xcc, 0xf3, 0x3c,
    0xc,

    /* U+006E "n" */
    0x1, 0xb3, 0xf6, 0xec, 0xf9, 0xf3, 0xe7,

    /* U+006F "o" */
    0x0, 0xfb, 0xff, 0x3e, 0x7d, 0xdf, 0x1c,

    /* U+0070 "p" */
    0xd3, 0xfc, 0xf3, 0xff, 0xec, 0x30, 0x80,

    /* U+0071 "q" */
    0x7f, 0xfe, 0xff, 0xfc, 0x30, 0xc3,

    /* U+0072 "r" */
    0xdf, 0xff, 0x8c, 0x63, 0x0,

    /* U+0073 "s" */
    0x7f, 0xfe, 0x3f, 0x1f, 0xff, 0x80,

    /* U+0074 "t" */
    0x61, 0x8f, 0xd8, 0x61, 0xf7, 0xcf,

    /* U+0075 "u" */
    0xed, 0x9b, 0x36, 0x6f, 0xdf, 0x9e, 0x0,

    /* U+0076 "v" */
    0xe7, 0xcd, 0x93, 0xe7, 0xc7, 0xe, 0x0,

    /* U+0077 "w" */
    0xc1, 0xe6, 0xf3, 0x79, 0xbf, 0xff, 0xfd, 0xcc,
    0x0,

    /* U+0078 "x" */
    0x6e, 0xf9, 0xf1, 0xc7, 0x8f, 0xbb, 0x80,

    /* U+0079 "y" */
    0xef, 0xbe, 0xff, 0x7c, 0x3f, 0xfe, 0xf0,

    /* U+007A "z" */
    0xff, 0xce, 0xed, 0x7f, 0xe0,

    /* U+007C "|" */
    0xff, 0xff, 0xc0,

    /* U+007E "~" */
    0x6b, 0xe5, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 53, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 75, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6, .adv_w = 140, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 167, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 41, .adv_w = 72, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 46, .adv_w = 71, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 51, .adv_w = 74, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 54, .adv_w = 101, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 58, .adv_w = 47, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 60, .adv_w = 85, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 62, .adv_w = 39, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 75, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 69, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 42, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 128, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 131, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 134, .adv_w = 58, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 136, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 139, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 142, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 155, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 163, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 170, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 93, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 118, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 204, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 142, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 272, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 143, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 155, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 119, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 71, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 344, .adv_w = 75, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 66, .box_w = 4, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 358, .adv_w = 120, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 360, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 102, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 404, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 60, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 78, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 422, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 53, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 153, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 460, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 466, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 109, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 158, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 506, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 520, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 48, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 528, .adv_w = 94, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_2[] = {
    0, 0, 1
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 64, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 65,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 124, .range_length = 3, .glyph_id_start = 91,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_2, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    2, 17,
    2, 18,
    2, 19,
    2, 20,
    2, 21,
    2, 25,
    2, 26,
    3, 18,
    3, 24,
    3, 26,
    4, 22,
    4, 24,
    9, 17,
    9, 18,
    9, 20,
    9, 21,
    9, 22,
    9, 24,
    9, 25,
    9, 26,
    10, 20,
    10, 22,
    10, 24,
    10, 25,
    11, 18,
    11, 19,
    11, 24,
    11, 26,
    13, 18,
    13, 21,
    13, 24,
    13, 26,
    16, 17,
    16, 18,
    16, 19,
    16, 20,
    16, 21,
    16, 22,
    16, 25,
    16, 26,
    17, 2,
    17, 10,
    17, 13,
    17, 16,
    17, 20,
    17, 22,
    17, 25,
    17, 62,
    17, 64,
    18, 2,
    18, 9,
    18, 11,
    18, 17,
    18, 20,
    18, 21,
    18, 22,
    18, 25,
    19, 2,
    19, 4,
    19, 9,
    19, 11,
    19, 17,
    19, 20,
    19, 21,
    19, 22,
    19, 25,
    19, 61,
    20, 2,
    20, 10,
    20, 16,
    20, 18,
    20, 19,
    20, 22,
    20, 24,
    20, 26,
    20, 32,
    20, 61,
    20, 62,
    20, 64,
    21, 2,
    21, 10,
    21, 13,
    21, 16,
    21, 19,
    21, 20,
    21, 22,
    21, 24,
    21, 25,
    21, 32,
    21, 61,
    21, 62,
    21, 64,
    22, 2,
    22, 10,
    22, 13,
    22, 16,
    22, 18,
    22, 19,
    22, 26,
    22, 28,
    22, 62,
    22, 64,
    23, 2,
    23, 10,
    23, 18,
    23, 19,
    23, 22,
    23, 24,
    23, 26,
    23, 32,
    23, 61,
    23, 62,
    23, 64,
    24, 3,
    24, 4,
    24, 9,
    24, 11,
    24, 13,
    24, 14,
    24, 16,
    24, 17,
    24, 18,
    24, 19,
    24, 20,
    24, 21,
    24, 22,
    24, 25,
    24, 26,
    24, 27,
    24, 28,
    24, 64,
    25, 2,
    25, 10,
    25, 16,
    25, 18,
    25, 19,
    25, 22,
    25, 26,
    25, 28,
    25, 62,
    25, 64,
    26, 2,
    26, 10,
    26, 13,
    26, 14,
    26, 16,
    26, 20,
    26, 22,
    26, 24,
    26, 25,
    26, 61,
    26, 62,
    26, 64,
    27, 18,
    27, 24,
    27, 26,
    28, 18,
    28, 19,
    28, 20,
    28, 24,
    28, 25,
    28, 26,
    32, 22,
    32, 25,
    34, 2,
    34, 10,
    34, 13,
    34, 16,
    34, 55,
    34, 57,
    34, 61,
    34, 62,
    34, 64,
    34, 74,
    34, 88,
    35, 2,
    35, 10,
    35, 32,
    35, 55,
    35, 57,
    35, 58,
    35, 61,
    35, 62,
    35, 64,
    35, 71,
    35, 73,
    35, 74,
    35, 84,
    35, 86,
    35, 88,
    35, 89,
    36, 9,
    36, 10,
    36, 32,
    36, 54,
    36, 55,
    36, 58,
    36, 73,
    36, 81,
    36, 84,
    36, 86,
    36, 87,
    37, 2,
    37, 10,
    37, 13,
    37, 16,
    37, 55,
    37, 57,
    37, 61,
    37, 62,
    37, 64,
    37, 74,
    37, 86,
    37, 88,
    38, 10,
    38, 73,
    38, 74,
    38, 81,
    38, 84,
    39, 3,
    39, 9,
    39, 10,
    39, 11,
    39, 13,
    39, 14,
    39, 16,
    39, 27,
    39, 28,
    39, 36,
    39, 43,
    39, 46,
    39, 64,
    39, 65,
    39, 66,
    39, 67,
    39, 68,
    39, 69,
    39, 70,
    39, 74,
    40, 2,
    40, 10,
    40, 32,
    40, 53,
    40, 55,
    40, 57,
    40, 61,
    40, 62,
    40, 64,
    40, 74,
    40, 86,
    40, 88,
    41, 2,
    41, 10,
    41, 74,
    42, 10,
    42, 73,
    42, 74,
    42, 81,
    42, 84,
    43, 2,
    43, 10,
    43, 13,
    43, 16,
    43, 62,
    43, 64,
    43, 74,
    44, 4,
    44, 9,
    44, 11,
    44, 16,
    44, 34,
    44, 36,
    44, 54,
    44, 62,
    44, 67,
    44, 68,
    44, 69,
    44, 70,
    44, 73,
    44, 81,
    44, 84,
    44, 85,
    44, 87,
    45, 32,
    45, 53,
    45, 55,
    45, 58,
    45, 61,
    45, 62,
    45, 73,
    45, 84,
    45, 86,
    46, 32,
    46, 53,
    46, 55,
    46, 61,
    46, 86,
    48, 2,
    48, 10,
    48, 13,
    48, 14,
    48, 16,
    48, 55,
    48, 57,
    48, 59,
    48, 61,
    48, 62,
    48, 64,
    48, 74,
    48, 88,
    49, 2,
    49, 3,
    49, 10,
    49, 11,
    49, 13,
    49, 14,
    49, 16,
    49, 27,
    49, 28,
    49, 43,
    49, 62,
    49, 64,
    49, 65,
    49, 70,
    49, 74,
    50, 2,
    50, 10,
    50, 13,
    50, 14,
    50, 16,
    50, 43,
    50, 55,
    50, 57,
    50, 59,
    50, 61,
    50, 62,
    50, 64,
    50, 74,
    50, 88,
    51, 2,
    51, 3,
    51, 10,
    51, 11,
    51, 27,
    51, 28,
    51, 55,
    51, 65,
    51, 68,
    51, 70,
    51, 74,
    52, 2,
    52, 32,
    52, 58,
    52, 62,
    52, 64,
    52, 71,
    52, 73,
    52, 74,
    52, 84,
    52, 86,
    52, 88,
    52, 89,
    53, 3,
    53, 9,
    53, 10,
    53, 11,
    53, 13,
    53, 14,
    53, 16,
    53, 27,
    53, 28,
    53, 36,
    53, 43,
    53, 46,
    53, 64,
    53, 65,
    53, 67,
    53, 68,
    53, 69,
    53, 70,
    53, 74,
    55, 3,
    55, 4,
    55, 9,
    55, 11,
    55, 13,
    55, 14,
    55, 16,
    55, 27,
    55, 28,
    55, 34,
    55, 35,
    55, 36,
    55, 43,
    55, 46,
    55, 52,
    55, 54,
    55, 64,
    55, 65,
    55, 66,
    55, 67,
    55, 68,
    55, 69,
    55, 70,
    55, 71,
    55, 73,
    55, 74,
    55, 81,
    55, 83,
    55, 84,
    55, 85,
    55, 87,
    55, 89,
    57, 4,
    57, 9,
    57, 11,
    57, 16,
    57, 34,
    57, 36,
    57, 54,
    57, 62,
    57, 67,
    57, 68,
    57, 69,
    57, 70,
    57, 73,
    57, 81,
    57, 84,
    57, 85,
    58, 2,
    58, 62,
    58, 64,
    58, 74,
    59, 4,
    59, 9,
    59, 10,
    59, 11,
    59, 36,
    59, 69,
    59, 73,
    59, 74,
    59, 81,
    60, 17,
    60, 18,
    60, 20,
    60, 21,
    60, 25,
    60, 26,
    61, 17,
    61, 18,
    61, 21,
    61, 26,
    64, 17,
    64, 18,
    64, 20,
    64, 21,
    64, 25,
    64, 26,
    65, 32,
    65, 61,
    65, 86,
    66, 2,
    66, 10,
    66, 32,
    66, 61,
    66, 62,
    66, 64,
    66, 74,
    66, 86,
    66, 88,
    67, 10,
    67, 32,
    67, 61,
    67, 73,
    67, 74,
    67, 81,
    67, 84,
    67, 86,
    68, 2,
    68, 61,
    68, 74,
    68, 88,
    69, 2,
    69, 10,
    69, 61,
    69, 64,
    69, 74,
    70, 2,
    70, 3,
    70, 9,
    70, 10,
    70, 11,
    70, 13,
    70, 14,
    70, 16,
    70, 27,
    70, 28,
    70, 62,
    70, 64,
    70, 65,
    70, 68,
    70, 74,
    72, 10,
    72, 32,
    72, 61,
    72, 74,
    72, 86,
    73, 2,
    73, 3,
    73, 4,
    73, 9,
    73, 10,
    73, 11,
    73, 13,
    73, 14,
    73, 16,
    73, 27,
    73, 28,
    73, 62,
    73, 64,
    73, 65,
    73, 66,
    73, 67,
    73, 68,
    73, 69,
    73, 70,
    73, 71,
    73, 74,
    73, 81,
    73, 83,
    73, 84,
    73, 85,
    74, 10,
    75, 4,
    75, 9,
    75, 11,
    75, 32,
    75, 61,
    75, 62,
    75, 67,
    75, 68,
    75, 69,
    75, 70,
    75, 85,
    75, 86,
    76, 2,
    76, 3,
    76, 4,
    76, 9,
    76, 10,
    76, 11,
    76, 13,
    76, 14,
    76, 16,
    76, 27,
    76, 28,
    76, 65,
    76, 66,
    76, 67,
    76, 68,
    76, 69,
    76, 70,
    76, 71,
    76, 74,
    76, 85,
    79, 2,
    79, 10,
    79, 13,
    79, 16,
    79, 32,
    79, 61,
    79, 62,
    79, 64,
    79, 74,
    79, 86,
    79, 88,
    79, 90,
    80, 2,
    80, 3,
    80, 10,
    80, 13,
    80, 14,
    80, 16,
    80, 61,
    80, 62,
    80, 64,
    80, 74,
    80, 86,
    80, 88,
    80, 90,
    82, 2,
    82, 3,
    82, 9,
    82, 10,
    82, 11,
    82, 13,
    82, 14,
    82, 16,
    82, 27,
    82, 28,
    82, 62,
    82, 64,
    82, 65,
    82, 67,
    82, 68,
    82, 70,
    82, 74,
    83, 2,
    83, 10,
    83, 32,
    83, 64,
    83, 71,
    83, 73,
    83, 74,
    83, 84,
    83, 88,
    83, 89,
    84, 10,
    84, 32,
    84, 61,
    84, 73,
    84, 74,
    84, 81,
    84, 86,
    85, 2,
    85, 10,
    85, 13,
    85, 16,
    85, 61,
    85, 62,
    85, 64,
    85, 74,
    85, 86,
    85, 88,
    86, 2,
    86, 3,
    86, 4,
    86, 9,
    86, 10,
    86, 11,
    86, 13,
    86, 14,
    86, 16,
    86, 27,
    86, 28,
    86, 62,
    86, 64,
    86, 65,
    86, 66,
    86, 67,
    86, 68,
    86, 69,
    86, 70,
    86, 71,
    86, 73,
    86, 74,
    86, 81,
    86, 85,
    87, 2,
    87, 10,
    87, 13,
    87, 16,
    87, 62,
    87, 64,
    87, 74,
    88, 4,
    88, 9,
    88, 11,
    88, 62,
    88, 65,
    88, 67,
    88, 68,
    88, 69,
    88, 70,
    88, 73,
    88, 81,
    88, 85,
    90, 9,
    90, 10,
    90, 11,
    90, 69,
    90, 74
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -3, -3, -1, -2, -4, -2, -2, -6,
    -5, -5, -2, -2, -6, -7, -7, -7,
    -3, -4, -7, -1, -2, -2, -1, -2,
    -6, -2, -6, -5, -6, -4, -2, -3,
    -6, -5, -2, -1, -2, -5, -4, -1,
    -3, -6, -3, -3, -1, -2, -1, -6,
    -5, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -2, -4, -2, -1, -2,
    -1, -2, -1, -4, -7, -1, -5, -2,
    -2, -2, -3, -2, -2, -5, -5, -3,
    -7, -4, -4, -1, -1, -1, -6, -1,
    -2, -6, -6, -6, -3, -7, -2, -2,
    -5, -2, -3, -1, -2, -5, -3, -4,
    -6, -2, -1, -5, -5, -5, -1, -3,
    -4, -8, -7, -6, -8, -8, -8, -8,
    -6, -6, -3, -1, -2, -5, -7, -2,
    -8, -8, -8, -3, -7, -1, -2, -1,
    -2, -1, -1, -4, -5, -3, -6, -5,
    -1, -4, -2, -2, -3, -2, -5, -6,
    -6, -6, -6, -3, -3, -1, -2, -6,
    -1, -1, -1, -1, -2, -7, -1, -1,
    -4, -3, -3, -2, -2, -9, -1, -2,
    -7, -1, -6, -2, -1, -2, -5, -5,
    -1, -2, -8, -2, -2, -1, -1, -1,
    -2, -3, -1, -2, -2, -3, -3, -6,
    -3, -1, -2, -7, -3, -3, -10, -6,
    -6, -6, -6, -10, -2, -4, -2, -3,
    -1, -2, -4, -7, -3, -3, -7, -7,
    -7, -7, -6, -6, -2, -10, -2, -8,
    -3, -1, -2, -7, -2, -8, -12, -2,
    -7, -2, -3, -10, -5, -6, -4, -5,
    -9, -4, -6, -1, -3, -4, -1, -3,
    -1, -2, -1, -2, -7, -3, -3, -5,
    -5, -10, -6, -5, -2, 0, -3, -6,
    -3, 2, -3, -3, -6, -4, -3, -6,
    -4, -2, -1, -7, -13, -13, -3, -8,
    1, -3, -7, -10, -2, -1, -4, -3,
    -3, -2, -7, -4, -1, -4, -7, -4,
    -1, -3, -6, -6, -10, -2, -1, -7,
    -7, -6, -8, -7, -7, -4, -3, -8,
    -7, -9, -3, -6, -11, -2, -7, -4,
    -1, -4, -1, -7, -4, -1, -3, -6,
    -5, -10, -2, -1, -1, -4, -5, -1,
    -1, -4, -1, -1, -4, -4, -2, -2,
    -1, -2, -4, -1, -2, -2, -3, -1,
    -2, -1, -8, -3, -1, -8, -8, -7,
    -7, -7, -7, -1, -11, -2, -7, -4,
    -2, -6, -2, -8, -12, -8, -6, -6,
    -8, -8, -8, -7, -7, -7, -5, -1,
    -10, -12, -5, -2, -3, -8, -7, -6,
    -9, -11, -9, -10, -7, -8, -13, -10,
    -5, -4, -5, -1, -1, -6, -5, -3,
    0, -3, -7, -2, 3, -4, -5, -8,
    -6, -3, -7, -6, -3, -2, -1, -4,
    -3, -1, -2, -1, -1, -1, -2, -2,
    -2, -2, -4, -6, -3, -6, -2, -1,
    -1, -6, -4, -2, -5, -6, -4, -8,
    -4, -1, -3, -6, -4, -3, -7, -4,
    -7, -3, -5, -8, -7, -7, -4, -1,
    -3, -2, -2, -1, -1, -2, -1, -4,
    -2, -1, -1, -6, -2, -3, -5, -1,
    -3, -1, -7, -4, -5, -3, -6, -5,
    -5, -4, -8, -3, -3, -11, -2, -4,
    -7, -2, -7, -2, -4, -3, -4, -6,
    -4, -3, -3, -2, -4, -4, -1, -1,
    -3, -3, -2, -3, -2, -4, -2, -8,
    -2, -2, -2, -2, -3, -2, -3, -3,
    -1, -6, 2, -1, -2, -1, -2, -1,
    -4, -2, -2, -2, -2, -4, -3, -2,
    -2, -1, -2, -3, -3, -1, -1, -2,
    -1, -2, -1, -7, -1, -2, -6, -4,
    -3, -1, -6, -6, -6, -9, -2, -5,
    -1, -2, -1, -6, -6, -3, -4, -6,
    -6, -8, -10, -2, -5, -1, -2, -8,
    -1, -7, -7, -8, -8, -7, -5, -5,
    -7, -8, -4, -1, -2, -7, -13, -2,
    -3, -1, -3, -1, -2, -2, -1, -1,
    -1, -2, -5, -6, -2, -1, -1, -6,
    -2, -6, -1, -1, -4, -5, -5, -6,
    -1, -1, -2, -6, -3, -5, -7, -6,
    -7, -6, -6, -6, -6, -7, -7, -4,
    -1, -5, -8, -4, -9, -2, -3, -12,
    -3, -3, -2, -7, -3, -2, -6, -5,
    -10, -4, -5, -5, 1, -1, -5, -6,
    -6, -7, -4, -4, -1, -1, -1, -3,
    -1, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 682,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 3,
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
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT1*/

