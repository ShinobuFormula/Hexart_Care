unsigned long durationH;
unsigned long durationL;
unsigned long duration;
long periode;
float frequence;
unsigned long temps;

void setup() {
Serial.begin(9600);
pinMode(0,INPUT);//definition de la borne A0 en entré
}

void loop() {
durationH = pulseIn(0,HIGH);//calcul de la durée de l'etat haut
durationL = pulseIn(0,LOW);// calcul de la durée de l'etat bas
duration = durationH + durationL;//calcul de la periode
periode = duration / 1000000;//convertion de la periode de µs en s
frequence = 1 / periode;//calculde de a fréquence
temps = millis();//calcul du temps en milliseconde
Serial.print(frequence );//afficher la fréquence
Serial.println(temps);//afficher le temps
}

