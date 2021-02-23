# SWR_ESP32_ads1115_ILI9341
he script was written for a TFT 3.2 320 X 240 screen. If you are going to use a smaller screen, the image will not be automatically adjusted. It is intended that this is possible in the new version.

There are plans to use the ESP32 to control the SWR and protect the output stage. 100 watts is the maximum power for this SWR version. A higher power is possible if you adjust the calculation and set the scale X100. Also make sure that the input voltage at the ADS1115 does not exceed 5 volts. In that situation, use 2 resistors to divide the voltage.

The touch will be used to adjust the scale true a setup menu for more than 100 watts. The reason that an ADS1115 (16 bits) was used as an AD converter is because the ESP32 AD converter had too small a range that is linear. 800 to 2200 mv (12 bits). Up to 150mv and after 2200mv it is done with linearity. It also emerged that the AD of the ESP32 is very unstable. An extra capacitor used to separate HF from the DC voltage did not work. That ADS1115 is stable is shown by the fact that no capacitor is placed at the input. They ADS1115 is quite linear over a wide range. This is what you see in the value of calculations and the effect on the display. It is very stable.

The formula used for the SWR calculation VSWR = 1+ (Pref / Pfwd) / 1− (Pref / Pfwd) In the programming you can adjust the scale yourself and calibrate it if necessary.

Note the design has been tested with USB 5 volts. In practice this will be around 4.5V. If you want to use a battery of 3.7 volts, put in a converter to 5 volts. If the values expire after using a 5v module, you can adjust them yourself in the code. Will perform a test itself to check progress. If this is the case, I will enter 2 codes one for USB 5v and one for a battery with 5 volt module. And now there is allready another version with protecion relay. Its V12 version. More info see script.

The ESP version V12 has now been expanded with additional security.
As soon as the SWR rises above 1: 3, a relay will ensure that the linear is turned off.
It is then only possible to unlock the protection when the SWR drops below 1: 3 again.
A red LED will signal that the security has come in and that the SWR is not good
