int sure = 100;
int pinler[]={13,12,11,10,9};
int i;
void setup()
{
  for(int i=0;i<5;i++)
    pinMode(pinler[i],OUTPUT);
}

void loop()
{
  for(int i=0;i<5;i++){
    digitalWrite(pinler[i],HIGH);
    delay(sure);
    digitalWrite(pinler[i],LOW);
  }
   for(int i=4;i>0;i--){
    digitalWrite(pinler[i],1);
    delay(sure);
    digitalWrite(pinler[i],0);
  }
}
