#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void parametres(int ch)
{
    FILE *f = NULL;
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
