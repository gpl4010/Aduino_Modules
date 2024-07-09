#include <SoftwareSerial.h>    //블루투스 시리얼 통신 라이브러리
SoftwareSerial BTSerial(2, 3); //블루투스 설정 BTSerial(Tx, Rx)
 
void setup() {
  BTSerial.begin(9600);
  Serial.begin(9600);
}
 
void loop() {
  if(BTSerial.available())
  {
    char bt;
    bt = BTSerial.read();
    
    Serial.Println(bt);
  }
}