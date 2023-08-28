# Competition BLE
## Introduction
This project makes your legacy home computer joystick wireless using standard Bluetooth Low Energy (BLE) technology. It is based on a small radio board denoted [nRF52840 Feather](https://learn.adafruit.com/introducing-the-adafruit-nrf52840-feather/overview) designed by Adafruit.
This board comes with a certified radio module from Raytac, [MDBT50Q](https://www.raytac.com/product/ins.php?index_id=24), based on the [nRF52840](https://www.nordicsemi.com/Products/nRF52840) Wireless MCU by Nordic Semiconductor.
The board also incorporates a LiPo charging circuit from Microchip, [MCP73831/2](https://www.microchip.com/en-us/product/mcp73831). The battery can be charged via a USB Micro-B connector. Note that the battery must be chosen with care. The regulated output voltage of the charge controller is 4.20V.

The firmware is built upon the nRF5 SDK by Nordic. The device uses the Human Interface Device (HID) service adopted by the Bluetooth SIG from the USB [Human Interface Device class](https://www.usb.org/document-library/device-class-definition-hid-111). That said, all operating systems supporting USB HID game controllers should work with this device out of the box.
Likewise, all emulators should work. The device has been tested with [VICE](https://vice-emu.sourceforge.io) and [FS-UAE](https://fs-uae.net) on Manjaro.

## Issues and resolutions
* Even though the joystick worked flawlessly within the OS'es own graphical Joystick setup tool, FS-UAE wouldn't show it. Had to tweak the HID report descriptor a bit. Most likely caused by the SDL wrapper.

## Resources
https://learn.adafruit.com/introducing-the-adafruit-nrf52840-feather/downloads
