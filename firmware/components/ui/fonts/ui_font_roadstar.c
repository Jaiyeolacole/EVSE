/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:/Users/USER/SquareLine/assets/ROADSTER.ttf -o C:/Users/USER/SquareLine/assets\ui_font_roadstar.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ROADSTAR
#define UI_FONT_ROADSTAR 1
#endif

#if UI_FONT_ROADSTAR

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x77, 0x77, 0x77, 0x77, 0x77, 0x70, 0x77,

    /* U+0022 "\"" */
    0xde, 0xd6, 0xa0,

    /* U+0023 "#" */
    0x7e, 0x3f, 0x1f, 0x8f, 0xc7, 0xe3, 0xf3, 0xfd,
    0xfe, 0x7e, 0x7f, 0xdf, 0x8f, 0xc7, 0xe3, 0xf1,
    0xf8,

    /* U+0024 "$" */
    0x18, 0x18, 0x36, 0x67, 0x67, 0xe0, 0xe0, 0x70,
    0x78, 0x3c, 0x1e, 0xf, 0x7, 0x87, 0xc7, 0x3e,
    0x18, 0x18,

    /* U+0025 "%" */
    0x78, 0xc1, 0x37, 0xc, 0xd8, 0x33, 0x60, 0xcf,
    0x83, 0x2e, 0x7, 0xb0, 0x0, 0xde, 0x7, 0x48,
    0x1b, 0x30, 0x6c, 0xc3, 0xb3, 0xe, 0xc8, 0x39,
    0xe0,

    /* U+0026 "&" */
    0x18, 0x9, 0x86, 0x61, 0x98, 0x6c, 0xb, 0x2,
    0x80, 0xc0, 0x38, 0x1a, 0x6, 0xcf, 0x1f, 0xc7,
    0xb3, 0xe7, 0x38, 0x6,

    /* U+0027 "'" */
    0xf5,

    /* U+0028 "(" */
    0x1, 0xce, 0xe7, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x39, 0xcf, 0x38, 0x0,

    /* U+0029 ")" */
    0x4e, 0xe6, 0x73, 0x33, 0x33, 0x33, 0x77, 0x6e,
    0xc0,

    /* U+002A "*" */
    0x10, 0x23, 0xf9, 0x42, 0xcd, 0x80,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xf5,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0xc, 0x18, 0x70, 0xe1, 0x83, 0xe, 0x18, 0x30,
    0x61, 0xc3, 0xe, 0x1c, 0x0,

    /* U+0030 "0" */
    0x1c, 0x1b, 0x18, 0xcc, 0x6e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xd8, 0xcc, 0xe3, 0x60, 0xe0,

    /* U+0031 "1" */
    0x3b, 0xfe, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c,

    /* U+0032 "2" */
    0x78, 0x73, 0x39, 0x80, 0xc0, 0x60, 0x70, 0x38,
    0x38, 0x38, 0x1c, 0x1c, 0x1c, 0xc, 0x17, 0xfc,

    /* U+0033 "3" */
    0x3c, 0x39, 0x1c, 0xc0, 0x60, 0x60, 0xc0, 0x98,
    0x6, 0x3, 0x1, 0xd8, 0xdc, 0x6f, 0x61, 0xe0,

    /* U+0034 "4" */
    0x3b, 0x99, 0xcc, 0xee, 0x77, 0x3b, 0x1d, 0x8f,
    0xc7, 0xff, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c,

    /* U+0035 "5" */
    0x7f, 0xb0, 0xd8, 0xc, 0x6, 0x3, 0x1, 0xfc,
    0x7, 0x1, 0x80, 0xc8, 0x6e, 0x67, 0x31, 0xe0,

    /* U+0036 "6" */
    0xf, 0xc, 0xe3, 0x39, 0xc0, 0x60, 0x3f, 0xcf,
    0x3b, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x86, 0x73,
    0x87, 0x80,

    /* U+0037 "7" */
    0xff, 0xc7, 0x6, 0x6, 0xe, 0xc, 0xc, 0xc,
    0x1c, 0x18, 0x18, 0x38, 0x38, 0x30,

    /* U+0038 "8" */
    0x1e, 0x39, 0x98, 0xcc, 0x62, 0x30, 0xf1, 0x9d,
    0x87, 0xc3, 0xe1, 0xf0, 0xf8, 0x76, 0x71, 0xf0,

    /* U+0039 "9" */
    0x1f, 0x1c, 0xe6, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1d, 0xcf, 0x3f, 0xc0, 0x60, 0x39, 0xcc, 0x73,
    0xf, 0x0,

    /* U+003A ":" */
    0xfc, 0x0, 0x7, 0xe0,

    /* U+003B ";" */
    0xfc, 0x0, 0xbf, 0x68,

    /* U+003C "<" */
    0x0, 0x1b, 0xf6, 0xf, 0xc1, 0x80,

    /* U+003D "=" */
    0xff, 0xfc, 0x0, 0xf, 0xff, 0xc0,

    /* U+003E ">" */
    0xc1, 0xf8, 0x3f, 0xec, 0x0,

    /* U+003F "?" */
    0x7c, 0xe6, 0xe2, 0x6, 0x6, 0x1c, 0x18, 0x38,
    0x38, 0x38, 0x0, 0x0, 0x1c, 0x1c,

    /* U+0040 "@" */
    0x0, 0x0, 0x7f, 0x83, 0x3, 0x98, 0x6, 0x67,
    0xdf, 0x3b, 0x7c, 0xcd, 0xf2, 0x37, 0xc8, 0xdb,
    0x33, 0x6c, 0xff, 0x18, 0x0, 0x60, 0x0, 0xf8,
    0x0, 0xe0, 0x0,

    /* U+0041 "A" */
    0x1c, 0xf, 0x7, 0x82, 0xc3, 0x61, 0x30, 0x98,
    0x4c, 0x3e, 0x33, 0x99, 0xcc, 0xe6, 0x7f, 0x1c,

    /* U+0042 "B" */
    0x77, 0x1e, 0xe7, 0x19, 0xc6, 0x71, 0x9c, 0xc7,
    0xe1, 0xc6, 0x71, 0x9c, 0x37, 0xd, 0xc7, 0x79,
    0xdd, 0xe0,

    /* U+0043 "C" */
    0xf, 0xe, 0xe7, 0x19, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0xe0, 0x38, 0x7, 0x1, 0xc0, 0x3c,
    0x87, 0xc0,

    /* U+0044 "D" */
    0x7f, 0x1d, 0xe7, 0x39, 0xcf, 0x71, 0xdc, 0x77,
    0x1d, 0xc7, 0x71, 0xdc, 0x77, 0x19, 0xce, 0x7b,
    0x9d, 0xc0,

    /* U+0045 "E" */
    0x7f, 0x9c, 0x27, 0x1, 0xc0, 0x70, 0x1c, 0x7,
    0xf1, 0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,
    0xdf, 0xf0,

    /* U+0046 "F" */
    0xff, 0xf0, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xf9,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0047 "G" */
    0xf, 0x1d, 0xdc, 0x6c, 0xe, 0x7, 0x3, 0xff,
    0xc3, 0xe1, 0xf0, 0xdc, 0x6e, 0x37, 0xb9, 0xec,
    0xe,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0xff,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1c,

    /* U+0049 "I" */
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,

    /* U+004A "J" */
    0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7,
    0x7, 0x7, 0x7, 0xe6, 0xee, 0x78,

    /* U+004B "K" */
    0x71, 0xdc, 0xf7, 0x31, 0xd8, 0x74, 0x1f, 0x7,
    0x81, 0xe0, 0x78, 0x1d, 0x7, 0x61, 0xdc, 0x73,
    0x1c, 0xf0,

    /* U+004C "L" */
    0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0x1c, 0x7,
    0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,
    0xdf, 0xf0,

    /* U+004D "M" */
    0xe0, 0x3f, 0x81, 0xfc, 0x1f, 0xf0, 0xfe, 0x8b,
    0xf2, 0x5f, 0x92, 0xfc, 0xa7, 0xe3, 0x3f, 0x19,
    0xf8, 0xcf, 0xce, 0x7e, 0x73, 0xf3, 0x9c,

    /* U+004E "N" */
    0xe3, 0xf1, 0xfc, 0xfe, 0x7e, 0xbf, 0x5f, 0xaf,
    0xcf, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1c,

    /* U+004F "O" */
    0x1e, 0xc, 0xc7, 0x39, 0x86, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x76, 0x19, 0x8e, 0x33,
    0x7, 0x80,

    /* U+0050 "P" */
    0x77, 0x9e, 0xe7, 0x1d, 0xc7, 0x71, 0xdc, 0x77,
    0x3d, 0xfe, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,
    0x3c, 0x0,

    /* U+0051 "Q" */
    0x1e, 0xc, 0xc6, 0x39, 0x86, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xfa, 0x76, 0x59, 0x9c, 0x32,
    0x7, 0xc0, 0x38, 0x7,

    /* U+0052 "R" */
    0x77, 0x9e, 0xe7, 0x1d, 0xc7, 0x71, 0xdc, 0x77,
    0x3d, 0xfe, 0x78, 0x1d, 0x7, 0x61, 0xd8, 0x73,
    0x3c, 0xf0,

    /* U+0053 "S" */
    0x1e, 0x1b, 0x99, 0xcc, 0x6, 0x3, 0x80, 0xe0,
    0x78, 0x1e, 0x3, 0x81, 0xd0, 0x74, 0x71, 0xf0,

    /* U+0054 "T" */
    0xff, 0x8e, 0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xd8, 0xcc, 0x63, 0x60, 0xe0,

    /* U+0056 "V" */
    0xe3, 0xe7, 0xe7, 0xe6, 0x66, 0x66, 0x66, 0x64,
    0x74, 0x34, 0x3c, 0x3c, 0x38, 0x38,

    /* U+0057 "W" */
    0xe7, 0x9f, 0xde, 0x67, 0x39, 0x9c, 0xe6, 0x73,
    0x98, 0xce, 0x43, 0x39, 0xc, 0xe4, 0x37, 0xb0,
    0xd7, 0x83, 0xde, 0xf, 0x78, 0x3c, 0xe0, 0x73,
    0x80,

    /* U+0058 "X" */
    0x0, 0x70, 0xd8, 0xce, 0x63, 0x61, 0xf0, 0x70,
    0x30, 0xc, 0xe, 0xf, 0x84, 0xc6, 0x72, 0x1b,
    0xe,

    /* U+0059 "Y" */
    0xe1, 0x98, 0x63, 0x30, 0xcc, 0x1e, 0x7, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0,

    /* U+005A "Z" */
    0xff, 0x63, 0x81, 0xc0, 0xc0, 0xe0, 0x60, 0x70,
    0x30, 0x18, 0x1c, 0xc, 0xe, 0x7, 0x17, 0xfc,

    /* U+005B "[" */
    0xff, 0xf9, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x73, 0x9f, 0xf8,

    /* U+005C "\\" */
    0xe0, 0xc1, 0x83, 0x83, 0x6, 0xc, 0x1c, 0x18,
    0x30, 0x70, 0xe0, 0xc1, 0x80,

    /* U+005D "]" */
    0xff, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xff, 0xf8,

    /* U+005E "^" */
    0x31, 0x94, 0xb4, 0xe4,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0x15,

    /* U+0061 "a" */
    0x7c, 0x33, 0x9c, 0xc0, 0xf7, 0xbb, 0x1f, 0x8f,
    0xc7, 0xf3, 0xbf, 0xc0,

    /* U+0062 "b" */
    0x70, 0x1c, 0x7, 0x1, 0xc0, 0x77, 0x1f, 0xe7,
    0x3d, 0xc7, 0x71, 0xdc, 0x77, 0x1d, 0xc7, 0x7f,
    0x9d, 0xe0,

    /* U+0063 "c" */
    0x1e, 0x1d, 0xc7, 0x73, 0x9c, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0x71, 0x8f, 0xc0,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe0, 0x73, 0xbb, 0xfd, 0xcf,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x77, 0xfb, 0xdc,

    /* U+0065 "e" */
    0x1e, 0x39, 0x9d, 0xdc, 0xee, 0xe7, 0xe3, 0x81,
    0xc1, 0x71, 0x1f, 0x0,

    /* U+0066 "f" */
    0x3, 0xc1, 0xcc, 0x73, 0x8e, 0x7f, 0xf8, 0x38,
    0x7, 0x0, 0xe0, 0x1c, 0x3, 0x80, 0x70, 0xe,
    0x1, 0xc0, 0x38, 0x0,

    /* U+0067 "g" */
    0x3b, 0xdf, 0xf6, 0x1d, 0x87, 0xe1, 0xd8, 0x77,
    0x1d, 0xe7, 0x3f, 0xc7, 0x70, 0x1c, 0xe7, 0x33,
    0x8c, 0xe1, 0xe0,

    /* U+0068 "h" */
    0x1f, 0x39, 0xf8, 0x1c, 0xe, 0xe7, 0xbb, 0x8d,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1c,

    /* U+0069 "i" */
    0xfc, 0x7f, 0xff, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0xe, 0x1c, 0x0, 0x70, 0xe1, 0xc3, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe1, 0xc3, 0xb7, 0xef, 0xf9,
    0xe0,

    /* U+006B "k" */
    0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0xdc, 0xf7,
    0x21, 0xd0, 0x78, 0x1d, 0x7, 0x41, 0xd8, 0x73,
    0x1c, 0x70,

    /* U+006C "l" */
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7f,

    /* U+006D "m" */
    0xfc, 0xf3, 0x9c, 0x6e, 0x61, 0xf9, 0xc7, 0xe7,
    0x1f, 0x9c, 0x7e, 0x71, 0xf9, 0xc7, 0xe7, 0x1f,
    0x9c, 0x70,

    /* U+006E "n" */
    0xee, 0x79, 0xb8, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xc0,

    /* U+006F "o" */
    0x1e, 0x1c, 0xe6, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x8e, 0x73, 0x87, 0x80,

    /* U+0070 "p" */
    0x77, 0x1f, 0xe7, 0x19, 0xc6, 0x70, 0x9c, 0x27,
    0x9, 0xc6, 0x7f, 0x9d, 0xc7, 0x1, 0xc0, 0x70,
    0x1c, 0x7, 0x0,

    /* U+0071 "q" */
    0x3b, 0xbf, 0xd8, 0xec, 0x7c, 0x3a, 0x1d, 0xe,
    0xc7, 0x7f, 0x9d, 0xc0, 0xe0, 0x70, 0x38, 0x1c,
    0xe,

    /* U+0072 "r" */
    0xde, 0xe3, 0xc3, 0xc3, 0xc0, 0xc0, 0xe0, 0xe0,
    0xe0, 0xe0,

    /* U+0073 "s" */
    0x1e, 0x1b, 0x99, 0xce, 0x7, 0x1, 0xe0, 0x3c,
    0xf, 0x43, 0x9f, 0x80,

    /* U+0074 "t" */
    0x1e, 0x7, 0x1, 0xc0, 0x70, 0xff, 0x87, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc8, 0x73, 0xe,
    0xc1, 0xf0,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0x67, 0x9d, 0xc0,

    /* U+0076 "v" */
    0xe7, 0xe7, 0x66, 0x66, 0x66, 0x74, 0x34, 0x3c,
    0x38, 0x38,

    /* U+0077 "w" */
    0xe7, 0x1f, 0x39, 0xd9, 0xcc, 0xce, 0x66, 0x73,
    0x3b, 0x90, 0xd6, 0x87, 0xbc, 0x39, 0xc1, 0xce,
    0x0,

    /* U+0078 "x" */
    0xe1, 0xb1, 0x9d, 0x87, 0x81, 0xc0, 0xe0, 0x70,
    0x4c, 0x47, 0x61, 0xc0,

    /* U+0079 "y" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0x67, 0x9d, 0xc0, 0xee, 0x76, 0x73, 0x38,
    0xf0,

    /* U+007A "z" */
    0xff, 0xe3, 0x81, 0x81, 0xc1, 0xc1, 0xc0, 0xe0,
    0xe0, 0xf1, 0x7f, 0xc0,

    /* U+007B "{" */
    0x8, 0x38, 0x70, 0xc3, 0x87, 0xc, 0x18, 0xf1,
    0xe0, 0xc1, 0x83, 0x87, 0xe, 0xe, 0x1c, 0x10,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+007D "}" */
    0x20, 0xe1, 0xc1, 0xc3, 0x87, 0x6, 0xc, 0x1e,
    0x3c, 0x60, 0xc3, 0x87, 0xc, 0x38, 0x70, 0x40,

    /* U+007E "~" */
    0x0, 0x72, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 86, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 68, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 95, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 11, .adv_w = 158, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 151, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 46, .adv_w = 255, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 185, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 91, .adv_w = 54, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 92, .adv_w = 100, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 104, .adv_w = 100, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 113, .adv_w = 116, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 119, .adv_w = 132, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 127, .adv_w = 53, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 128, .adv_w = 130, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 130, .adv_w = 52, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 139, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 158, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 98, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 165, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 148, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 155, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 168, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 163, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 160, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 168, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 55, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 307, .adv_w = 118, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 313, .adv_w = 135, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 319, .adv_w = 118, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 324, .adv_w = 140, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 237, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 138, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 159, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 156, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 164, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 149, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 146, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 162, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 486, .adv_w = 154, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 64, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 128, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 144, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 144, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 222, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 160, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 167, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 151, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 167, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 654, .adv_w = 153, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 140, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 135, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 153, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 138, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 222, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 145, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 138, .box_w = 10, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 109, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 821, .adv_w = 139, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 109, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 845, .adv_w = 94, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 849, .adv_w = 170, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 45, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 852, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 152, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 152, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 152, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 911, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 132, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 153, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 962, .adv_w = 153, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 61, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 984, .adv_w = 60, .box_w = 7, .box_h = 19, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1001, .adv_w = 147, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 62, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 241, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 153, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1056, .adv_w = 167, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 150, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1088, .adv_w = 150, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1105, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1115, .adv_w = 142, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 147, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1145, .adv_w = 153, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1157, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1167, .adv_w = 213, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 156, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1213, .adv_w = 143, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 137, .box_w = 7, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1241, .adv_w = 66, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1248, .adv_w = 137, .box_w = 7, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1264, .adv_w = 127, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 6}
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

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 2, 3, 4, 2, 5, 6,
    0, 4, 1, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 14, 14, 15, 16, 17, 14, 14,
    18, 19, 20, 21, 22, 23, 15, 24,
    24, 25, 26, 27, 0, 0, 2, 0,
    0, 0, 28, 29, 30, 14, 31, 32,
    33, 34, 35, 35, 36, 14, 37, 37,
    38, 39, 40, 41, 42, 43, 33, 44,
    44, 45, 33, 46, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 3, 4, 5, 0, 6, 7, 6,
    8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 19, 0, 0, 0,
    20, 0, 21, 0, 22, 0, 0, 0,
    22, 0, 0, 23, 0, 0, 0, 0,
    24, 0, 24, 0, 25, 26, 27, 28,
    28, 29, 30, 31, 32, 33, 34, 0,
    35, 0, 36, 0, 37, 38, 37, 39,
    40, 41, 0, 0, 0, 0, 42, 42,
    43, 44, 40, 42, 45, 46, 47, 48,
    48, 49, 47, 50, 51, 0, 52, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, -12, -12, 0, -6, -2, -14,
    -5, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, -2, -4,
    -4, -4, -4, -13, -5, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, -14, 0, -12, -14, -12, -13, -15,
    -13, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -13, -12, 0,
    0, -9, -2, -14, -2, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, -13, -8, -9, 0, 0, -4, -10,
    -4, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -13, -12, -6,
    0, -9, 0, -14, -2, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, -5, -10, -12, 0, -10, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, -6, 0, -8,
    0, -20, -11, -16, 0, -19, 0, 0,
    -14, -2, 0, 0, 0, 0, -16, 0,
    0, 0, 0, 0, 0, -16, -3, -12,
    0, 0, -13, -12, -3, -6, 0, -13,
    -7, 0, -3, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, -4, -2, -5,
    -2, -6, -3, 0, -13, -13, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    0, -8, 0, -9, -5, -3, -13, -13,
    -3, 0, -3, -13, -2, 0, -17, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -14, 0, 0, 0, 0, -12, 0,
    0, 0, 0, 0, 0, -12, -2, -16,
    -3, 0, -14, -13, 0, -6, 0, -13,
    -3, -10, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -7, 0, -2, 0, -2, -9, 0, -5,
    -10, -10, -8, 0, -13, -13, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, -13,
    0, 0, -7, -11, -3, 0, -10, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -9, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -5, 0, 0, -4, -3, -17, -6,
    0, 0, -6, 0, 0, -17, -8, -15,
    0, 0, -13, -9, 0, 0, -7, -7,
    0, -16, -7, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -13, 0,
    -21, -9, -26, -8, -6, 0, 0, 0,
    0, 0, 0, 0, -3, -2, -16, -19,
    -19, -19, -17, -15, -3, -18, -18, -17,
    -19, -16, -15, -15, -20, -14, -14, -5,
    -4, -4, -2, -11, -7, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, -3, 0, -3, 0, 0,
    -13, -7, 0, 0, 0, 0, -13, 0,
    0, 0, 0, 0, 0, -13, 0, -4,
    0, 0, -11, -12, -2, 0, -3, -12,
    -2, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, -12,
    0, 0, 0, -11, 0, -10, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, -7, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, -2,
    -9, -9, -10, -2, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -11, -10, 0, 0, -9, -8,
    -3, 0, -14, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -13, 0, -13, -4, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    -8, -6, -19, -12, 0, 0, -11, 0,
    0, -18, -13, -18, 0, 0, -14, -6,
    0, -16, -4, -9, -16, 0, -16, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, 0, -8, 0, -12,
    0, -27, -14, -20, 0, -28, 0, 0,
    -16, 0, 0, 0, 0, 0, -22, -3,
    0, 0, -2, 0, 0, -24, -5, -15,
    0, 0, -16, -12, 0, -8, 0, -13,
    -5, -11, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -7, 0, -4, 0, -3, -14, 0, -7,
    -13, -14, -12, 0, -13, -13, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -13,
    0, 0, 0, -14, 0, -16, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -18, 0, -25, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    -13, -14, -16, -3, -9, -9, 0, -4,
    0, 0, -8, 0, -9, 0, 0, 0,
    0, 0, -10, -14, 0, -9, 0, -13,
    -5, -10, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -4, 0, -4, 0, -4, -14, 0, -7,
    -6, -14, -10, 0, -13, -13, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -13,
    0, 0, 0, -13, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    -13, -7, 0, -3, -8, -9, 0, -5,
    0, 0, -7, 0, -4, 0, 0, 0,
    0, 0, -12, -13, -3, 0, -3, -13,
    -3, 0, -11, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, -2, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -13, 0, 0,
    0, 0, -14, 0, 0, 0, 0, 0,
    0, -14, 0, -14, -3, 0, -13, -13,
    0, 0, -10, -2, -7, -12, -12, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, -6, -20, -16, -24, -15,
    -11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, -19, -19, -20, -20, -18,
    -9, -18, -19, -18, -19, -19, -18, -20,
    -20, -19, -15, 0, 0, 0, -8, -4,
    0, -12, -9, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, -6,
    -17, -6, -22, -6, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, -16,
    -16, -17, 0, -15, -5, -12, -16, -12,
    -17, 0, -8, -4, -5, -9, -14, -2,
    0, 0, -10, -7, -8, 0, -12, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, 0, -14, 0, -15,
    -3, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, -7, -8, -18, -10,
    0, 0, -9, 0, 0, -18, -12, -16,
    0, 0, -14, -4, 0, 0, -11, -4,
    -5, -13, -13, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -13, -8,
    -20, -16, -25, -16, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -13, -19,
    -19, -20, -15, -19, -11, -19, -19, -19,
    -20, -15, -19, -19, -20, -20, -15, 0,
    0, 0, -7, -8, -8, 0, -12, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, -11, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -4, 0, 0, -2, 0, -15, -6,
    0, 0, -4, 0, 0, -15, -7, -16,
    0, 0, -14, -6, -4, -12, -2, -12,
    -12, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -8, 0, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, -14, 0, -7, 0, 0, -12, -12,
    -5, -14, -2, -13, -13, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -14, -14, -4, 0, 0, 0, -9, 0,
    -2, 0, 0, 0, 0, -9, 0, -4,
    -8, -4, -11, -13, -6, -11, -3, -12,
    -11, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, -13, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, -6, -2, -4, -5, -2, -12, -13,
    -6, -11, -4, -13, -11, 0, -2, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -13, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, -6, -3, -5,
    -5, -2, -12, -13, 0, 0, 0, 0,
    1, -24, -7, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -27, 0,
    -13, -10, 0, -5, 0, 0, -11, 0,
    -10, 0, 0, 0, 0, 0, -12, 0,
    -4, -7, 0, -12, -9, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -13, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, -12, -4, -7, -3, -12,
    -11, 0, 0, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -13, -8, 0, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    0, -12, 0, -7, 0, 0, -12, -12,
    -4, 0, -3, -12, -7, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, -9, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, -12, -4, -9, 0, -13,
    -6, 0, -2, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, -6, 0, 0,
    -10, -11, 0, -5, 0, 0, -10, 0,
    -2, 0, 0, 0, 0, 0, -13, -13,
    -4, -12, -2, -12, -12, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, -8, 0, 0, 0, 0, -12, 0,
    0, 0, 0, 0, 0, -12, 0, -7,
    0, 0, -12, -12, -2, -12, 0, -12,
    -11, -7, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -13, -13, -10, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    -3, -10, 0, -4, -11, -5, -9, -12,
    -2, -11, 0, -12, -11, -4, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -13, -13, -6, 0, 0, 0, -6, 0,
    0, 0, 0, 0, -2, -6, 0, -2,
    -8, -3, -9, -12, -4, -10, 0, -12,
    -10, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -13, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, -12,
    -2, -11, 0, -14, -10, -15, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -14, -14, -15, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -4, -14, -3, -11, -3, -12,
    -10, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, -12, 0, 0,
    0, 0, 0, -2, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, -12, -12,
    -4, -12, -6, -13, -12, 0, -12, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -11, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -13, -13, -2, 0, 0, -13,
    -3, -12, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, -14, -12, -3,
    -8, -7, 0, -3, 0, 0, -7, 0,
    -9, 0, 0, 0, 0, 0, -12, -13,
    -4, -2, 0, -12, -5, 0, -4, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -5, 0, -2, -10, -9, 0, -7,
    0, 0, -11, 0, -2, 0, 0, 0,
    0, 0, -12, -13, -2, -3, 0, -12,
    -5, 0, -3, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, -7, 0, 0,
    -4, -3, 0, -5, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, -12, -13
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 46,
    .right_class_cnt     = 52,
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
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
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
const lv_font_t ui_font_roadstar = {
#else
lv_font_t ui_font_roadstar = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_ROADSTAR*/

