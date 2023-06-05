byte pir = 2;
byte oku;
byte buzzer = 4;
int sure = 500;
bool hareketAlgilandi = false; // Hareket algýlandý mý kontrolü için yeni bir deðiþken

void setup()
{
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  oku = digitalRead(pir);

  if (oku == HIGH && !hareketAlgilandi) // Hareket algýlandý ve daha önce algýlanmamýþsa
  {
    hareketAlgilandi = true; // Hareket algýlandý olarak iþaretle
    Serial.println("Haraket Algilandi");
    Serial.println("UYARI!!!!!");
    tone(buzzer, 300, 100);
    delay(sure);
  }
  else if (oku == LOW && hareketAlgilandi) // Hareket algýlanmadý ve önceki hareket algýlandýysa
  {
    Serial.println("Haraket sonlandi");
    hareketAlgilandi = false; // Hareket algýlanmadý olarak iþaretle
    noTone(buzzer);
    delay(sure);
  }
}

