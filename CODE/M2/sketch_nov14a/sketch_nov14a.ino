#include "coeur.h" //Implémentation des bibliothèque créer
#include "param.h"

void setup()
{
  int i; //Déclaration de la variable i utiliser dans toutes nos fonctions

 switch (choix) //Vérification de la valeur de notre macro écrite dans param.h par notre programme en C
 { 
  case 1 : //Si l'utilisateur a entré 1 lorsque qu'on téléverseras le mode chenille seras activé
    Chenille(i);
    break;
    
  case 2 :
    Chenille_1sur2(i);
    break;

  case 3 :
    Chenille_1sur3(i);
    break;

  case 4 :
    Chenille_tout(i);
    break;

  case 5 :
    Chenille_Ay(i);
    break;
 }
}
void loop()
{
  
}


