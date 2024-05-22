void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  int ldr_sensor = analogRead(A0);// read the input on analog pin 0:


  Serial.println(ldr_sensor);
  delay(1);  // delay in between reads for stability
}
