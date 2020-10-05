#define Buton 8
#define kirmizi 10
#define yesil 12
int buton_durumu=0;
void setup() 
{
 pinMode(Buton,INPUT);
 pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
}

void loop() 
{
  buton_durumu=digitalRead(Buton);
  if(buton_durumu==1)
  {
    digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,HIGH);
  }
  else
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
  }
 
  

}
