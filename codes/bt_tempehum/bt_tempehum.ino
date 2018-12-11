#include <SoftwareSerial.h>
#include <DHT.h>
#include <DHT_U.h>

SoftwareSerial serial1(10, 11); // RX, TX


int sensor = 12;
int temp, hum;
DHT dht (sensor, DHT11);

void setup() {
  serial1.begin(9600);
  Serial.begin(9600);
  dht.begin();

}
void loop() {
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  /*
    Serial.write("*T");
    //Serial.print("\t");
    Serial.write(temp);
    //Serial.print("\n");

    Serial.write("*H%d");
    //Serial.print("\t");
    Serial.write(hum);
    //Serial.print("\n");

  */

  Serial.write(temp);
  Serial.write("\n");

  Serial.write(hum);
  Serial.write("\n");


  delay(5000);

}
