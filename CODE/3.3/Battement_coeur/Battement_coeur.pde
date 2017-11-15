//From Arduino to Processing to Txt or cvs etc.
//import le process serial
import processing.serial.*;

//declare
PrintWriter output;

//variable
Serial udSerial;

void setup() {
  
  //la vaiable udSerial prends la valeur 
  udSerial = new Serial(this, Serial.list()[0], 9600);
  output = createWriter ("Battements.csv");
}
 void draw() {
  if (udSerial.available() > 0) {
    String SenVal = udSerial.readString();
    if (SenVal != null) {
      //
      output.print(SenVal);
      //affiche dans la console les battements
      System.out.print(SenVal);
     }
   }
 }
 void keyPressed(){
  output.flush();
  output.close();
  exit();
 }