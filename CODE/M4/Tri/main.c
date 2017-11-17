#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

   typedef struct{ //Création de ma structure comportant le pouls et le temps en miliseconde
    float milis;
    int pouls;
} Freq ;

Freq tabl[10] = { {478.0,100},{410.0,500},{125.0,780},{564.0,210},{640.0,102},{951.0,142} }; //Je crées mon tableau comportant un temps et son pouls associé

int ite = 6;

int permut,temp,i,temp2;



//Freq tabl[10];
//FILE* fichier = NULL;
//int i = 0;
//
//fichier = fopen("Battements.csv", "r");
//
////    if (fichier != NULL)
//        {
//           do
//            {
//
//                tabl[i].pouls = fgetc(fichier);
//                i++;
//                tabl[i].milis = fgetc(fichier);
//                i++;
//                } while (i < 200);
//        }
//
//fclose(fichier);
//printf("%f",tabl[1].milis);




  do
        {
            permut = 0;         //Flag permut état 0
                for (i=1;i<ite;i++) // se fait le nombre de fois qu'il ya de couple temps pouls dans mon tableau
                    {
                         if (tabl[i-1].milis>tabl[i].milis) //Si temps actuelle plus petit que temps précedent
                        {
                            temp = tabl[i-1].milis; //Mémorise temps précedent
                            tabl[i-1].milis=tabl[i].milis; //Temps précedent devient temps actuelle
                            tabl[i].milis=temp; // Temps actuelle devient temps précedent
                            temp2 = tabl[i-1].pouls; //On fait pareil avec le pouls pour que quand on affiche le pouls il soit toujours afficher a le pouls correspondant
                            tabl[i-1].pouls=tabl[i].pouls;
                             tabl[i].pouls=temp2;
                            permut=1; //Flag a 1

//                        if (tabl[i-1].pouls>tabl[i].pouls)
//                        {
//                            temp = tabl[i-1].pouls;
//                            tabl[i-1].pouls=tabl[i].pouls;
//                            tabl[i].pouls=temp;
//                            temp2 = tabl[i-1].milis;
//                            tabl[i-1].milis=tabl[i].milis;
//                            tabl[i].milis=temp2;
//                            permut=1;
//                        }
                    }
    }
        }
    while(permut); //Faire tant que permut est a 1

      for (i=0;i<ite;i++) {
    printf("ms %f - ",tabl[i].milis); //Afficher le temps filtrer par l'algo
    printf("P %d |",tabl[i].pouls); //Afficher le pouls filtrer par l'algo
      }
        }







