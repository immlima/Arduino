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

  serial1.print("*T" + String(temp) + "*");
  serial1.print("*H" + String(hum) + "*");

  delay(500);

}
