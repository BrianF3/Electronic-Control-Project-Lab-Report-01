/*
  Arduino PB pullup (value displayed on serial monitor)
  This program configures a pushButton on the Arduino board's pin 5 and enables the built-in pullup resistor by setting it as an INPUT_PULLUP.
  When pushButton is not pressed it reads HIGH (1).
  When pushButton is pressed it reads LOW (0).
  The state of the pushButton will be displayed on the Serial Monitor.
*/ 

// Define the pin number for the pushButton
int pushButton = 5;

void setup() {
  pinMode(pushButton, INPUT_PULLUP);  // Initialize pin as an INPUT_PULLUP
  Serial.begin(9600);                 // Initialize Serial Monitor
}

void loop() {
  int buttonState = digitalRead(pushButton);  // Read pushButton's state
  Serial.print("PB = ");                      // Print a label for pushButton's state
  Serial.print("\t");                         // Add a tab space
  Serial.println(buttonState);                // Display pushButton's state on the Serial Monitor
}