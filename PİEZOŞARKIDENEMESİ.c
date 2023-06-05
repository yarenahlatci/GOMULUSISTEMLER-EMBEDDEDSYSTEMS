#define buzzerPin 8

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  playMelody();
  delay(1000);
}

void playMelody() {
  int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
  int noteDuration = 500;

  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, melody[i], noteDuration);
    delay(noteDuration);
    noTone(buzzerPin);
    delay(noteDuration/10);
  }
}

