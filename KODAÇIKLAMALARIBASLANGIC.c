//Setup blo�un �st k�sm�nda k�t�phane tan�mlan�rz. #include <k�t�phanead�>
//int,double,float gibi de�i�kenleri setup blo�un �zerinde yapar�z.

void setup()//SETUP KISMINA E�ER KOMUT SADECE B�R KEZ �ALI�ACAKSA BURAYA YAZARIZ.
//Kod �al��maya ba�lad���nda ilk olarak okunan k�s�md�r.
//Bu k�s�m sadece bir kere okunur ve program esnas�nda tekrar okunmaz.
//Bu k�s�mda, pinlerin �al��ma modlar� gibi �nemli ve bir kere yap�lmas� yeterli olacak ayarlamalar yap�l�r.
{
  //pinMode arduino kart�nda bulunan sinyal pinlerinin giri� veya ��k�� olarak tan�mlanmas�n� sa�lar
  pinMode(10, OUTPUT); // 10 numaral� pini ��k�� olarak tan�mla
  pinMode(8, INPUT); // 8 numaral� pini giri� olarak tan�mla
}


void loop()//ARDUINODA ENERJ� OLDU�U S�RECE S�REKL� �ALI�AN(ANAKOMUTLARA) KOMUTLAR YAZILIR.Setup fonksiyonu �al��t�r�ld�ktan sonra �al��t�r�l�r ve bir sonsuz d�ng� i�levi g�r�r.
//Loop fonksiyonun bu sonsuz d�ng� �zelli�i kullan�larak s�rekli tekrar edecek olan i�lemlerin ger�ekle�tirilmesi sa�lan�r.
//Bu d�ng�, Arduino �al��t��� s�rece devam eder
{
  digitalWrite(13,HIGH); /* 13 numaral� pine enerji verildi */
  delay(1000); /* 1000 milisaniye = 1 saniye bekleme */
  digitalWrite(13,LOW); // 13 numaral� pindeki enerji kesildi */
  delay(1000); /* 1 saniye bekleme */
}

//Kendimizde yeni method (void)yani fonksiyon olu�turabiliriz.
void mesafeolcum(){
  komutlar
} //Bunu loop() methodun i�ine mesafeolcum() yaz�p �a��rabiliriz.

