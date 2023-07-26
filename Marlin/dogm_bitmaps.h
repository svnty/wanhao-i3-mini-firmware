/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Standard Marlin Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 *
 * Please note that using the high-res version takes 402Bytes of PROGMEM.
 */

#define START_BMPHIGH

#if ENABLED(SHOW_BOOTSCREEN)
  #if ENABLED(START_BMPHIGH)
    #define START_BMPWIDTH      128 //LOG图像的像素宽
    #define START_BMPHEIGHT      64 //LOG图像的像素高
    #define START_BMPBYTEWIDTH   16 //像素宽所占字节数=（112+7）/8取整数
    #define START_BMPBYTES      1024 //LOG图像点阵数据所占字节数=像素宽所占字节数*像素高=14*38

    const unsigned char start_bmp[START_BMPBYTES] PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x00,0x7F,0xBC,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xBF,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0x7F,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xEF,0xFF,0xFF,0x7F,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xEF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xEF,0xFF,0xFF,0xFF,0xE0,0x30,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x37,0xFF,0xFF,0xFF,0xFF,0x7F,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x17,0xF7,0xFF,0xEF,0xFF,0xFF,0x7F,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1F,0xF7,0xFF,0xEF,0xFF,0xFF,0x7F,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0xF7,0xFF,0xFF,0xFF,0xFF,0xBF,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0xF7,0xFF,0xF7,0xFF,0xFF,0xBF,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF7,0xFF,0xFF,0xBF,0xFC,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0xFB,0xFF,0xF7,0xFF,0xFF,0xBF,0xFC,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x8F,0xFD,0xFF,0xFB,0xFF,0xFF,0xDF,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFC,0xFF,0xFB,0xFF,0xFF,0xBF,0xF6,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x7F,0xFE,0xFF,0xFB,0xFF,0xFF,0x1F,0xEF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x06,0x7F,0xFF,0x25,0xFB,0xFF,0xFC,0xEF,0xDF,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0xFF,0xFF,0x3E,0x70,0xFF,0xF0,0xF3,0xDF,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0xFF,0xFC,0x3F,0x80,0x0F,0x80,0x7D,0xBF,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xFF,0xF8,0x1F,0xD8,0x00,0x00,0xFF,0xBF,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xFF,0xE0,0x0F,0xDF,0x00,0x01,0xFF,0x1F,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7F,0xC0,0x0F,0xFF,0x80,0x03,0xFE,0x1F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3F,0x80,0x0F,0xBF,0x80,0x03,0xF8,0x3F,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3F,0x00,0x0F,0x9F,0xC0,0x07,0xC0,0x3E,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1C,0x00,0x1F,0x00,0xC0,0x0F,0xC0,0x7E,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x8C,0x70,0xE0,0xE0,0xCC,0x1C,0x18,0x07,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x9C,0x70,0xF0,0xF1,0xCE,0x1C,0x3C,0x0F,0xE0,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x9C,0x71,0xF0,0xF1,0xCE,0x1C,0x3C,0x1F,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x9C,0x71,0xF0,0xF9,0xCE,0x1C,0x7E,0x3C,0x78,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x9C,0x71,0xF8,0xFD,0xCF,0xFC,0x7E,0x38,0x38,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x9E,0xE3,0xB8,0xFF,0xCF,0xFC,0x67,0x38,0x18,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xDE,0xE3,0xB8,0xEF,0xCF,0xFC,0xE7,0x38,0x38,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xFF,0xC3,0xFC,0xE7,0xCE,0x1C,0xFF,0x3C,0x38,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF7,0xC7,0xFC,0xE3,0xCE,0x1C,0xFF,0x9F,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF3,0x87,0x1E,0xE3,0xCE,0x1D,0xE3,0x8F,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x73,0x87,0x0E,0xE1,0xCE,0x1D,0xC3,0xC7,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,};
  #else
    #define START_BMPWIDTH      56
    #define START_BMPHEIGHT     19
    #define START_BMPBYTEWIDTH  7
    #define START_BMPBYTES      133 // START_BMPWIDTH * START_BMPHEIGHT / 8

    const unsigned char start_bmp[START_BMPBYTES] PROGMEM = {
      0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
      0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
      0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
      0x83, 0xCF, 0x00, 0x00, 0x0C, 0x30, 0x3F,
      0x87, 0xFF, 0x80, 0x00, 0x0C, 0x30, 0x1F,
      0x86, 0x79, 0x80, 0x00, 0x0C, 0x00, 0x0F,
      0x8C, 0x30, 0xC7, 0x83, 0x8C, 0x30, 0xE7,
      0x8C, 0x30, 0xCF, 0xC7, 0xCC, 0x31, 0xF3,
      0x8C, 0x30, 0xDC, 0xEC, 0xEC, 0x33, 0xB9,
      0x8C, 0x30, 0xD8, 0x6C, 0x6C, 0x33, 0x19,
      0x8C, 0x30, 0xD0, 0x6C, 0x0C, 0x33, 0x19,
      0x8C, 0x30, 0xD8, 0x6C, 0x0C, 0x33, 0x19,
      0x8C, 0x30, 0xDC, 0x6C, 0x0E, 0x3B, 0x19,
      0x8C, 0x30, 0xCF, 0x7C, 0x07, 0x9F, 0x19,
      0x8C, 0x30, 0xC7, 0x7C, 0x03, 0x8F, 0x19,
      0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
      0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
      0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8 };
  #endif
#endif

// Here comes a compile-time operation to match the extruder symbols
// on the info screen to the set number of extruders in configuration.h
//
// When only one extruder is selected, the "1" on the symbol will not
// be displayed.
#if CLIENT_VAR==WANHAO_ONEPLUS_201707VAR //当前只支持一个喷头显示，因为当前客户就一个喷头
	#define STATUS_SCREENWIDTH      10 //Width in pixels
	#define STATUS_SCREENHEIGHT     12 //Height in pixels
	#define STATUS_SCREENBYTEWIDTH  2 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
			0x7F, 0x80,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0x7F, 0x80,
			0x7F, 0x80,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0x3F, 0x00,
			0x1E, 0x00,
			0x0C, 0x00,
		};

	#define STATUS_SCREENWIDTH		10 //Width in pixels
	#define STATUS_SCREENHEIGHT     12 //Height in pixels
	#define STATUS_SCREENBYTEWIDTH  2 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
			0x7F, 0x80,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0x7F, 0x80,
			0x7F, 0x80,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0xFF, 0xC0,
			0x3F, 0x00,
			0x1E, 0x00,
			0x0C, 0x00,
		};
#else
	#if HAS_TEMP_BED
	  #if HOTENDS == 1
		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
		  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
		};

		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
		  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
		};
	  #elif HOTENDS == 2
		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
		};

		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
		};
	  #else
		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x40, 0x60, 0x20,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x07, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x01, 0x04, 0x10, 0x00, 0x5F, 0x0F, 0xA0,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x01, 0x04, 0x10, 0x00, 0x4F, 0x0F, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x82, 0x08, 0x00, 0x47, 0x0E, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x63, 0x0C, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
		};

		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x5C, 0x63, 0xA0,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x82, 0x08, 0x00, 0x58, 0x01, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x01, 0x04, 0x10, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x01, 0x04, 0x10, 0x00, 0x40, 0xF0, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x82, 0x08, 0x00, 0x41, 0xF8, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00
		};
	  #endif // Extruders
	#else
	  #if HOTENDS == 1
		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
	  #elif HOTENDS == 2
		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
	  #else
		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0x07, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x0F, 0xA0,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x0F, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x47, 0x0E, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x63, 0x0C, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

		#define STATUS_SCREENWIDTH     115 //Width in pixels
		#define STATUS_SCREENHEIGHT     19 //Height in pixels
		#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
		const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
		  0xFB, 0xC0, 0x00, 0x79, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
		  0xF3, 0xC0, 0x00, 0x76, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5E, 0xF7, 0xA0,
		  0xEB, 0xC0, 0x00, 0x7E, 0xE0, 0x00, 0x7E, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x63, 0xA0,
		  0x7B, 0x80, 0x00, 0x3D, 0xC0, 0x00, 0x39, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x58, 0x01, 0xA0,
		  0x7B, 0x80, 0x00, 0x3B, 0xC0, 0x00, 0x3E, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x20,
		  0xFB, 0xC0, 0x00, 0x77, 0xE0, 0x00, 0x76, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x20,
		  0xFB, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF8, 0x20,
		  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
		  0x3F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0,
		  0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
		  0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
	  #endif // Extruders
	#endif // HAS_TEMP_BED
#endif
