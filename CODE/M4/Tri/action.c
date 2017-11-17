#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
#include "action.h"

void Tri_croissant(Freq tabl[],int ite,int permut,int temp, int temp2 ,int i) {


    do
        {
            permut = 0;         // j'initialise la variable permut a 0//
                for (i=1;i<ite;i++)
                    {
                         if (tabl[i-1].milis>tabl[i].milis)
                        {
                            temp = tabl[i-1].milis;
                            tabl[i-1].milis=tabl[i].milis;
                            tabl[i].milis=temp;
                            temp2 = tabl[i-1].pouls;
                            tabl[i-1].pouls=tabl[i].pouls;
                             tabl[i].pouls=temp2;
                            permut=1;

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
    while(permut); //Faire tant que permut est a 1//

      for (i=0;i<ite;i++) {
    printf("ms %f - ",tabl[i].milis);
    printf("P %d |",tabl[i].pouls);
        }
}
