#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int sure = 300;
int saniye = 0;

char isim[5][10] = {"Yaren","Kubra","Yesim","Nazli","Berra"};

void setup(){
  lcd.begin(16,2); //LCD'nin satýr ve sütun sayýsý
}


void loop(){
  for(int i=0;i<5;i++){
    delay(sure);
    lcd.print(isim[i]);
    delay(sure);
    lcd.clear();
  }
}



