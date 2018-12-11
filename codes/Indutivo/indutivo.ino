int sensorPin = 52; // select the input pin for the potentiometer
int ledPin = 13; // select the pin for the LED
int sensorValue ; // variable to store the value coming from the sensor

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  sensorValue = digitalRead(sensorPin);
}
void loop() {
  sensorValue = digitalRead(sensorPin);
if (sensorValue == HIGH ) {
    digitalWrite(ledPin, HIGH);
} else {
    digitalWrite(ledPin, LOW);
}
Serial.print(sensorValue);
  delay(1000);
}
