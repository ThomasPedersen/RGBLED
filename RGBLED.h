/*
    RGBLED control library for Arduino
    
    Copyright (C) 2013  Thomas W. Pedersen <truetyr/at/gmail/dot/com>
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
 
#ifndef RGBLED_H
#define RGBLED_H

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class RGBLED {
  
  private:
    byte redValue;
    byte greenValue;
    byte blueValue;
  
    byte redPin;
    byte greenPin;
    byte bluePin;

  public:
    RGBLED();
    ~RGBLED();
    void initialize(byte redPin, byte greenPin, byte bluePin);
    void setColorRGB(byte red, byte green, byte blue);
};

#endif
