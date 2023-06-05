//Monitörden Arduiýnoya Veri Gönderme
int gelenVeri; //Bu þekilde tanýmlarsak yolladýðýmýz deðerleri ASCII tablosuna göre alacak


void setup()
{
  Serial.begin(9600); //Haberleþmeyi baþlat
}

void loop()
{
  if(Serial.available()){ //Verinin olup olmadýðýný if ile kontrol ederiz
    gelenVeri = Serial.read(); //Veriyi oku ve gelenVeri deðiþkenine aktar
    Serial.print("Gelen Veri: "); //Gelen veri seri baðlantý üzerinden yazdýrýlýr.
    Serial.println(gelenVeri);
    Serial.print(" - ");
    Serial.print("Char olarak: ");
    Serial.println((char)gelenVeri);
  }
}
/* 
Serial.available(); //Seri porttta bir veri var mý yok mu? Veri kontrolü byte byte yapýlýr.
Örneðin Merhabayý M E R H A B A þeklinde tek tek okur
Serial.read(); //Bilgisayardan gelen veriyi oku

*/
