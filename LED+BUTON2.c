byte ledPin = 13;
byte butonPin = 2;
byte ledDurum = 0; //LED'in ba�lang�� durumu 0 (yanm�yor)
byte butonDurum = 0; //Buton bas�l� de�il (Ba�lang�� durumunda)
byte durum =0;

void setup()
{
  pinMode(ledPin,INPUT);
  pinMode(butonPin,OUTPUT);
}

void loop()
{
  butonDurum = digitalRead(butonPin);
  if(butonDurum == 1 && durum == 0)
  {
    durum =1;
    if(ledDurum==0)
      ledDurum = 1; // LED'i yakmak i�in haz�r ol
    else
      ledDurum = 0; //LED'i s�nd�rmek i�in haz�r ol
	}
  if(ledDurum == 1)
    digitalWrite(ledPin,HIGH);
  else
    digitalWrite(ledPin,LOW);
  
  if(butonDurum == 0 && durum == 1)
    durum = 0;
}
