/*
  Questo sketch permette di leggere il valore della temperatura da un sensore TMP36 
  connesso ad un Arduino MKR1000 e di inviare il valore al monitor seriale.
  
  This example code is in the public domain.
*/

int sensorPin = A0;     
int sensorValue = 0;    
float temperature = 0.0;  
float voltage = 0.0; 

void setup() { 
Serial.begin(9600); 
analogReadResolution(10); 
} 

void loop() { 
sensorValue = analogRead(sensorPin); 
Serial.print("sensorValue = "); 
Serial.print(sensorValue); 
voltage = sensorValue * (3300/1024); 
Serial.print(" voltage = "); 
Serial.print(voltage); 
temperature = (voltage - 500 ) / 10; 
Serial.print(" temperature(C) = "); 
Serial.println(temperature); 
delay(1000); 
} 
