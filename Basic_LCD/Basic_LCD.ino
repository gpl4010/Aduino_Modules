#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);  //lcd 객체 선언
 
void setup()
{
  lcd.begin(); //LCD 사용 시작
}
 
void loop()
{
  lcd.setCursor(0, 0);   
  lcd.print("Hello");  
  delay(1000);         
  lcd.setCursor(0, 1);
  lcd.print("World"); 
  delay(1000);
  lcd.clear();            
  delay(1000);            
}

