int sure = 1000;//
byte pin;
int gosterge[10][7] =  {
   /*a b c d e f g */
    {1,1,1,1,1,1,1}, //0
    {0,1,1,0,0,0,0}, //1
    {1,1,0,1,1,0,1}, //2
    {1,1,1,1,0,0,1}, //3
    {0,1,1,0,0,1,1}, //4
    {1,0,1,1,0,1,1}, //5
    {1,0,1,1,1,1,1}, //6
    {1,1,1,0,0,0,0}, //7
    {1,1,1,1,1,1,1}, //8
    {1,1,1,1,0,1,1} //9
};
  
  
void setup()
{
  for(int i=2;i<=8;i++)
  	pinMode(i,OUTPUT);
}

void loop()
{
  for(int i=0;i<10;i++)
  {
    pin = 2;
    for(int j = 0;j<7;j++)
    {
      digitalWrite(pin,gosterge[i][j]);
      pin++;
    }
    delay(sure);
    pin = 2;
    for(int j=0;j<7;j++)
    {
      digitalWrite(pin,0);
      pin++;
     }
    delay(200);
   }
}
