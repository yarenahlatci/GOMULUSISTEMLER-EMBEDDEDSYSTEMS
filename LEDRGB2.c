#define kirmizi 8
#define mavi 9
#define yesil 10
int sure = 1000;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop()
{
  //Beyaz renk
    analogWrite(kirmizi,255);
  	analogWrite(yesil,255);
	analogWrite(mavi,255);
	delay(sure);
  //Kirmizi renk
	analogWrite(kirmizi,255);
  	analogWrite(yesil,0);
	analogWrite(mavi,0);
	delay(sure);
  //Yeþil renk
 	analogWrite(kirmizi,0);
  	analogWrite(yesil,255);
	analogWrite(mavi,0);
	delay(sure);
  //Mavi renk
 	analogWrite(kirmizi,0);
  	analogWrite(yesil,0);
	analogWrite(mavi,255);
	delay(sure);
  //Sari renk
    analogWrite(kirmizi,255);
  	analogWrite(yesil,255);
	analogWrite(mavi,0);
	delay(sure);
}
