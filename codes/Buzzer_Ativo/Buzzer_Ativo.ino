

int sensor = 2;
int i;

void setup() {
  pinMode (sensor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(i=0;i<=255;i++){
  
// Serial.printf(i,": ");
// Serial.printf(": ");
   Serial.print((i*100)/255);
   Serial.println("%");
   analogWrite(sensor, i);
   delay(50);
   analogWrite(sensor, 0);
   delay(50);
  
  /*
  if (i%2==0)
   {
    if (i%4==0){
        digitalWrite(sensor,HIGH);
        delay(5000);
        digitalWrite(sensor,LOW);
        delay(5000);
        digitalWrite(sensor,HIGH);
        delay(5000);
        digitalWrite(sensor,LOW);
        delay(5000);
      }else{
        digitalWrite(sensor,HIGH);
        delay(1000);
        digitalWrite(sensor,LOW);
        delay(1000);
      }
   delay(500);
   }
  Serial.print((i*100)/255);
   Serial.println("%"); 
   */
   
   }

}
