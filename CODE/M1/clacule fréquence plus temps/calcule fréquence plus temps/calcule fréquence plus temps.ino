unsigned long durationH;
unsigned long durationL;
unsigned long duration;
long periode;
float frequence;
unsigned long temps;

void setup() {
Serial.begin(9600);
pinMode(0,INPUT);
}

void loop() {
durationH = pulseIn(0,HIGH);
durationL = pulseIn(0,LOW);
duration = durationH + durationL;
periode = duration / 1000000;
frequence = 1 / periode;
temps = millis();
Serial.print(frequence );
Serial.println(temps);
}
