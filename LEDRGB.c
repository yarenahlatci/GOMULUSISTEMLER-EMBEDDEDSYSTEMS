#define kirmizi 8
#define mavi 9
#define yesil 10
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop()
{
  digitalWrite(kirmizi, LOW);
  digitalWrite(yesil, HIGH);
  delay(500); 
  digitalWrite(yesil, LOW);
  digitalWrite(mavi, HIGH);
  delay(500);
  digitalWrite(mavi, LOW);
  digitalWrite(kirmizi,HIGH);
  delay(500); 
}
/* 
#define kirmizi 8 : "kirmizi" adl� bir sabit tan�mlan�r ve de�eri 8 olarak atan�r. Bu de�i�ken, k�rm�z� LED'in ba�land��� pin numaras�n� tutar.
pinMode(kirmizi, OUTPUT); : "kirmizi" de�i�keninde tutulan pin numaras�, ��k�� olarak tan�mlan�r.

*/
