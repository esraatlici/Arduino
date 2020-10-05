void setup() 
{
 pinMode(8,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(12,OUTPUT);
}

void loop() 
{
  digitalWrite(8,HIGH);
  delay(600);
  digitalWrite(8,LOW);
  
  digitalWrite(10,HIGH);
  delay(400);
  digitalWrite(10,LOW);
  
  digitalWrite(12,HIGH);
  delay(200);
  digitalWrite(12,LOW);
  
}
