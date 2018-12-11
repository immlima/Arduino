int sensor=2;
int RGB1R =8;
int RGB1G =9;

void setup() {
  pinMode(sensor,INPUT);
  pinMode(RGB1R, OUTPUT);
  pinMode(RGB1G, OUTPUT);
  

  digitalWrite(RGB1R,HIGH);
  
  digitalWrite(RGB1G,LOW);
  

}

void loop() {
  if(digitalRead(sensor)==HIGH){
  digitalWrite(RGB1R,LOW);
  
  digitalWrite(RGB1G,HIGH);
  
    
  }else {

    digitalWrite(RGB1R,HIGH);
    digitalWrite(RGB1G,LOW);
  
    
    }
  

}
