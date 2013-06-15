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

#include "RGBLED.h"

RGBLED::RGBLED() {
  redValue = greenValue = blueValue = 0;
}

RGBLED::~RGBLED() {
  setColorRGB(0, 0, 0);
}

void RGBLED::initialize(byte rp, byte gp, byte bp) {
  redPin = rp;
  greenPin = gp;
  bluePin = bp;
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}


void RGBLED::setColorRGB(byte red, byte green, byte blue) {
  redValue = red;
  greenValue = green;
  blueValue = blue;
 
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
