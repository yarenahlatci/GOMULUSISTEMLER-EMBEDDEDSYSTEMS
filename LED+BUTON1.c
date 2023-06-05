byte ledPin = 13;
byte butonPin =2;
void setup()
{
  pinMode(ledPin,INPUT);
  pinMode(butonPin,OUTPUT);
}

void loop()
{
  if(digitalRead(butonPin) == HIGH)
    digitalWrite(ledPin,HIGH);
  else
    digitalWrite(ledPin,LOW);
}
