#include <LiquidCrystal.h>
int trigPin=7;
int echoPin=6;
int sure;
int uzaklik;
int rs=12, en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() 
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH,11600);
  uzaklik=sure*0.0345/2;
  delay(250);
  Serial.print(uzaklik);
  Serial.println(" cm");
 /* lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Uzaklik: ");
  lcd.setCursor(0,1);
  lcd.print(uzaklik);
  lcd.print(" cm");
  lcd.setCursor(12,1);
  lcd.print("Esra");*/

}
