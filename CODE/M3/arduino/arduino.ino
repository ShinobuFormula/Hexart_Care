void setup() {

  //défini le ratio de données envoyés en bits/s à l'odinateur
  Serial.begin(9600);
 
}

void loop() {
  //millis() : retourne le nombre en millisecondes depuis le lancement du programme
  //la variable temps prends la valeur de millis()
  //long car sinon dépassement de données au bou d'un certain temps.
  long temps = millis();

  //temps en secondes avec virgules
  //float mil = millis();
//  float temps = mil / 1000;

  //la variable nombre prend la valeur d'un nombre random entre 70 et 90;
  int nombre = random(70,90);
  //écrit le nombre dans le tableau
  Serial.println(nombre);
  //censé écrire un ; mais change de colonne dans le teableau
 // Serial.println(';');
  //écrit le temps dans le teableau
  Serial.println(temps);


 //pause de 4 millisecondes
  delay(4);
  

}

