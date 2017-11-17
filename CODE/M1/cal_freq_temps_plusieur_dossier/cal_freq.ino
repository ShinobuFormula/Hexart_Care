void calcul_freq() {
unsigned long durationH;
unsigned long durationL;
unsigned long duration;
long periode;
float frequence;

durationH = pulseIn(0,HIGH);
durationL = pulseIn(0,LOW);
duration = durationH + durationL;
periode = duration / 1000000;
frequence = 1 / periode;

Serial.print(frequence );
}

void compte_temps(){
  unsigned long temps;
  temps = millis();
  Serial.println(temps);
  }

