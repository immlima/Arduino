#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>



int sensor= 2;
int temp, hum,mint=8000,maxt=-278,minh=101,maxh=0;



DHT dht(sensor, DHT11);
void setup() {

Serial.begin(9600);

dht.begin();
}

void loop() {
 hum=dht.readHumidity();

 temp = dht.readTemperature();

 if (temp>maxt)
 {maxt=temp;
  }

  if (temp<mint)
  {
   mint=temp;
    }

     if (hum>maxh)
 {maxh=hum;
  }

  if (hum<minh)
  {
   minh=hum;
    }



 

 Serial.println ("------------Temperatura-------------");
 Serial.print  ("Temperatura:   "); Serial.print(temp);Serial.println("ºC");
 Serial.print  ("Max Temperatura:    "); Serial.print(maxt);Serial.println("ºC");
 Serial.print  ("Min Temperatura:    "); Serial.print(mint);Serial.println("ºC");
 Serial.println("------------------------------------");
 Serial.println("");


 Serial.println ("--------------Umidade--------------");
 Serial.print  ("Umidade:   "); Serial.print(hum);Serial.println("%");
 Serial.print  ("Max umidade:    "); Serial.print(maxh);Serial.println("%");
 Serial.print  ("Min umidade:    "); Serial.print(minh);Serial.println("%");
 Serial.println("------------------------------------");
 Serial.println("");

 delay(1000);
}
