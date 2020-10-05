#define potPin A0
int potDeger=0;
int rPin=9;
int gPin=10;
int bPin=11;
int rDeger=0;
int gDeger=0;
int bDeger=0;

void setup() 
{
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  Serial.begin(9600);
  
}

void loop() 
{
  potDeger=analogRead(potPin);
  Serial.println(potDeger);

  if(potDeger<341)
  {
    potDeger=(potDeger*3)/4;
    rDeger=255-potDeger;
    gDeger=potDeger;
    bDeger=0;
  }
    else if(potDeger<682)
  {
    potDeger=((potDeger-341)*3)/4;
    rDeger=0;
    gDeger=255-potDeger;
    bDeger=potDeger;
  }
     else 
  {
    potDeger=((potDeger-683)*3)/4;
    rDeger=potDeger;
    gDeger=0;
    bDeger=255-potDeger;
  }
  analogWrite(rPin,255-rDeger);
  analogWrite(gPin,255-gDeger);
  analogWrite(bPin,255-bDeger);
  

}
