int sensorPin = 3; // select the input pin for the potentiometer
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
if (sensorValue == true ) {
    digitalWrite(ledPin, HIGH);
} else {
    digitalWrite(ledPin, LOW);
}
  delay(500);
}
