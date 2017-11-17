#include"cal_freq.h";

void setup(){
Serial.begin(9600);
pinMode(0,INPUT);

calcul_freq();
compte_temps();
 }

void loop(){

}
  
