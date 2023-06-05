#define potpin A0  
int kirmizi = 6;
int mavi =7;
int okunanDeger;

void setup()
{
  Serial.begin(9600); //Haberle�meyi ba�latt�k
  Serial.println("Bilgisayarla ba�lant� sa�land�!");
  pinMode(kirmizi,OUTPUT);
  pinMode(mavi,OUTPUT);
}

void loop()
{
 okunanDeger = analogRead(potpin);
 okunanDeger = map(okunanDeger,0,1023,0,255);
 Serial.println(okunanDeger);

  if (okunanDeger <= 100) {
    digitalWrite(kirmizi, HIGH);
    digitalWrite(mavi, LOW);
  } else {
    digitalWrite(mavi, HIGH);
    digitalWrite(kirmizi, LOW);
  }
  
  delay(1000);
}
/*
analogRead(); Analog de�er okumak i�in kullan�r�z.
*/
