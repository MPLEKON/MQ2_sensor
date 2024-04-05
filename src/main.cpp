#include <Arduino.h>

#define MQ2_pin 1
float MQ_sensor_value;

void setup() {
  Serial.begin(115200);
  Serial.print("Sensor warming up");
  delay(2000);
}



void loop() {
  MQ_sensor_value = analogRead(MQ2_pin);
  Serial.print("Sensor value: ");
  Serial.print(MQ_sensor_value);
  delay(1000);
  
}

