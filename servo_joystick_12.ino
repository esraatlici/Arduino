
int okuma;
int derece;

void setup() {
  Serial.begin(9600);

 pinMode(13,OUTPUT);
}

void loop() {
 okuma=analogRead(A0);
 int deger=analogRead(A1);
 Serial.println(deger);
 delay(30);
 
 if(deger==0) digitalWrite(13,HIGH);
 else digitalWrite(13,LOW);
 
}
