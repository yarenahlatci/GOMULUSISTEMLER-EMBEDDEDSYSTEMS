byte pir = 2;
byte oku;
int sure = 500;
void setup()
{
  pinMode(pir,INPUT);
  Serial.begin(9600);
}

void loop()
{
  oku = digitalRead(pir);
  if(oku== HIGH)
  	Serial.println("UYARI!!!!!");
  delay(sure);
}
