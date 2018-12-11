int but = 2;
int laser = 3;

void setup() {
 pinMode (but, INPUT);
 pinMode (laser, OUTPUT);
 digitalWrite (laser, LOW);

}

void loop() {
  while(digitalRead(but)==LOW);
  digitalWrite(laser, HIGH);
  while(digitalRead(but)==HIGH);
  digitalWrite(laser, LOW);

}
