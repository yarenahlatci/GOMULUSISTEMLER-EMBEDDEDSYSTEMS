//int potpin = A0; //Potansiyometrenin pin giriþi A0 ama baþka þekilde kullanalým;
#define potpin A0  
//#define ifadesi, programda kullanýlan sabitlerin tanýmlanmasýný saðlar.
//potpin A0 ifadesi ise potpin adýnda bir sabit tanýmlar ve bu sabitin deðeri A0 olarak belirlenir. A0, Arduino'daki analog pinlerden biridir ve potansiyometreler gibi analog sensörlerin okunmasý için kullanýlýr.
int okunanDeger;

void setup()
{
  Serial.begin(9600); //Haberleþmeyi baþlattýk
  Serial.println("Bilgisayarla baðlantý saðlandý!");
}

void loop()
{
 okunanDeger = analogRead(potpin);
 okunanDeger = map(okunanDeger,0,1023,0,255);
 Serial.println(okunanDeger);
 delay(3000);
}
/*
analogRead(); Analog deðer okumak için kullanýrýz.
*/

