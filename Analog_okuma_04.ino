#define potpoin A0
int deger=0;
void setup() 
{
Serial.begin(9600);
Serial.println("Pot değer okuma");
}

void loop() 
{
deger=analogRead(potpoin);
float gerilim=(5.00/1024.00)*deger;
Serial.println(gerilim);
delay(300);
}
