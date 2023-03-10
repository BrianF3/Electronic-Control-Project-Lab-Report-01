/*
  Arduino PB pulldown (value displayed on serial monitor)
  This program configures a pushButton on the Arduino board's pin 5 and displays the state of the button on the Serial Monitor.
  An external pulldown resistor is connected to the pin.
  The pin is in INPUT mode.
  When pushButton is not pressed it reads LOW (0), and HIGH (1) when pushButton is pressed.
*/

// Define the pin number for the pushButton
int pushButton = 5;

void setup() {
  pinMode(pushButton, INPUT);   // Initialize pin as an INPUT
  Serial.begin(9600);   // Initialize Serial Monitor
}

void loop() {
  int buttonState = digitalRead(pushButton);  // Read pushButton's state
  Serial.print("PB = ");                      // Print a label for pushButton's state
  Serial.print("\t");                         // Add a tab space
  Serial.println(buttonState);                // Display pushButton's state on the Serial Monitor
}