void setup() {
int i;
i = 2;
/*
while(1){
for (i = 2; i <12; i++)
    {
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);
      delay(100);
      digitalWrite(i,LOW);
    }
    
  }
} */
 /*                          
while(1){ 

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
}} */

                
while(1){

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



void loop() {


}
