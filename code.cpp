#define BLYNK_TEMPLATE_ID "TMPL24nXtROor"
#define BLYNK_TEMPLATE_NAME "Smart Home"
#define BLYNK_AUTH_TOKEN "wKZnSoAUTgGGJYNFz5St-v1VyVe1SCkG"
#include <SimpleTimer.h>
#include <Servo.h>
#include <Wire.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
BlynkTimer timer;
Servo myservo; 
char auth[] = "wKZnSoAUTgGGJYNFz5St-v1VyVe1SCkG";
char ssid[] = "Y2024";
char pass[] = "2011@2024";

void setup()
{
  Blynk.begin(auth, ssid, pass); 
  pinMode(12, OUTPUT); // Initialise digital pin 2 as an output pin
  pinMode(13,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(15,OUTPUT);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
   myservo.attach(16);
   myservo.write(0);
}

BLYNK_WRITE(V0) // Executes when the value of virtual pin 0 changes
{
  if(param.asInt() == 1)
  {
    // execute this code if the switch widget is now ON
    digitalWrite(12,LOW);  // Set digital pin 2 HIGH
  }
  else
  {
    // execute this code if the switch widget is now OFF
    digitalWrite(12,HIGH);  // Set digital pin 2 LOW    
  }
}
BLYNK_WRITE(V1) // Executes when the value of virtual pin 0 changes
{
  if(param.asInt() == 1)
  {
    // execute this code if the switch widget is now ON
    digitalWrite(13,LOW);  // Set digital pin 2 HIGH
  }
  else
  {
    // execute this code if the switch widget is now OFF
    digitalWrite(13,HIGH);  // Set digital pin 2 LOW    
  }
}
BLYNK_WRITE(V2) // Executes when the value of virtual pin 0 changes
{
  if(param.asInt() == 1)
  {
    // execute this code if the switch widget is now ON
    digitalWrite(14,LOW);  // Set digital pin 2 HIGH
  }
  else
  {
    // execute this code if the switch widget is now OFF
    digitalWrite(14,HIGH);  // Set digital pin 2 LOW    
  }
}
BLYNK_WRITE(V3) // Executes when the value of virtual pin 0 changes
{
  if(param.asInt() == 1)
  {
    // execute this code if the switch widget is now ON
    digitalWrite(15,LOW);  // Set digital pin 2 HIGH
  }
  else
  {
    // execute this code if the switch widget is now OFF
    digitalWrite(15,HIGH);  // Set digital pin 2 LOW    
  }
}
BLYNK_WRITE(V4) // Executes when the value of virtual pin 0 changes
{
  if(param.asInt() == 1)
  {
    // execute this code if the switch widget is now ON
    myservo.write(110);  // Set digital pin 2 HIGH
  }
  else
  {
    // execute this code if the switch widget is now OFF
    myservo.write(0);  // Set digital pin 2 LOW    
  }
}
void loop()
{
    Blynk.run(); 
    timer.run();
}
