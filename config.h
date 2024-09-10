/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

//#pragma once

//#define SERIAL_USART_TX_PIN GP1
//#define SERIAL_USART_RX_PIN GP0
//#define MASTER_LEFT
//#define RP2040_FLASH_GD25Q64CS //??
//#define SPLIT_USB_DETECT
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

//#define SERIAL_PIO_USE_PIO0
//#define USE_SERIAL
//#define SOFT_SERIAL_PIN GP1

#pragma once

// Serial communication
#define SERIAL_USART_TX_PIN GP1
#define SERIAL_USART_RX_PIN GP0

// Split keyboard configuration
//#define MASTER_LEFT
#define SPLIT_USB_DETECT

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    ifndef RGBLIGHT_LIMIT_VAL
#    	define RGBLIGHT_LIMIT_VAL 150
#    endif
#endif

// RP2040 specific configuration
#define RP2040_FLASH_GD25Q64CS
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

// Debug options
#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_MATRIX
#define DEBUG_SPLIT_HANDEDNESS

// Additional split keyboard settings
//#define SOFT_SERIAL_PIN D1
#define SELECT_SOFT_SERIAL_SPEED 1
