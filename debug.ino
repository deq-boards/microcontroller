void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 baud
}

void loop() {
  if (Serial.available() > 0) {      // Check if data is available to read
    char receivedChar = Serial.read(); // Read the incoming byte
    Serial.print(receivedChar);        // Echo the byte back over Serial
  }
}
