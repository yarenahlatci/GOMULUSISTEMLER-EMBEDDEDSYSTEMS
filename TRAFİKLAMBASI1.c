void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13,1); //Kýrmýzý 
  digitalWrite(12,0); //Sarý
  digitalWrite(10,0); //Yeþil
  delay(2000);
  digitalWrite(13,0); //Kýrmýzý
  digitalWrite(12,1); //Sarý
  digitalWrite(10,0); //Yeþil
  delay(2000);
  digitalWrite(13,0); //Kýrmýzý
  digitalWrite(12,0); //Sarý
  digitalWrite(10,1); //Yeþil
  delay(2000);
  
}
