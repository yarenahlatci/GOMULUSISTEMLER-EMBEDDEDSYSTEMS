void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13,1); //K�rm�z� 
  digitalWrite(12,0); //Sar�
  digitalWrite(10,0); //Ye�il
  delay(2000);
  digitalWrite(13,0); //K�rm�z�
  digitalWrite(12,1); //Sar�
  digitalWrite(10,0); //Ye�il
  delay(2000);
  digitalWrite(13,0); //K�rm�z�
  digitalWrite(12,0); //Sar�
  digitalWrite(10,1); //Ye�il
  delay(2000);
  
}
