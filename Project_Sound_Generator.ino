/*
 Tone
 Melly Goeslow - Bunda
  >>>>>>>>>>>>>>>>>>>>>>>>>>>>
 Syifa Dzikri Tsani - 4211501022
 Wildan Firdaus - 4211501021
 */

int buzzer=8; // membuat variabel Buzzer untuk pin 8 digital
void setup(){ // void setup sengaja dikosongkan
  }
    void DO(){tone(buzzer, 262); } // fungsi variabel untuk nada DO
    void RE(){tone(buzzer, 294); }  // fungsi variabel untuk nada RE
    void MI(){tone(buzzer, 330); } // fungsi variabel untuk nada MI
    void FA(){tone(buzzer, 349); } // fungsi variabel untuk nada FA
    void SOL(){tone(buzzer, 395); } // fungsi variabel untuk nada SOL
    void LA(){tone(buzzer, 440); } // fungsi variabel untuk nada LA
    void SI(){tone(buzzer, 494); } // fungsi variabel untuk nada SI
    void DOO(){tone(buzzer, 523); } // fungsi variabel untuk nada DOO
    void DIAM(){noTone(buzzer); }  // fungsi variabel untuk nada DIAM
    
void loop() {
  MI(); delay(500);
  FA(); delay(500);
  SOL(); delay(500);
  MI(); delay(500);
  DIAM(); delay(500);
  FA(); delay(500);
  SOL(); delay(500);
  MI(); delay(500);
  DIAM(); delay(1200);
  
  DO(); delay(500);
  RE(); delay(500);
  MI(); delay(500);
  DO(); delay(500);
  DIAM(); delay(500);
  RE(); delay(500);
  MI(); delay(500);
  DO(); delay(500);
  DIAM (); delay(1200);
  
  SI(); delay(500); DIAM(); delay(30);
  SI(); delay(500); DIAM(); delay(30);
  SI(); delay(500); DIAM(); delay(30);
  MI(); delay(700);
  DIAM(); delay(500);
  SI(); delay(500);
  DIAM(); delay(500);
  RE(); delay(500);
  DIAM(); delay(30);
  RE(); delay(500);
  DO(); delay(500);
  SI(); delay(500);
  DO(); delay(800);
  DIAM(); delay(1200);

  DO(); delay(500); DIAM(); delay(30);
  DO(); delay(500); DIAM(); delay(30);
  DO(); delay(500); DIAM(); delay(30);
  DO(); delay(500); DIAM(); delay(30);
  DIAM(); delay(500);
  FA(); delay(500);
  DIAM(); delay(500);
  DO(); delay(500);
  DIAM(); delay(30);
  DO(); delay(800);
  RE(); delay(500);
  DIAM(); delay(50);
  RE(); delay(800);
  DIAM(); delay(1200);
  
  LA(); delay(1200);
  DIAM(); delay(500);
  SI(); delay(1200);
  DIAM(); delay(500);
  SI(); delay(1200);
  RE(); delay(800);
  DO(); delay(500);
  RE(); delay(500);
  MI(); delay(1200);
  DIAM(); delay(30);
  FA(); delay(1200);
  DIAM(); delay(500);
  MI(); delay(500);
  RE(); delay(500);
  MI(); delay(500);
  FA(); delay(800);
  SOL(); delay(1200);
  DIAM(); delay(1500);

  LA(); delay(1200);
  DIAM(); delay(500);
  SI(); delay(1200);
  DIAM(); delay(500);
  SI(); delay(1200);
  RE(); delay(800);
  DO(); delay(500);
  RE(); delay(500);
  MI(); delay(1000);
  DIAM(); delay(30);
  FA(); delay(1200);
  DIAM(); delay(500);
  MI(); delay(500);
  RE(); delay(500);
  MI(); delay(500);
  FA(); delay(800);
  SOL(); delay(1200);
  DIAM(); delay(1500);
  
}
