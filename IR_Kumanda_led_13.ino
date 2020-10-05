#include<IRremote.h>
int RECV_PIN=2;
int kirmiziled=9;
int yesilled=10;
int maviled=11;
decode_results results;
IRrecv irrecv(RECV_PIN);

#define OK 16726215
#define Sol 2351064443
#define Sag 71952287
#define Asagi 16730805
#define Yukari 16718055
#define Kare 16756815
#define Yildiz 255
#define BUTON1 16753245
#define BUTON2 16736925
#define BUTON3 16769565
#define BUTON4 16720605
#define BUTON5 3622325019
#define BUTON6 16761405
#define BUTON7 16769055
#define BUTON8 16754775
#define BUTON9 16748655
#define basili 4294967295 

void setup() 
{
  pinMode(kirmiziled,OUTPUT);
  pinMode(yesilled,OUTPUT);
  pinMode(maviled,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() 
{
  if(irrecv.decode(&results))
  {
    Serial.println(results.value);
    if(results.value==BUTON1)
    {
      digitalWrite(kirmiziled,HIGH);
      if(digitalRead(kirmiziled)==HIGH)
      {
        Serial.println("Kirmizi yandi");
      }
      else  Serial.println("Kirmizi sondu");
    }

      if(results.value==BUTON2)
    {
      digitalWrite(yesilled,!digitalRead(yesilled));
      if(digitalRead(yesilled)==HIGH)
      {
        Serial.println("yesil yandi");
      }
      else  Serial.println("yesil sondu");
    }

      if(results.value==BUTON3)
    {
      digitalWrite(maviled,!digitalRead(maviled));
      if(digitalRead(maviled)==HIGH)
      {
        Serial.println("Mavi yandi");
      }
      else  Serial.println("Mavi sondu");
    }

      if(results.value==Yildiz)
    {
      digitalWrite(kirmiziled,LOW);
      digitalWrite(yesilled,LOW);
      digitalWrite(maviled,LOW);
      Serial.println("Tum ledler sondu");
    }

       if(results.value==BUTON4)
    {
      digitalWrite(kirmiziled,HIGH);
      digitalWrite(yesilled,HIGH);
      digitalWrite(maviled,HIGH);
      Serial.println("Tum ledler yandi");
    }
    irrecv.resume();
  }

}
