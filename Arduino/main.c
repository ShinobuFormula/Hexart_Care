#include <stdio.h>
#include <stdlib.h>
#include "cardio.h"

int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  information();
}
