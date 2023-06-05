#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int sure = 300;
int sayac = 0;

void setup(){
  lcd.begin(16,2); //LCD'nin satýr ve sütun sayýsý
  lcd.print("Sayac: ");
  lcd.setCursor(1, 1);
  lcd.print ("Sayi: ");
}


void loop(){
  lcd.setCursor(8,0);
  lcd.print(sayac);
  delay(sure);
  sayac++;
  
  lcd.setCursor(8,1);
  lcd.print(sayac * 5);
  delay(sure);
}

//SAYAÇ UYGULAMASI

