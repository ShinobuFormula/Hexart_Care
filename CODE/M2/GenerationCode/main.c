#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"     //On impl�mente les deux biblioth�que qu'on a cr�er pour pouvoir faire appelle au fonctions menu et ecriture_code
#include "GenerationCode.h"

int main()
{
int ch;
int choice = menu(&ch); // Je r�cupere la valeur de ch retourner par la fonction menu
ecriture_code (choice); // Je fait appelle a ma fonction pour quelle utiliser la variable qui contient la valeur retourner par la fonction menu

}
