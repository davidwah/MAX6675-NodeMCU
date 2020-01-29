
#include <ESP8266WiFi.h>
#include "max6675.h"

float setpoint = 3.0;

int thermoDO = 3;
int thermoCS = 2;
int thermoCLK = 0;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

//const char* ssid     = "SSID";
//const char* password = "PASSWD";


void setup() {
  Serial.begin(115200);
  delay(100);

  //Connecting to a WiFi network
  Serial.println("==============");
  Serial.print("Connecting to ==>");
  Serial.println(ssid);
  Serial.println("==============");
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
}

int value = 0;

void loop() {
  delay(5000);
  ++value;
  
  WiFiClient client;

  float tempMeasurement = thermocouple.readCelsius();
  String temp = String(tempMeasurement);
  String sp = String(setpoint);
    
  // delays 5 secs
  delay(2500);
  delay(2500);
}
