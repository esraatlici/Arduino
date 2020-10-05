int buzzerPin=8;
int esikDeger=400;
int veri;
void setup() 
{
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  veri=analogRead(A5);
  Serial.println(veri);
  if(veri>400)
  {
    tone(buzzerPin,440);
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else
  {
    noTone(buzzerPin);
  }
}
