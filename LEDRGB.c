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
#define kirmizi 8 : "kirmizi" adlý bir sabit tanýmlanýr ve deðeri 8 olarak atanýr. Bu deðiþken, kýrmýzý LED'in baðlandýðý pin numarasýný tutar.
pinMode(kirmizi, OUTPUT); : "kirmizi" deðiþkeninde tutulan pin numarasý, çýkýþ olarak tanýmlanýr.

*/
