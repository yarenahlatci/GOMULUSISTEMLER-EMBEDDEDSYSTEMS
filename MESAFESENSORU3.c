byte trig = 2; //Sensörün trigger bacaðýnýn baðlý olduðu pin
byte echo = 3; //Sensörün echo bacaðýnýn baðlý olduðý pin
byte redLed = 10;
byte maviLed = 11;
byte yesilLed = 12;

unsigned long sure;
double mesafe;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); //Dýþarýdan bilgi aldýðýmýz için
  pinMode(redLed,OUTPUT);
  pinMode(maviLed,OUTPUT);
  pinMode(yesilLed,OUTPUT);

  Serial.begin(9600);
}

void loop(){
  digitalWrite(redLed,LOW);
  digitalWrite(maviLed,LOW);
  digitalWrite(yesilLed,LOW);

  digitalWrite(trig,HIGH); //Ses dalgasý gönderiyoruz
  delayMicroseconds(10); //10 mikrosaniye bekletiyoruz
  digitalWrite(trig,LOW); //Ses dalgasýný kapatýyoruz.Bu þekilde bir ses dalgasý oluþturmuþ oluyoruz.

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
