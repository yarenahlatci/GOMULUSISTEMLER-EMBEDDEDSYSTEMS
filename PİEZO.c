byte buzzer =8;
int sure = 500;
void setup()
{
  pinMode(buzzer, OUTPUT); //Ses �retece�i i�in d��ar�ya ses verece�i i�in OUTPUT
}

void loop()
{
 /* digitalWrite(buzzer,HIGH);
  delay(sure);
  digitalWrite(buzzer,LOW);
  delay(sure);*/
  
  //noTone(buzzer); //Buzzerdan bir ses ��karma
  tone(buzzer,300,500);
  delay(sure);
  tone(buzzer,150,450);
  delay(sure);
  tone(buzzer,300,500);
  delay(sure);
  tone(buzzer,150,450);
  
}
/*
tone(buzzer,frekans,s�re);

*/
