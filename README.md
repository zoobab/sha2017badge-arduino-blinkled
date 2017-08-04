How to blink a LED on SHA2017 badge with Arduino IDE
====================================================

Blink a LED for the SHA2017 badge.

Arduino IDE supports ESP32 modules. Just pick the default "ESP32 Dev module"
for now. Adding proper support for the badge would be great as well.

![esp32 arduino ide](https://raw.githubusercontent.com/zoobab/sha2017badge-arduino-blinkled/master/sha2017badge-arduinoide-screenshot.jpg)

Code
====

Just load "sha2017-badge-blink.ino" in your arduino ide.

Wiring
======

LED is connected to the X2 2x6 connector "Port Expander", to top right PIN1
(GND) and to PIN5 (EXTIO-2, which is connected to IO17 on the ESP32).

The pinout of the connector "Port Expander" is here:
https://github.com/SHA2017-badge/PCB/blob/master/sha2017_rev0_1_0_dev_schematic.pdf

Picture
=======

![SHA2017 blink led](https://raw.githubusercontent.com/zoobab/sha2017badge-arduino-blinkled/master/sha2017badge-arduino-blink.jpg)
