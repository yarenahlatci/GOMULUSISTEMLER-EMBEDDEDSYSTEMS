byte trig = 2; //Sensörün trigger bacaðýnýn baðlý olduðu pin
byte echo = 3; //Sensörün echo bacaðýnýn baðlý olduðý pin
byte led = 10;
unsigned long sure;
double mesafe;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); //Dýþarýdan bilgi aldýðýmýz için
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(led,LOW);
  digitalWrite(trig,HIGH); //Ses dalgasý gönderiyoruz
  delayMicroseconds(10); //10 mikrosaniye bekletiyoruz
  digitalWrite(trig,LOW); //Ses dalgasýný kapatýyoruz.Bu þekilde bir ses dalgasý oluþturmuþ oluyoruz.

  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2) * 0.0343;

  Serial.print("Mesafe: ");
  Serial.print(mesafe);
  Serial.println(" cm");
  
  if (mesafe < 50)
    digitalWrite(led,HIGH);
  
   delay(1500);
}
