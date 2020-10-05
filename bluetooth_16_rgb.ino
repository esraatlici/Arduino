int veri;
int kirmiziPin=9;
int yesilPin=10;
int maviPin=11;

void setup() 
{
  Serial.begin(9600);
  pinMode(kirmiziPin,OUTPUT);
  pinMode(maviPin,OUTPUT);
  pinMode(yesilPin,OUTPUT);

}

void loop() 
{
  if(Serial.available()>0)
  {
    veri=Serial.read();
  }
    if(veri=='k')
    {
      digitalWrite(kirmiziPin,LOW);
      digitalWrite(maviPin,HIGH);
      digitalWrite(yesilPin,HIGH);
    }
     else if(veri=='m')
    {
      digitalWrite(maviPin,LOW);
      digitalWrite(kirmiziPin,HIGH);
      digitalWrite(yesilPin,HIGH);
    }
     else if(veri=='y')
    {
      digitalWrite(yesilPin,LOW);
      digitalWrite(maviPin,HIGH);
      digitalWrite(kirmiziPin,HIGH);
    }
     else if(veri=='0')
    {
      digitalWrite(kirmiziPin,HIGH);
      digitalWrite(maviPin,HIGH);
      digitalWrite(yesilPin,HIGH);
    }
   
}
