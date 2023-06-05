byte pir = 2;
byte oku;
byte buzzer = 4;
int sure = 500;
bool hareketAlgilandi = false; // Hareket alg�land� m� kontrol� i�in yeni bir de�i�ken

void setup()
{
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  oku = digitalRead(pir);

  if (oku == HIGH && !hareketAlgilandi) // Hareket alg�land� ve daha �nce alg�lanmam��sa
  {
    hareketAlgilandi = true; // Hareket alg�land� olarak i�aretle
    Serial.println("Haraket Algilandi");
    Serial.println("UYARI!!!!!");
    tone(buzzer, 300, 100);
    delay(sure);
  }
  else if (oku == LOW && hareketAlgilandi) // Hareket alg�lanmad� ve �nceki hareket alg�land�ysa
  {
    Serial.println("Haraket sonlandi");
    hareketAlgilandi = false; // Hareket alg�lanmad� olarak i�aretle
    noTone(buzzer);
    delay(sure);
  }
}

