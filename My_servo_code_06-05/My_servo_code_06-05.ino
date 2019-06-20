#include <Servo.h>

Servo myservo;
int LEDRED=6;
int LEDYELLLOW=9;
int pinpot = A0;
int val;

void setup() {
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  myservo.attach(10);
}

void loop() {
 val = analogRead(pinpot);
 val = map(val, 0, 1023, 0, 180);
 myservo.write(val);
 delay(15);
 
 digitalWrite(LEDRED,HIGH);
 delay(1000);
 digitalWrite(LEDRED,LOW);
 delay(1000);}
 
 if (val= map(val, 0, 511.5, 0, 90) {
  myservo.write(90);
 }
  else{
    myservo.write(0);
    delay(1000);
  }
}
