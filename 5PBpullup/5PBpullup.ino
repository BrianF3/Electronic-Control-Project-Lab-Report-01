/*
  Arduino Pull-Up Resistor Example
  This program configures a push button on the Arduino board's pin 5 and displays the state of the button on the Serial Monitor.
  A pull-up resistor is connected to the pin.
  The pin is set to INPUT mode.
  When the push button is not pressed, the pin reads HIGH (1), and LOW (0) when the push button is pressed.
*/

// Define the pin number for the push button
int pushButton = 5;

void setup() {
  pinMode(5, INPUT);    // Set pin 5 as an INPUT
  Serial.begin(9600);   // Initialize the Serial Monitor
}

void loop() {
  int buttonState = digitalRead(pushButton);   // Read the state of the push button
  Serial.print("PB=");                         // Print a label for the push button's state
  Serial.print("\t");                          // Add a tab space
  Serial.println(buttonState);                 // Display the push button's state on the Serial Monitor
}