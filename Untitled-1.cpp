const int hallSensorPin = 2;  // Hall Effect sensor connected to digital pin 2
int hallSensorState;          // Variable to store the state of the sensor

void setup() {
  Serial.begin(9600);                // Start serial communication at 9600 baud
  pinMode(hallSensorPin, INPUT);     // Set the Hall Effect sensor pin as an INPUT
}

void loop() {
  hallSensorState = digitalRead(hallSensorPin); // Read the state of the sensor

  // Check if the sensor is detecting a magnetic field
  if (hallSensorState == HIGH) {
    Serial.println("Magnetic field detected!"); // If yes, print this message
  } else {
    Serial.println("No magnetic field detected."); // If no, print this message
  }

  delay(1000); // Wait for 1 second before the next read
}