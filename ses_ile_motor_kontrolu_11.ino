#define sensorpin 3
#define motorpin 5
int motordurum=LOW;

void setup() {
 pinMode(sensorpin,INPUT);
 pinMode(motorpin,OUTPUT);
}

void loop() {

 if(digitalRead(sensorpin))
 {
  if(motordurum==LOW)
  {
    motordurum=HIGH;
  }
  else
  {
    motordurum=LOW;
  }
  digitalWrite(motorpin,motordurum);
 }
 delay(50);
}
