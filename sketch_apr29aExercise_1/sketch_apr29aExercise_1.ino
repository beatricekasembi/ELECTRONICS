
int LEDRED = 9;
int PIR = 5;
int ReadValue; 

void setup() {
  pinMode(LEDRED,OUTPUT);
   pinMode(PIR,INPUT);

}

void loop() {
  ReadValue = digitalRead (PIR);
  if (ReadValue == HIGH)
  {digitalWrite(LEDRED, HIGH);
  
  }
  else {
    digitalWrite(LEDRED, LOW);
  
    
  }
}
