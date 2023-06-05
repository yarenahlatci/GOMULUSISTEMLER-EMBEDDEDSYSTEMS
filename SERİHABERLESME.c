void setup()
{
 Serial.begin(9600); //Seri port haberle�me ba�lat�l�r,Veri g�nderme h�z�m�z 9600
}

void loop()
{
 Serial.println("Merhaba D�nya");
 Serial.println("Bilgisayar");
 delay(1000);
 Serial.end(); //Seri portu devre d��� b�rak
 Serial.print("Buras� Yaz�lmaz"); // Ekranda sadece Merhaba d�nya ve bilgisayar yazar. Buras� yazmaz ��nk� seri portu devre d��� b�rakt�k.
 Serial.begin(9600); // Seri portu yeniden ba�latt�k.
}

/*
Arduino �zerinde 0 ve 1 pinler di�er kulland���m�z digital pinler(13,12,11,9 vb) gibi kullanabiliriz.Ama bu 0 ve 1 pinlerin ba�ka �zelli�i vard�r. Seri haberle�me i�in kullan�l�r. Arduinoya ba�l� herhangi cihaz�n(monit�r,bilgisayar vb) haberle�meyi sa�layan pinlerdir. 0 ve 1 pinler ayn� anda hem digital pin hemde seri haberle�me i�in kullan�lamaz. 

0RX -> Veriyi almak i�in
1TX -> Veriyi yollamak i�in kullan�l�r

�lk olarak monit�re ba�land���m�z� d���nelim. Seri porttan bilgi alaca��z. Seri port i�in bir �ok k�t�phane vard�r.
Seri portta en �nemli kural;
�	SER� HABERLE�ME HIZI AYARLANMALI(Baud) -> Bu h�z� ayarlamak i�in Serial.begin kullan�r�z. Haberle�me h�z�n� yazar�z. �nt de�er al�r. 
�	Serial.begin(9600) -> Veri g�nderme h�z�m�zd�r. 9600 defaulttur. Bilgisayar�n veri g�nderme h�z� 9600d�r.Seri port haberle�me ba�lat�l�r.

Serial.println() -> Ekrana yaz� yazd�r�r�z.
Serial.print() -> Bununlada ekrana yaz� yazd�rabiliriz ama println alt sat�ra ge�er,print yan yana yazar.

*/
