int buzzerPin=8;
int sensorPin=A1;
int veri;
int esikDeger=200;

void setup() 
{
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  veri=analogRead(sensorPin);
  delay(200);
  Serial.println(veri);
  if(veri>esikDeger)
  {
    tone(buzzerPin,440);
    delay(100);
    noTone(buzzerPin);
    delay(100);
    
  }
  else if(veri<esikDeger)
  {
    noTone(buzzerPin);
  }
}
