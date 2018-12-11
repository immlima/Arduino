/* Projeto para automatizar o ar condicionado V1.0
 *  
 */

#include <DHT.h>
#include <DHT_U.h>

int led =13;
int sensor = 52;
int rele = 22 ;
int Max_temp = 25;
int Min_temp = 20;

int temp;
DHT dht (sensor,DHT11);
void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(led,OUTPUT);
  pinMode(rele,OUTPUT);
  digitalWrite(led,LOW);

}

void loop() {
  temp = dht.readTemperature();
   
   Serial.print("Temperatura : ");
   Serial.print(temp);
   Serial.println("oC");
   
   
   if (temp >=Max_temp)
    {
      digitalWrite(led,HIGH);
      digitalWrite(rele,HIGH);
    }
    if (temp <Min_temp)
    {
      digitalWrite(led,LOW);
      digitalWrite(rele,LOW);
    }
}
