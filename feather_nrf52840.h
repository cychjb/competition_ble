/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _FEATHER_NRF52840_H
#define _FEATHER_NRF52840_H

#include "nrf_gpio.h"

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           3
#define LED_RED               NRF_GPIO_PIN_MAP(1, 15)
#define LED_BLUE              NRF_GPIO_PIN_MAP(1, 10)
// #define LED_STATE_ON          1
#define LEDS_ACTIVE_STATE     1

#define LED_NEOPIXEL          NRF_GPIO_PIN_MAP(0, 16)
#define NEOPIXELS_NUMBER      1
#define BOARD_RGB_BRIGHTNESS  0x040404

#define LEDS_LIST { LED_RED, LED_BLUE, LED_NEOPIXEL}

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        6
#define BSP_BUTTON_0          NRF_GPIO_PIN_MAP(1, 02)
#define BSP_BUTTON_UP         NRF_GPIO_PIN_MAP(0, 30)
#define BSP_BUTTON_DOWN       NRF_GPIO_PIN_MAP(0, 28)
#define BSP_BUTTON_LEFT       NRF_GPIO_PIN_MAP(0, 02)
#define BSP_BUTTON_RIGHT      NRF_GPIO_PIN_MAP(0, 03)
#define BSP_BUTTON_FIRE1      NRF_GPIO_PIN_MAP(0, 04)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE  0

#define BUTTONS_LIST { BSP_BUTTON_0, \
                       BSP_BUTTON_UP, \
                       BSP_BUTTON_DOWN, \
                       BSP_BUTTON_LEFT, \
                       BSP_BUTTON_RIGHT, \
                       BSP_BUTTON_FIRE1, \
                     }


//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "Adafruit Industries"
#define BLEDIS_MODEL          "Feather nRF52840 Express"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x002A

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "Adafruit Feather nRF52840 Express"
#define UF2_VOLUME_LABEL      "FTHR840BOOT"
#define UF2_BOARD_ID          "nRF52840-Feather-revD"
#define UF2_INDEX_URL         "https://www.adafruit.com/product/4062"

#endif // _FEATHER_NRF52840_H
