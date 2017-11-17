void calcul_freq() {
unsigned long durationH;
unsigned long durationL;
unsigned long duration;
long periode;
float frequence;

durationH = pulseIn(0,HIGH); //calcule de l'etat haut
durationL = pulseIn(0,LOW); //calcule de l'état bas
duration = durationH + durationL; //calcule de  la periode
periode = duration / 1000000; //conversion de la periode de µs en s
frequence = 1 / periode; // calculde de la fréquence

Serial.print(frequence );//afficher la fréquence
}

void compte_temps(){
  unsigned long temps;
  temps = millis();//calcule du temps en milliseconde
  Serial.println(temps); //affichage du temps 
  }

