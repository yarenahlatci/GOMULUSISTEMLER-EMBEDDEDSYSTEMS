//int potpin = A0; //Potansiyometrenin pin giri�i A0 ama ba�ka �ekilde kullanal�m;
#define potpin A0  
//#define ifadesi, programda kullan�lan sabitlerin tan�mlanmas�n� sa�lar.
//potpin A0 ifadesi ise potpin ad�nda bir sabit tan�mlar ve bu sabitin de�eri A0 olarak belirlenir. A0, Arduino'daki analog pinlerden biridir ve potansiyometreler gibi analog sens�rlerin okunmas� i�in kullan�l�r.
int okunanDeger;

void setup()
{
  Serial.begin(9600); //Haberle�meyi ba�latt�k
  Serial.println("Bilgisayarla ba�lant� sa�land�!");
}

void loop()
{
 okunanDeger = analogRead(potpin);
 okunanDeger = map(okunanDeger,0,1023,0,255);
 Serial.println(okunanDeger);
 delay(3000);
}
/*
analogRead(); Analog de�er okumak i�in kullan�r�z.
*/

