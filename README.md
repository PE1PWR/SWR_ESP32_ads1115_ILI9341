# SWR_ESP32_asd1115_ILI9341
This is a smal project for making your SWR digital.
This is a project to make your SWR measurement digital.
The principle is based on the fact that you measure which energy is radiated and which energy is radiated back.
The difference between them determines your standing wave. 
To measure everything accurately, an asd1115 16-bit ad converter was used.
This works better than the standard ports of the ESP and Nano. 
All you have to offer are the signals from the SWR bridge that you can easily build yourself.
The voltage that is used is 5v. Don't go over that. 
If you get more voltage from your SWR, use 2 resistors to lower the voltage.
