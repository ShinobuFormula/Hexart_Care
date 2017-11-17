//From Arduino to Processing to Txt or cvs etc.
//import le process serial
import processing.serial.*;

//permet d'afficher un texte en dehors du fichier de base (dans battement.csv)
PrintWriter output;

//variable
Serial udSerial;

void setup() {
  
  //ouvre le port que l'on utilise à un débit de 9.6 secondes
  udSerial = new Serial(this, Serial.list()[0], 9600);
  //créé un document "battements.csv"
  output = createWriter ("Battements.csv");
}
 void draw() {
   //si la variable udSerial est disponible et qu'elle est supérieur à 0
  if (udSerial.available() > 0) {
    //retourne toutes les données de SenVal en string
    String SenVal = udSerial.readString();
    if (SenVal != null) {
      //print dans le doc battements les valeurs
      output.print(SenVal);
      //affiche dans la console les battements
      System.out.print(SenVal);
     }
   }
 }
 void keyPressed(){
  //assure que toutes les données restantes sont écrites dans le fichier avant sa fermeture.
  output.flush();
  //ferme le fichier
  output.close();
  //arrete le programme
  exit();
 }