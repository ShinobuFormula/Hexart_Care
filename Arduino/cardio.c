#include <stdio.h>
#include <stdlib.h>
#include "cardio.h"

void information(int valeurActuelle, int valeurSeuil, long tempsDetection)
{
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

  valeurPrecedente = valeurActuelle;
}