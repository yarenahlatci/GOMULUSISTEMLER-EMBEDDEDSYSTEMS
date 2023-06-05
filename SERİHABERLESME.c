void setup()
{
 Serial.begin(9600); //Seri port haberleşme başlatılır,Veri gönderme hızımız 9600
}

void loop()
{
 Serial.println("Merhaba Dünya");
 Serial.println("Bilgisayar");
 delay(1000);
 Serial.end(); //Seri portu devre dışı bırak
 Serial.print("Burası Yazılmaz"); // Ekranda sadece Merhaba dünya ve bilgisayar yazar. Burası yazmaz çünkü seri portu devre dışı bıraktık.
 Serial.begin(9600); // Seri portu yeniden başlattık.
}

/*
Arduino üzerinde 0 ve 1 pinler diğer kullandığımız digital pinler(13,12,11,9 vb) gibi kullanabiliriz.Ama bu 0 ve 1 pinlerin başka özelliği vardır. Seri haberleşme için kullanılır. Arduinoya bağlı herhangi cihazın(monitör,bilgisayar vb) haberleşmeyi sağlayan pinlerdir. 0 ve 1 pinler aynı anda hem digital pin hemde seri haberleşme için kullanılamaz. 

0RX -> Veriyi almak için
1TX -> Veriyi yollamak için kullanılır

İlk olarak monitöre bağlandığımızı düşünelim. Seri porttan bilgi alacağız. Seri port için bir çok kütüphane vardır.
Seri portta en önemli kural;
•	SERİ HABERLEŞME HIZI AYARLANMALI(Baud) -> Bu hızı ayarlamak için Serial.begin kullanırız. Haberleşme hızını yazarız. İnt değer alır. 
•	Serial.begin(9600) -> Veri gönderme hızımızdır. 9600 defaulttur. Bilgisayarın veri gönderme hızı 9600dür.Seri port haberleşme başlatılır.

Serial.println() -> Ekrana yazı yazdırırız.
Serial.print() -> Bununlada ekrana yazı yazdırabiliriz ama println alt satıra geçer,print yan yana yazar.

*/
