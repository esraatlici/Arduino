#include <Wire.h>
#include <I2Cdev.h> //I2C kütüphanesini ekledik
#include <MPU6050.h> //Mpu6050 kütüphanesi ekledik
 
MPU6050 ivme_sensor; // sensörümüze ivme_sensor adını verdik
int16_t ax, ay, az; //ivme tanımlama
int16_t gx, gy, gz; //gyro tanımlama
 
void setup() {
Wire.begin();
Serial.begin(9600);
Serial.println("I2C cihazlar baslatiliyor...");
ivme_sensor.initialize();
Serial.println("Test cihazi baglantilari...");
Serial.println(ivme_sensor.testConnection() ? "MPU6050 baglanti basarili" : "MPU6050 baglanti basarisiz");
}
 
void loop() {
ivme_sensor.getMotion6(&ax, &ay, &az, &gx, &gy, &gz); // ivme ve gyro değerlerini okuma
 
//açısal ivmeleri ve gyro değerlerini serial ekrana yazdıralım
Serial.print(ax); Serial.print("\t");
Serial.print(ay); Serial.print("\t");
Serial.print(az); Serial.print("\t");
Serial.print(gx); Serial.print("\t");
Serial.print(gy); Serial.print("\t");
Serial.print(gz); Serial.println("\t");
 
delay(50); //değerlerin değişimini daha net görmek için yarım saniye beklesin
}
 
