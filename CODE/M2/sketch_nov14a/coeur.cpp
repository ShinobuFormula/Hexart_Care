#include <Arduino.h> //Implémentation de la bibliothèque Arduino pour pouvoir utiliser les fonctions de base Arduino
#include "coeur.h"

void Chenille(int i) //Déclaration de la fonction chenille 
{
  while(1) //boucle
  {
    for (i = 2; i <12; i++) //Creer une boucle qui se fait 10 fois pour les 10 LED
        {
          pinMode(i,OUTPUT); //Initialisation de la patte sur laquelle est branché LED 
          digitalWrite(i,HIGH); //On met cet patte a l'état haut (on lui envoie du courant)
          delay(1000); //Delais de 1 seconde
          digitalWrite(i,LOW); //On met cet patte a l'état bas (plus de courant)
        }
        
      
  } 
}
void Chenille_1sur2(int i) //Déclaration de la fonction chenille 1 sur 2
{
  while(1)
  {

  for (i = 2; i <12; i++) 
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
        i++;  //On incrémente i encore une fois dans la boucle comme ça 1 led sur 2 s'allume
      }
      delay(500);
      for (i = 2; i <12; i++)
      {
        
        digitalWrite(i,LOW);
       i++;
       
      }
      delay(500);

  }
}

void Chenille_1sur3(int i)
{
  while(1)
  { 

  for (i = 2; i <12; i++)
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
       i++; //On incrémente i encore deux fois dans la boucle comme ça 1 led sur 3 s'allume
       i++;
      }
      delay(500);
      for (i = 2; i <12; i++)
      {
        
        digitalWrite(i,LOW);
       i++;
       i++;
      } 
  }
  
}

void Chenille_tout(int i)
{
   while(1)
  { 
     for (i = 2; i <12; i++) //Dans cet boucle on met d'abord toutes les LEDs a l'état haut puis avec un delais de 0.5 seconde on les fait toutes passer a l'état bas et ainsi de suite
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay (500);
      for (i = 2; i <12; i++)
      {
        
        digitalWrite(i,LOW);
       
      }
       delay(500);
  }
}
void Chenille_Ay(int i){ //le Rajout de cet fonction etait notre idée (et est optionel)

  while(1)
  { 
     for (i = 2; i <12; i++) //On allume toute les LEDs une par une 
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
        delay(100);
      }
      for (i = 2; i <12; i++) //On éteint toutes les LEDs une par une
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
        delay(100);
      }
  }
  
}



