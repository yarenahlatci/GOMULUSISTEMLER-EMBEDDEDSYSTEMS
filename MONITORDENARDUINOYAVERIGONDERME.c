//Monit�rden Ardui�noya Veri G�nderme
int gelenVeri; //Bu �ekilde tan�mlarsak yollad���m�z de�erleri ASCII tablosuna g�re alacak


void setup()
{
  Serial.begin(9600); //Haberle�meyi ba�lat
}

void loop()
{
  if(Serial.available()){ //Verinin olup olmad���n� if ile kontrol ederiz
    gelenVeri = Serial.read(); //Veriyi oku ve gelenVeri de�i�kenine aktar
    Serial.print("Gelen Veri: "); //Gelen veri seri ba�lant� �zerinden yazd�r�l�r.
    Serial.println(gelenVeri);
    Serial.print(" - ");
    Serial.print("Char olarak: ");
    Serial.println((char)gelenVeri);
  }
}
/* 
Serial.available(); //Seri porttta bir veri var m� yok mu? Veri kontrol� byte byte yap�l�r.
�rne�in Merhabay� M E R H A B A �eklinde tek tek okur
Serial.read(); //Bilgisayardan gelen veriyi oku

*/
