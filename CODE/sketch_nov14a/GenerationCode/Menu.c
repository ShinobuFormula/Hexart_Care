#include "Menu.h"
#include <stdio.h>
#include <stdlib.h>
int menu (int *ch) {   //D�claration de ma fonction menu qui r�cup�re la variable "ch" et la retourne avec la valeur s�lectionner par l'utilisateur

printf("Choississez le schema que le coeur doit reproduire \n 1.Chenille 2.Clignote 1 sur 2  3.Allume 1 sur 3  4.Tout Clignote  5.Chenille Aymeric");
scanf("%d",&ch);
return ch;
}
