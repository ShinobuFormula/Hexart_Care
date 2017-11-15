#include <Arduino.h>
#include "randomnombre.h"

  int AleaNbr(int SenVal){
  SenVal = Serial.println(random(70,90));
  delay(600); 
  return SenVal; 
}


