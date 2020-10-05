#include <LiquidCrystal.h>
#include <virtuabotixRTC.h>
int clk_pin=6;
int dat_pin=7;
int rst_pin=8;
virtuabotixRTC myRTC(clk_pin,dat_pin,rst_pin);
int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() 
{
  lcd.begin(16,2);
}

void loop() 
{
  myRTC.updateTime();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(myRTC.dayofmonth);
  lcd.print("/");
  lcd.print(myRTC.month);
  lcd.print("/");
  lcd.print(myRTC.year);
  lcd.setCursor(0,1);
  lcd.print(myRTC.hours);
  lcd.print(":");
  lcd.print(myRTC.minutes);
  lcd.print(":");
  lcd.print(myRTC.seconds);
  delay(1000);
}
