#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_MAX 1000 //taille maximum d'une ligne

FILE* fichier = NULL;
char tab[TAILLE_MAX] = ""; //initialisation du tableau

 int main(char *tableauDatesRetour){

    //Ouverture du du fichier HeuresTests.txt
    fichier = fopen("Battements.csv", "r");
    if (fichier != NULL){
        //Lecture de toute les lignes jusqu'à la fin de fichier
        while (fgets(tab, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            printf("%s",tab ); // On affiche la chaîne qu'on vient de lire
        }
    }else{// Vérifier si le fichier a bien été ouvert. Sinon, envoyer une erreur et sortir du programme
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    //Fermer le fichier
    fclose(fichier);
    return 0;
}
