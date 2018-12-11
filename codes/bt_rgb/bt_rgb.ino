#include <SoftwareSerial.h>

SoftwareSerial serial1(10, 11); // RX, TX

int pinPortas[3] = {2, 3, 4}, porta, byteRecebido;

void setup() {
  serial1.begin(9600);
  Serial.begin(9600);

  for (int nP = 0; nP < 3; nP++) {
    pinMode(pinPortas[nP], OUTPUT);
    byte byteEnviar = nP + 1;
    byteEnviar = bitSet(bitSet(byteEnviar, 6), 5);
    serial1.println(byteEnviar);
  }
}

void loop() {
  if (serial1.available()) {
    int byteRecebido = serial1.parseInt();
    porta = int(serial1.read() - 65);
    ///analogWrite(pinPortas[porta], byteRecebido);

    for (int fadeValue = 0 ; fadeValue <= byteRecebido; fadeValue += 5) {
      analogWrite(pinPortas[porta], fadeValue);
      delay(30);
       Serial.println(fadeValue);
    }
    for (int fadeValue = byteRecebido ; fadeValue >= 0; fadeValue -= 5) {
      analogWrite(pinPortas[porta], fadeValue);
      delay(30);
      Serial.println(fadeValue); 
    }
  }Serial.println(byteRecebido);
}
