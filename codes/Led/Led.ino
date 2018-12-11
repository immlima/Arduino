int bu = 2;
int gri = 3;
int red = 4;

void setup() {
  pinMode(bu, OUTPUT);
  pinMode(gri, OUTPUT); 
  pinMode (red,OUTPUT);
  
  digitalWrite(bu, LOW);
  digitalWrite(gri, LOW);
  digitalWrite(red, LOW); 
  
}

void loop() {
   analogWrite(bu, random(255));
  analogWrite(red, random(255));
  analogWrite(gri, random(255));
  
   delay(25);  
 
}
