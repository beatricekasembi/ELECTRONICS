int LEDRED=6;
int LEDGREEN=9;

void setup() {
  pinMode(LEDRED,OUTPUT);
   pinMode(LEDGREEN,OUTPUT);
  
}

void loop () {
  for (int j=1;j<=5;j=j+1){
  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);}

   for (int j=1;j<=7;j=j+1){
  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);}
  
  
}

