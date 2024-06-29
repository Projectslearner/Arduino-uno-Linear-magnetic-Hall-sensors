/*
    Project name : Arduino Uno Linear Magnetic Hall Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-linear-magnetic-hall-sensor
*/

const int hallSensorPin = A0;   // Analog pin connected to the Hall sensor

void setup() {
  Serial.begin(9600);    // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(hallSensorPin);  // Read analog value from Hall sensor

  Serial.print("Magnetic Field Strength: ");
  Serial.println(sensorValue);  // Print sensor value to Serial Monitor

  delay(1000);  // Delay for 1 second
}
