void setup() {

  //défini le ratio de données envoyés en bits/s à l'odinateur
  Serial.begin(9600);
 
}

void loop() {
  //la variable nombre prend la valeur d'un nombre random entre 70 et 90;
  int nombre = random(70,90);
  //écrit le nombre
  Serial.println(nombre);

 //pause de 4 millisecondes
  delay(4);
  

}
