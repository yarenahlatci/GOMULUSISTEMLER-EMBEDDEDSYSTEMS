byte sensor = A0;
int sicaklik;
int sure=500;

void setup()
{
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop(){
  sicaklik = analogRead(sensor);
  sicaklik = map(sicaklik,20,358,-40,125);
  Serial.print("Sicaklik: ");
  Serial.println(sicaklik);
  delay(sure);

}
