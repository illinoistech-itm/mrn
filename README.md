# mrn
Project Mobile Radio Network
Arduino(R) Version 1.6.13 12/2/2016

MATERIALS
---------------------
-Arduino Uno
-XBee Pro S2B 802.15.4 (4) 
-Bread board (4)
-Solar Panels
-Campacitor/Transformer
-TMP 36 Temperature Sensor(3)
-Jumper Wires

---------------------

GENERAL USAGE NOTES
---------------------
-Configure the main XBee as Cordinator API //  
-Configure one XBEE as Router API //
-Configure the last two XBEE to Router AT //
        // Ensure Channel Verification is enabled 
        // Set AD1/DIO0 Config to 2-ADC
-Place the Cordinator on the breadbord and wire it to the Arduino
   --Use 3.3V
   --Conect IO1 to 0 and IO2 to 1
-The Three Router are to be sodered onto the three separate bread boards
   --The TMP sensor, looking at the flat end, the left goes to power, 
     the right end goes to ground and the middle connects to IO0
   --soder one wire to ground and one wire to power
       ---conect cables to their resected places with the battery
---------------------

**** Also requires the Adafruit_GFX library for Arduino. ****
Download it from here:
	https://github.com/adafruit/Adafruit-GFX-Library

-Video Demostration
----------------------
https://www.youtube.com/watch?v=krbNBtYlkC0&t=1s
