#include <stdio.h>
#include <stdlib.h>

   typedef struct{
    float milis;
    int pouls;
} Freq ;

Freq tabl[10] = { {478.0,100},{410.0,500},{125.0,780},{564.0,210},{640.0,102},{951.0,142} };

int ite = 6;

int permut,temp,i,temp2;
