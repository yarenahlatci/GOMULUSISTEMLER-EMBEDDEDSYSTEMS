byte pir = 2;
byte oku;
byte buzzer = 4;
int sure = 500;
byte led = 5;

bool haraketAlgilandimi = false; 

void setup() {
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  oku = digitalRead(pir);

  if (oku == HIGH && !haraketAlgilandimi) {
    Serial.println("Haraket Algilandi");
    tone(buzzer, 300, 100);
    digitalWrite(led, HIGH);
    delay(sure);
    haraketAlgilandimi = true; 
  } 
  else if (oku == LOW && haraketAlgilandimi) { 
    Serial.println("Haraket Sonlandi");
    noTone(buzzer);
    digitalWrite(led, LOW);
    haraketAlgilandimi = false; 
  }
  delay(sure);
}

