void setup() {

  //défini le ratio de données envoyés en bits/s à l'odinateur
  Serial.begin(9600);
 
}

void loop() {
  long temps = millis();
  //la variable nombre prend la valeur d'un nombre random entre 70 et 90;
  int nombre = random(70,90);
  //écrit le nombre dans le tableau
  Serial.print(nombre);
  //censé écrire un ; mais change de colonne dans le teableau
  Serial.print(';');
  //écrit le temps dans le teableau
  Serial.println(temps);


 //pause de 4 millisecondes
  delay(4);
  

}

