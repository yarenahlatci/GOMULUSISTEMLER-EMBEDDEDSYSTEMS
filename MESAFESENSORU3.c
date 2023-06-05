byte trig = 2; //Sens�r�n trigger baca��n�n ba�l� oldu�u pin
byte echo = 3; //Sens�r�n echo baca��n�n ba�l� oldu�� pin
byte redLed = 10;
byte maviLed = 11;
byte yesilLed = 12;

unsigned long sure;
double mesafe;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); //D��ar�dan bilgi ald���m�z i�in
  pinMode(redLed,OUTPUT);
  pinMode(maviLed,OUTPUT);
  pinMode(yesilLed,OUTPUT);

  Serial.begin(9600);
}

void loop(){
  digitalWrite(redLed,LOW);
  digitalWrite(maviLed,LOW);
  digitalWrite(yesilLed,LOW);

  digitalWrite(trig,HIGH); //Ses dalgas� g�nderiyoruz
  delayMicroseconds(10); //10 mikrosaniye bekletiyoruz
  digitalWrite(trig,LOW); //Ses dalgas�n� kapat�yoruz.Bu �ekilde bir ses dalgas� olu�turmu� oluyoruz.

  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2) * 0.0343;

  Serial.print("Mesafe: ");
  Serial.print(mesafe);
  Serial.println(" cm");
  
  if (mesafe < 50)
    digitalWrite(redLed,HIGH);
  else if(mesafe>=50 && mesafe < 100)
      digitalWrite(maviLed,HIGH);
   else
      digitalWrite(yesilLed,HIGH);
    
   delay(1500);
}
