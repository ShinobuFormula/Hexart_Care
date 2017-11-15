#include "coeur.h"
#include "param.h"

void setup()
{
  int i;
 // i = 2;

 switch (choix)
 { 
  case 1 :
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


