void setup() {

  Serial.begin(9600);
 
}

void loop() {
  
  long nombre = random(70,90);
  Serial.println(nombre);

  delay(4);
  

}
