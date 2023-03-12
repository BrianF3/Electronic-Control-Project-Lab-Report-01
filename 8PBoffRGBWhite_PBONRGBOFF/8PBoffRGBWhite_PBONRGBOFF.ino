/*
  This program reads the state of a push button connected to pin 6 and controls an RGB LED connected to pins 13, 12, and 10.
  When the push button is not pressed, the RGB LED is turned on and displays a white light (all colors on).
  When the push button is pressed, the RGB LED is turned off.

  The state of the push button is displayed on the Serial Monitor for troubleshooting purposes.
*/

// Declare pin variables
const int PUSH_BUTTON_PIN = 6;  // Push button pin is connected to pin 6
const int RED_PIN = 13;        // Red pin is connected to pin 13
const int GREEN_PIN = 12;      // Green pin is connected to pin 12
const int BLUE_PIN = 10;       // Blue pin is connected to pin 10

void setup() {
  pinMode(PUSH_BUTTON_PIN, INPUT);  // Set push button pin as regular input
  pinMode(RED_PIN, OUTPUT);        // Set red pin as output
  pinMode(GREEN_PIN, OUTPUT);      // Set green pin as output
  pinMode(BLUE_PIN, OUTPUT);       // Set blue pin as output
  Serial.begin(9600);              // Initialize Serial Monitor with baud rate of 9600
}

void loop() {
  int buttonState = digitalRead(PUSH_BUTTON_PIN);  // Read push button pin's state and store the result in the buttonState variable
  if (buttonState == HIGH) {  // If push button is not pressed
    digitalWrite(RED_PIN, HIGH);   // Turn on red LED
    digitalWrite(GREEN_PIN, HIGH); // Turn on green LED
    digitalWrite(BLUE_PIN, HIGH);  // Turn on blue LED
  } else {                    // If push button is pressed
    digitalWrite(RED_PIN, LOW);    // Turn off red LED
    digitalWrite(GREEN_PIN, LOW);  // Turn off green LED
    digitalWrite(BLUE_PIN, LOW);   // Turn off blue LED
  }

  // Display push button's state on the Serial Monitor for troubleshooting
  Serial.print("Push button state: ");  // Print label for push button's state
  Serial.println(buttonState);          // Display push button's state on the Serial Monitor
}
