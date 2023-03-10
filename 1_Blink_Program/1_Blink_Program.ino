// Arduino LED Blink Program

// This program demonstrates how to make an LED blink using an Arduino board.
// The LED is connected to pin 13 on the board and will blink on and off continuously.
// Each blink will last for 1 second.

void setup() {
  pinMode(13, OUTPUT);  // Initialize pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn the LED on
  delay(1000);             // Wait for 1 second

  digitalWrite(13, LOW);   // Turn the LED off
  delay(1000);             // Wait for 1 second
}