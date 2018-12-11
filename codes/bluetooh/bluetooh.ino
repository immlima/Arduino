// Carrega a biblioteca SoftwareSerial

#include <SoftwareSerial.h>   

// Define os pinos para a serial  

SoftwareSerial MinhaSerial(18, 19);

// RX, TX  String command = "";     

void setup()   { 

Serial.begin(115200);

Serial.println("Digite os comandos AT :");   

// Inicia a serial configurada nas portas 6 e 7  

MinhaSerial.begin(38400); 

}    

void loop()  {   

// Verifica se ha comunicacao com o modulo e efetua a leitura

if (MinhaSerial.available()) {      

while(MinhaSerial.available())  {       

command += (char)MinhaSerial.read();      

}    

Serial.println(command);     command = "";  

}     

// Envio de comandos  

if (Serial.available())   {    

delay(10);    

MinhaSerial.write(Serial.read());   

} 

}
