int buzz = 13;
int i = 0;
int tons [] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};

void setup() {
  pinMode(buzz, OUTPUT);
  
  for (i=0; i<12;i++)
  {
   pinMode(i, INPUT); 
  }
  

}

void loop(){
  
  for(i=0; i<12; i++){
   if (digitalRead(i)==HIGH){
    tone(buzz, tons[i]);
    delay(1000);
   } 
  }
  noTone(buzz);
}


