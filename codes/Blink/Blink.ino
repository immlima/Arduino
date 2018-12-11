#define Red 13

void setup()
{
  pinMode(Red,OUTPUT);
  digitalWrite(Red,LOW);
}

void loop()
{
//Blinking
  digitalWrite(Red,HIGH);
   delay(1000);
 digitalWrite(Red,LOW);
   delay(1000);
}
