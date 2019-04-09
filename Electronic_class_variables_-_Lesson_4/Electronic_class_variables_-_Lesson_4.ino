int LEDRED=6;
int LEDGREEN=9;
int BLINKRED;
int BLINKGREEN;
int REDON;
int REDOFF;
int GREENON;
int GREENOFF;

String message1="THIS IS THE REDLED BLINK #";
String message2="THIS IS THE GREENLED BLINK #";

void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my first program");
  Serial.println(" ");

  Serial.print("How many Blinks for GREEN LED?");
  while(Serial.available()==0) {};
  BLINKGREEN=Serial.parseInt();
  Serial.println(" ");
   
  Serial.print("How many Blinks for RED LED?");
  while(Serial.available()==0) {};
  BLINKRED=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How long should the RED LED be on?");
  while(Serial.available()==0) {};
  REDON=Serial.parseInt();
  Serial.println(" ");
  } 

  Serial.print("How long should the RED LED be on?");
  while(Serial.available()==0) {};
  GREENON=Serial.parseInt();
  Serial.println(" ");
  } 

  Serial.print("How long should the RED LED be on?");
  while(Serial.available()==0) {};
  REDOFF=Serial.parseInt();
  Serial.println(" ");
  }

  Serial.print("How long should the RED LED be on?");
  while(Serial.available()==0) {};
  GREENOFF=Serial.parseInt();
  Serial.println(" ");
  }

void loop() {
  for(int j=1;j<=BLINKRED;j=j+1){
    Serial.print(message1);
    Serial.println(j);
    digitalWrite(LEDRED,HIGH);
    delay(REDON);
    digitalWrite(LEDRED,LOW);
    delay(RED OFF);

  
   for(int j=1;j<=BLINKGREEN;j=j+1){
   Serial.print(message2);
   Serial.println(j); 
   digitalWrite(LEDGREEN,HIGH);
   delay(GREENON);
   digitalWrite(LEDGREEN,LOW);
   delay(GREENOFF);}

    Serial.println(" ");
}
