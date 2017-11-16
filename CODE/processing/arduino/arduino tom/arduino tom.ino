void setup() {

  Serial.begin(9600);
 
}

void loop() {
  
  long temps = millis();
  long nombre = random(70,90);
  Serial.println(nombre);
  Serial.println(";");
  Serial.println(temps);
  delay(4);
  

}


