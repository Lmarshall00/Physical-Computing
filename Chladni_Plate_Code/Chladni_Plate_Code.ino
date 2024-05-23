void setup() {
  // initialize serial communications
  Serial.begin(9600);
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorReading);

  // change the minimum and maximum input numbers below depending on the range
  // your sensor's giving:
  int thisPitch = map(sensorReading, 0, 1013, 31, 4978);

  // play the pitch:
  tone(9, thisPitch, 10);
  delay(1);  // delay in between reads for stability
}
