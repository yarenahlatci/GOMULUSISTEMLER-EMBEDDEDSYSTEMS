#define kirmizi 8
#define mavi 9
#define yesil 10
int sure = 1000;
int rk,ry,rm;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop()
{
  	rk = random(255);
  	ry = random(255);
 	rm = random(255);
  //Kirmizi renk
	analogWrite(kirmizi,rk);
  	analogWrite(yesil,0);
	analogWrite(mavi,0);
	delay(sure);
  //Yeþil renk
 	analogWrite(kirmizi,0);
  	analogWrite(yesil,ry);
	analogWrite(mavi,0);
	delay(sure);
  //Mavi renk
 	analogWrite(kirmizi,0);
  	analogWrite(yesil,0);
	analogWrite(mavi,rm);
	delay(sure);
}
