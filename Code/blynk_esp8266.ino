// Blynk is a platform with iOS and Android apps to control
//   ESP32, Arduino, Raspberry Pi and the likes over the Internet.
//   You can easily build mobile and web interfaces for any
//   projects by simply dragging and dropping widgets.

//     Downloads, docs, tutorials: https://www.blynk.io
//     Sketch generator:           https://examples.blynk.cc
//     Blynk community:            https://community.blynk.cc
//     Follow us:                  https://www.fb.com/blynkapp
//                                 https://twitter.com/blynk_app

//   Blynk library is licensed under MIT license
//   This example code is in public domain.

//  *********************
//   This example runs directly on ESP8266 chip.

//   NOTE: This requires ESP8266 support package:
//     https://github.com/esp8266/Arduino

//   Please be sure to select the right ESP8266 module
//   in the Tools -> Board menu!

//   Change WiFi ssid, pass, and Blynk auth token to run :)
//   Feel free to apply it to any other example. It's simple!
//  *********************/

// /* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_NAME "test"
#define BLYNK_AUTH_TOKEN "Cr7vOWRnV0PyGu1hg3B5y_qXQVawqcNN"
#define BLYNK_TEMPLATE_ID "TMPL3oJog9gJX"
/* Fill in information from Blynk Device Info here */
#include <SPI.h>
#include <Ethernet.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "2345";       // Your WiFi SSID
char pass[] = "555555555";   // Your WiFi Password

int redled = 16; // d0
int blueled = 5;  // d1
int buzzer = 4; // d2
int motor = 12; // d6

int solenoid = 14; //d5

int waterflow = 0;  
int turbidity = 0; 
int waterlevel =0; 
BLYNK_WRITE(V3)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue== 1){
    digitalWrite(motor,HIGH);
    Serial.println("ON");
  }
  if(pinValue == 0){
    digitalWrite(motor,LOW);
    Serial.println("OFF");
  }
  // process received value
}

BLYNK_WRITE(V4)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue== 1){
    digitalWrite(solenoid,HIGH);
    Serial.println("ON");
  }
  if(pinValue == 0){
    digitalWrite(solenoid,LOW);
    Serial.println("OFF");
  }
  // process received value
}


void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(redled,OUTPUT);
  pinMode(blueled,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(motor,OUTPUT);
  pinMode(solenoid,OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n'); // Read the entire line
    int commaIndex = data.indexOf(',');         // Find the comma delimiter

    // Parse the two sensor values
    if (commaIndex > 0) {
      waterflow = data.substring(0, commaIndex).toInt(); // Value before the comma
      turbidity = data.substring(commaIndex + 1).toInt(); // Value after the comma
       waterlevel = data.substring(commaIndex + 2).toInt(); // Value after the 
      
      // Send the values to Blynk
      Blynk.virtualWrite(V0,waterflow); // Send sensor 1 value to Virtual Pin V1
      Blynk.virtualWrite(V1, turbidity);
      Blynk.virtualWrite(V2,waterlevel); 

      if(turbidity < 300){
      
        digitalWrite(redled,HIGH);

       digitalWrite(buzzer,HIGH);


      }
      else{
         digitalWrite(redled,LOW);

       digitalWrite(buzzer,LOW);
        digitalWrite(blueled,HIGH);

       

      }
      
   
      // Send sensor 2 value to Virtual Pin V2
    }
  }
}
