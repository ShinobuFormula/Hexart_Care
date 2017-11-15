#include <stdio.h>
#include <stdlib.h>

int main()
{
int ch;
printf("Choississez le schema que le coeur doit reproduire \n 1.Chenille 2.Clignote 1 sur 2  3.Allume 1 sur 3  4.Tout Clignote  5.Chenille Aymeric");
scanf("%d",&ch);

FILE *f = NULL;

f = fopen("../param.h", "w");

    switch(ch)
    {
    case 1 :
        fprintf(f,"#define choix 1");
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



int fclose(f);


}
