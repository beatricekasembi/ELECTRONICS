int LEDGREEN=+9;
void setup() {
  pinMode(LEDGREEN,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(LED,113);
  delay(1000);
  
  analogWrite(LED,0);
  delay(1000);
  // put your main code here, to run repeatedly:

}
