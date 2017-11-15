#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#include "menu.h"

int creation_fichier(int ch)
{
    printf("TEST");
    FILE *f = NULL;
	f = fopen("../param.h", "w");
    switch(ch)
	{
	case 1 :

		fprintf(f,"#define choix 1");
		printf("OUI");
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
	fclose(f);
	return ch;
}
