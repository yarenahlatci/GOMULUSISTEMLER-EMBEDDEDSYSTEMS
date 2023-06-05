byte buzzer =8;
int sure = 500;
void setup()
{
  pinMode(buzzer, OUTPUT); //Ses üreteceði için dýþarýya ses vereceði için OUTPUT
}

void loop()
{
 /* digitalWrite(buzzer,HIGH);
  delay(sure);
  digitalWrite(buzzer,LOW);
  delay(sure);*/
  
  //noTone(buzzer); //Buzzerdan bir ses çýkarma
  tone(buzzer,300,500);
  delay(sure);
  tone(buzzer,150,450);
  delay(sure);
  tone(buzzer,300,500);
  delay(sure);
  tone(buzzer,150,450);
  
}
/*
tone(buzzer,frekans,süre);

*/
