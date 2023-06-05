byte trig = 2; //Sensörün trigger bacaðýnýn baðlý olduðu pin
byte echo = 3; //Sensörün echo bacaðýnýn baðlý olduðý pin
unsigned long sure;
double mesafe;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); //Dýþarýdan bilgi aldýðýmýz için
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig,HIGH); //Ses dalgasý gönderiyoruz
  delayMicroseconds(10); //10 mikrosaniye bekletiyoruz
  digitalWrite(trig,LOW); //Ses dalgasýný kapatýyoruz.Bu þekilde bir ses dalgasý oluþturmuþ oluyoruz.

  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2) * 0.0343;

  Serial.print("Mesafe: ");
  Serial.print(mesafe);
  Serial.println(" cm");
  delay(1500);
}
