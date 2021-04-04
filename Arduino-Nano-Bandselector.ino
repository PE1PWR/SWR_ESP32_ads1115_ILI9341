
// Software is free for use. This is software for change the band plan of a LPF filter HF.
// Relais I use are spool with read contact directly on a D output Nano Arduino.
#include <Wire.h>
#include <Adafruit_GFX.h>

int analogIn = A0;  // Analoge input van de potmeter
int potmeter = 0;   // waarde te meten van A0 noemen we potmeter
const int relayA = 6;
const int relayB = 7;
const int relayC = 2;
const int relayD = 3;
const int relayE = 4;
const int relayF = 5;


void setup() {
 
Serial.begin(6900); 
pinMode(relayA, OUTPUT);
pinMode(relayB, OUTPUT);
pinMode(relayC, OUTPUT);
pinMode(relayD, OUTPUT);
pinMode(relayE, OUTPUT);
pinMode(relayF, OUTPUT);

}

void loop() {
 potmeter = analogRead(analogIn);
  if ((potmeter >=0) && (potmeter <= 150)) // 160m band
          {
         digitalWrite(relayA, HIGH);
         }         
           else 
           { 
           digitalWrite(relayA, LOW);  
           }      
    if ((potmeter >=200) && (potmeter <=300)) // 80M band                
          { 
          digitalWrite(relayB, HIGH);  
          }
         else 
           { 
           digitalWrite(relayB, LOW);
           }
         
   if ((potmeter >=350) && (potmeter <= 450)) // 7 en 10M band
          {
         digitalWrite(relayC, HIGH);
         }         
           else 
           { 
           digitalWrite(relayC, LOW);  
           }      
    if ((potmeter >=500) && (potmeter <= 550)) // 20m band                 
          { 
          digitalWrite(relayD, HIGH);  
          }
         else 
           { 
           digitalWrite(relayD, LOW);
           }

   if ((potmeter >=600) && (potmeter <= 700)) // 17 en 15M band
          {
         digitalWrite(relayE, HIGH);
         }         
           else 
           { 
           digitalWrite(relayE, LOW);  
           }      
   if ((potmeter >=800) && (potmeter <= 1023))// 13 en 10m band                 
          { 
          digitalWrite(relayF, HIGH);  
          }
         else 
           { 
           digitalWrite(relayF, LOW);
           }


} 
