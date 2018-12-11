int led = 13;
int sensor = 10;
int valor;


void setup() {
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  pinMode (sensor, INPUT);
}

void loop() {
  valor = digitalRead(sensor);
  digitalWrite (led, valor);
  Serial.print (valor);
  delay (500);

}
