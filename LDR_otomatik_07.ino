#define led 3
void setup() 
{
 pinMode(led,OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
 int isik=analogRead(A0);
 Serial.println(isik);
 delay(50);
 if(isik < 160)
 {
  digitalWrite(led,HIGH);
 }
 if(isik> 165)
 {
  digitalWrite(led,LOW);
 }
}
