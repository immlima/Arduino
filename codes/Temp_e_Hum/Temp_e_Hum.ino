#include <DHT.h>
#include <DHT_U.h>


int led =13;
int sensor = 12;
int temp, hum, mr=-99,mn=99;

DHT dht (sensor,DHT11);
void setup() {
  Serial.begin(9600);
  dht.begin();
 pinMode(led,OUTPUT);
digitalWrite(led,LOW);
}

void loop() {
  hum= dht.readHumidity();
  temp = dht.readTemperature();
   if (temp>mr){mr=temp;}
   if (temp<mn){mn=temp;}
  
   Serial.print("Temperatura : ");
   Serial.print(temp);
   Serial.println("oC");

   
   Serial.print("Humidade : ");
   Serial.print(hum);
   Serial.println("%");
    
   Serial.print("Max : ");
   Serial.print(mr);
   Serial.print("oC");
   Serial.println(" ");

   Serial.print("Min : ");
   Serial.print(mn);
   Serial.println("oC");
   Serial.println(" ");

  if (temp>30)
  { 
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
  }
    delay(500);
}
