#include <LiquidCrystal.h>
LiquidCrystal lcd (7,8,9,10,11,12);
int PIR=6;
int ReadValue;


void setup() {
  Serial.begin(9600);
  pinMode(PIR,INPUT);
  lcd.begin(16,2);
  lcd.clear();
 }

void loop() {
  ReadValue=digitalRead(PIR);
  if (ReadValue==HIGH) {
    lcd.setCursor(0,0);
    lcd.print("Someone stealing!!");
    println();
  }

  else{
    lcd.print("Take initiative";
  }

}


