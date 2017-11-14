#include <Arduino.h>
#include "coeur.h"

void Chenille(int i)
{
  while(1)
  {
    for (i = 2; i <12; i++)
        {
          pinMode(i,OUTPUT);
          digitalWrite(i,HIGH);
          delay(100);
          digitalWrite(i,LOW);
        }
        
      
  } 
}
void Chenille_1sur2(int i)
{
  while(1)
  {

  for (i = 2; i <12; i++)
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
       i++;
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
       i++;
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
     for (i = 2; i <12; i++)
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



