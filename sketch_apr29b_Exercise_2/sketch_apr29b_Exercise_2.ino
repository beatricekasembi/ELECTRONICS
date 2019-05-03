int TRIG = 9;
int ECHO = 5;
float TIME;
float DISTANCE;

void setup() {
  pinMode(TRIG,OUTPUT);
   pinMode(ECHO,INPUT);
   Serial.begin(9600);

}

void loop() {
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds (2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  TIME = pulseIn(ECHO,HIGH);

  DISTANCE = (TIME*0.0343)/2;

  Serial.print(DISTANCE);
  Serial.println("cm");
  delay(1000);
  

}
