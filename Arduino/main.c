#include <stdio.h>
#include <stdlib.h>

int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup() {
  Serial.begin(9600);
}


void loop() {

  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) {  // on est dans la zone max
    if (valeurPrecedente <= valeurSeuil) {  // est-ce qu'on vient d'y entrer?
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200)){  // ce n'est pas seulement du bruit?
        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  Serial.println(analogRead(0))
  valeurPrecedente = valeurActuelle;

}