#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int sure = 500;

void setup(){
  lcd.begin(16,2); //LCD'nin satýr ve sütun sayýsý

}


void loop(){
  lcd.setCursor(0,0); 
  lcd.autoscroll();
  lcd.print("Merhaba");
  delay(sure);
}


