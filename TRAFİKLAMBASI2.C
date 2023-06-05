byte lamba[3] = {13,12,7}; // 3 tane LED'in baðlý olduðu dijital pin numaralarý
char s[3] = {'K','S','Y'}; // LED'lerin isimleri (Kýrmýzý, Sarý, Yeþil)

void setup()
{
  pinMode(lamba[0],OUTPUT); // LED1 dijital pini çýkýþ olarak ayarlandý
  pinMode(lamba[1],OUTPUT); // LED2 dijital pini çýkýþ olarak ayarlandý
  pinMode(lamba[2],OUTPUT); // LED3 dijital pini çýkýþ olarak ayarlandý
  Serial.begin(9600); // seri iletiþim hýzý 9600 baud olarak ayarlandý
}

void loop()
{
  for(int i=0;i<3;i++){ // 3 LED'yi sýrayla yak
    digitalWrite(lamba[i],1); // LED'i yak
    Serial.print(s[i]); // LED'in adýný seri porta yazdýr
    Serial.println(" Lamba yanýyor"); // LED'in yandýðýný belirtmek için seri porta yazdýr
    delay(1000); // 0.1 saniye bekle
    for(int j=0;j<3;j++){ // tüm LED'leri söndür
      digitalWrite(lamba[j],0); // LED'i söndür
    }
  }
}

