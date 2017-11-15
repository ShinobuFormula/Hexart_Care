#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    printf("Choississez le schema que le coeur doit reproduire \n 1.Chenille 2.Clignote 1 sur 2  3.Allume 1 sur 3  4.Tout Clignote  5.Chenille Aymeric");
    scanf("%d",&ch);
    creation_fichier();
    parametres(ch);

}
