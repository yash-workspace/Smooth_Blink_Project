#include <Arduino.h>

// put function declarations here:
const int ledpin = 9; 

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 1. Fade up from 0 to 255
  for (int brightness = 0 ; brightness <=255; brightness++)
  {
    analogWrite(ledpin,brightness);
    delay(10);
  }
  
  // 2. Fade down from 255 to 0
  for (int brightness =255; brightness >=0; brightness--)
  {
    analogWrite(ledpin,brightness);
    delay(10);
  }


}

