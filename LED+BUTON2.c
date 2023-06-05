byte ledPin = 13;
byte butonPin = 2;
byte ledDurum = 0; //LED'in baþlangýç durumu 0 (yanmýyor)
byte butonDurum = 0; //Buton basýlý deðil (Baþlangýç durumunda)
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
      ledDurum = 1; // LED'i yakmak için hazýr ol
    else
      ledDurum = 0; //LED'i söndürmek için hazýr ol
	}
  if(ledDurum == 1)
    digitalWrite(ledPin,HIGH);
  else
    digitalWrite(ledPin,LOW);
  
  if(butonDurum == 0 && durum == 1)
    durum = 0;
}
