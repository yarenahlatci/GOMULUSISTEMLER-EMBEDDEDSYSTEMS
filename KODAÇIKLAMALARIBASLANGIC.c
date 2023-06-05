//Setup bloðun üst kýsmýnda kütüphane tanýmlanýrz. #include <kütüphaneadý>
//int,double,float gibi deðiþkenleri setup bloðun üzerinde yaparýz.

void setup()//SETUP KISMINA EÐER KOMUT SADECE BÝR KEZ ÇALIÞACAKSA BURAYA YAZARIZ.
//Kod çalýþmaya baþladýðýnda ilk olarak okunan kýsýmdýr.
//Bu kýsým sadece bir kere okunur ve program esnasýnda tekrar okunmaz.
//Bu kýsýmda, pinlerin çalýþma modlarý gibi önemli ve bir kere yapýlmasý yeterli olacak ayarlamalar yapýlýr.
{
  //pinMode arduino kartýnda bulunan sinyal pinlerinin giriþ veya çýkýþ olarak tanýmlanmasýný saðlar
  pinMode(10, OUTPUT); // 10 numaralý pini çýkýþ olarak tanýmla
  pinMode(8, INPUT); // 8 numaralý pini giriþ olarak tanýmla
}


void loop()//ARDUINODA ENERJÝ OLDUÐU SÜRECE SÜREKLÝ ÇALIÞAN(ANAKOMUTLARA) KOMUTLAR YAZILIR.Setup fonksiyonu çalýþtýrýldýktan sonra çalýþtýrýlýr ve bir sonsuz döngü iþlevi görür.
//Loop fonksiyonun bu sonsuz döngü özelliði kullanýlarak sürekli tekrar edecek olan iþlemlerin gerçekleþtirilmesi saðlanýr.
//Bu döngü, Arduino çalýþtýðý sürece devam eder
{
  digitalWrite(13,HIGH); /* 13 numaralý pine enerji verildi */
  delay(1000); /* 1000 milisaniye = 1 saniye bekleme */
  digitalWrite(13,LOW); // 13 numaralý pindeki enerji kesildi */
  delay(1000); /* 1 saniye bekleme */
}

//Kendimizde yeni method (void)yani fonksiyon oluþturabiliriz.
void mesafeolcum(){
  komutlar
} //Bunu loop() methodun içine mesafeolcum() yazýp çaðýrabiliriz.

