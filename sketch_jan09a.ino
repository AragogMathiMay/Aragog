//Code de marche d'une patte.
#include <Servo.h>;
#include <SoftwareSerial.h>
#define RX 4
#define TX 5
SoftwareSerial SSC(RX,TX);

void setup() {
  Serial.begin(9600);
  delay(10);
  SSC.begin(9600);
  Serial.println("Bonjour, prêt pour les commandes AT");
  delay(200);

}

void loop() {
  // tester le servo horizontal pour déterminer son étalon en microsecondes
  // tester le servo vertical ""   ""    ""    ""   
  /*SSC.println("#6 P2500 #10 P2000");
  delay(500);
  SSC.println("#6 P2000");
  delay(500);
  SSC.println("#11 P2000 #7 P2500");
  delay(500);
  SSC.println("#7 P2000");
  delay(500);
  SSC.println("#11 P900");
  delay(500);*/
  /*SSC.println("#10 P2400");
  delay(2000);*/
  /*SSC.println("#11 P2000 ");
  Serial.println("1600");
  delay(2000);*/
 
  SSC.println("#7 P2400 T1000 #11 P1250 T1000"); // cette commande a pour but de faire lever le haut de la pate, et en même temps faire avancer le bas
  delay(1000);//pendant ce temps le servo du haut doit faire se rétracter légerement la patte pur se déplier ensuite
  SSC.println("#7 P2000 T1000 #11 P1600 T1000");// faire reposer la patte lorsqu'elle est arrivée à l'avant
  delay(1000);
  SSC.println("#11 P950 T1000 #9 P1400 T500");//permet de faire revenir la patte vers l'arrière pour faire avancer
  delay(1000);
  SSC.println("#5 P800 T500 #9 P1100 T500");// faire avancer la patte opposée (arrière droite)
  delay(1000);
  SSC.println("#5 P900 T500 #9 P950 T500");
  delay(1000);
  SSC.println("#4 P800 T1000 #8 P1800 T1000");
  delay(1000);
  SSC.println("#4 P1100 T1000 #8 P1600 T1000");
  delay(1000);
  SSC.println("#8 P2000 T600 #10 P1600 T500  ");
  delay(1000);
  SSC.println("#6 P2600 T1000 #10 P2000 T1000");
  delay(1000);
  SSC.println("#6 P2200 T1000 #10 P2100 T1000");
  delay(1000);
  
    


}
