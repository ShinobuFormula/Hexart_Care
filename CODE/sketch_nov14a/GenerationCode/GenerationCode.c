#include "GenerationCode.h"
#include <stdio.h>
#include <stdlib.h>
void ecriture_code (ch) {

FILE *f = NULL; //Creer une variable de type FILE

f = fopen("../param.h", "w"); //J'ouvre le stream avec le chemin dans laquelle je veut cr�er mon fichier param.h

 switch(ch)      //Je v�rifie quelle mode d'allumage l'utilisateur a s�lectionner
    {
    case 1 :
        fprintf(f,"#define choix 1"); //J'�cris dans param.h une Macro qui servira a s�lectionner un mode d'allumage dans mon code Arduino
        break;

        case 2 :
        fprintf(f,"#define choix 2");
        break;

        case 3 :
        fprintf(f,"#define choix 3");
        break;

        case 4 :
        fprintf(f,"#define choix 4");
        break;

        case 5 :
        fprintf(f,"#define choix 5");
        break;
    }

fclose(f); //Fermeture du stream
}
