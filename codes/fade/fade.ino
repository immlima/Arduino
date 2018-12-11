int red = 4; //this sets the red led pin
int green = 3; //this sets the green led pin
int blue = 2; //this sets the blue led pin
int flickerLED = 8; // flicker on pin 8

int redNow;
int blueNow;
int greenNow;
int redNew;
int blueNew;
int greenNew;
int flickertime;

void setup()
{ //this sets the output pins
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(flickerLED,OUTPUT);
redNow = random(255);
blueNow = random(255);
greenNow = random(255);
redNew = redNow;
blueNew = blueNow;
greenNew = greenNow;
}

#define fade(x,y) if (x>y) x--; else if (x
void loop()
{
analogWrite(blue, blueNow);
analogWrite(red, redNow);
analogWrite(green, greenNow);
redNew = random(255);
blueNew = random(255);
greenNew = random(255);
// fade to new colors
while ((redNow != redNew) ||
(blueNow != blueNew) ||
(greenNow != greenNew))
{
fade(redNow,redNew)
fade(blueNow,blueNew)
fade(greenNow,greenNew)
analogWrite(blue, blueNow);
analogWrite(red, redNow);
analogWrite(green, greenNow);

flickertime = random(20);
digitalWrite(flickerLED,HIGH);
delay(flickertime);
digitalWrite(flickerLED,LOW);
delay(20-flickertime);
}
}
