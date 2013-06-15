/*
 * RGBLED example
 */
 
#include "RGBLED.h"
 
RGBLED led;

void setup() {                
  // Set up RGBLED with the following pinout:
  // pin 3 = red 
  // pin 5 = green
  // pin 6 = blue
  led.initialize(3, 5, 6); 
}


void loop() {

  // Trying out a couple of different colors: 
  led.setColorRGB(255, 0, 0);
  delay(500);         

  led.setColorRGB(0, 255, 0);
  delay(500);
  
  led.setColorRGB(0, 0, 255);
  delay(500);           
  
  led.setColorRGB(255, 255, 0);
  delay(500);  
  
  led.setColorRGB(0, 255, 255);
  delay(500);  
  
  led.setColorRGB(255, 0, 255);
  delay(500);
  
  led.setColorRGB(110, 0, 128);
  delay(500);  
  
}
