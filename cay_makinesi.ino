#include <Servo.h>
#include <virtuabotixRTC.h>
#include <LiquidCrystal.h>
int rs=2,d4=4,en=3,d5=5,d6=6,d7=7,buton=8,servo=10,clk=11,date=12,rst=13,buzzer=9;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
Servo motor;
int dk,sn,butondurumu,buton_durumu;
virtuabotixRTC myRTC(clk,date,rst);


void setup() 
{
  lcd.begin(16,2);
  pinMode(buton,INPUT);
  motor.attach(10);
  myRTC.setDS1302Time(0,0,14,4,13,9,2019);
}

void loop() 
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Cay yapmak icin");
  lcd.setCursor(0,1);
  lcd.print("butona bas :D");
  buton_durumu=digitalRead(buton);
  if(buton_durumu==1)
  { 
    
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Cay hazirlaniyor");
    delay(3000);
    motor.write(30);
    lcd.setCursor(0,1);
    lcd.print("3 dk bekleyiniz");
    delay(180000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Cay hazir :)");
    tone(buzzer,440);
    delay(5000);
      noTone(buzzer);
      delay(1000);
      motor.write(75);
   lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Afiyet olsun :)");
    delay(50000);
  }

}
