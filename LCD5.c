#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sure = 50;

void setup() {
  lcd.setCursor(8,0);
  lcd.print(":");
  lcd.setCursor(4,0);
  lcd.print(":");
}

void loop() {
  for(int i=0;i<12;i++){
    lcd.setCursor(2,0);
    lcd.print(i);
    
    for(int j=0;j<60;j++){
      lcd.setCursor(6,0);
      lcd.print(j);
      
      for(int k=0;k<60;k++){
        lcd.setCursor(10,0);
        lcd.print(k);
        delay(sure);
      }
    }
  }
}

