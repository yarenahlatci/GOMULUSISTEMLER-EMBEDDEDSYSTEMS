byte lamba[3] = {13,12,7}; // 3 tane LED'in ba�l� oldu�u dijital pin numaralar�
char s[3] = {'K','S','Y'}; // LED'lerin isimleri (K�rm�z�, Sar�, Ye�il)

void setup()
{
  pinMode(lamba[0],OUTPUT); // LED1 dijital pini ��k�� olarak ayarland�
  pinMode(lamba[1],OUTPUT); // LED2 dijital pini ��k�� olarak ayarland�
  pinMode(lamba[2],OUTPUT); // LED3 dijital pini ��k�� olarak ayarland�
  Serial.begin(9600); // seri ileti�im h�z� 9600 baud olarak ayarland�
}

void loop()
{
  for(int i=0;i<3;i++){ // 3 LED'yi s�rayla yak
    digitalWrite(lamba[i],1); // LED'i yak
    Serial.print(s[i]); // LED'in ad�n� seri porta yazd�r
    Serial.println(" Lamba yan�yor"); // LED'in yand���n� belirtmek i�in seri porta yazd�r
    delay(1000); // 0.1 saniye bekle
    for(int j=0;j<3;j++){ // t�m LED'leri s�nd�r
      digitalWrite(lamba[j],0); // LED'i s�nd�r
    }
  }
}

