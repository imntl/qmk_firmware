/* Copyright 2021 Oliver Granlund and Maximilian Jalea
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1337 // "Maximilian Jalea"
#define PRODUCT_ID      0xB44C // "Neito"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Maximilian Jalea
#define PRODUCT         Neito Handwire

#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define MATRIX_ROW_PINS { B7, D5, C7, F1, F0}
#define MATRIX_COL_PINS { D4, C6, D7, C6, B4, B5, F4, F5, F6, F7, B1, B3, B2, B6}

#define DIODE_DIRECTION COL2ROW
/*#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { B0 }
#define ENCODER_RESOLUTION 4*/
#define UNUSED_PINS

//#define LED_CAPS_LOCK_PIN B6
#define BACKLIGHT_ON_STATE  0

//#define BACKLIGHT_PIN B5
//#define BACKLIGHT_LEVELS 5

#define GRAVE_ESC_CTRL_OVERRIDE

/* RGB Light Configuration */
/*
#define RGB_DI_PIN D5
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 11
#define RGBLIGHT_LED_MAP { 4, 3, 2, 1, 0, 10, 9, 8, 7, 6, 5 }
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 200*/
