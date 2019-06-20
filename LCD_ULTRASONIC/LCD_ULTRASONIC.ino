#include<LiquidCrystal.h>
LiquidCrystal lcd (7,8,9,10,11,12);

int TRIG=6;
int ECHO=5;
float distance;
float Time;



void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT); 

}

void loop() {
  lcd.setCursor(0,0);
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  Time=pulseIn(ECHO,HIGH);
  distance=(0.0343*Time)/2;
  lcd.print("distance= ");
  lcd.print(distance);
  lcd.println("cm");
  
  

}
