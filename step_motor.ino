int motorpin1=8,motorpin2=9,motorpin3=10,motorpin4=11;

void setup() 
{
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  pinMode(motorpin3,OUTPUT);
  pinMode(motorpin4,OUTPUT);
}

void loop() 
{
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,HIGH);
  delay(10);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,HIGH);
  digitalWrite(motorpin4,LOW);
  delay(10); 
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,HIGH);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW);
  delay(10);
  digitalWrite(motorpin1,HIGH);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW);
  delay(10);
}
