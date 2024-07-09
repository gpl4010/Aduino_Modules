#include<DHT.h>     //DHT.h 라이브러리 추가
DHT dht(12, DHT11); //DHT 설정 dht(핀, DHT종류)
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  delay(3000);
  int tem = dht.readTemperature();
  int hum = dht.readHumidity(); 
  Serial.print("Temperature :");  
  Serial.print(tem);           
  Serial.print("C ");             
  Serial.print("Humidity : ");
  Serial.print(hum);
  Serial.println("% ");          
}
