/*
  Program to control an RGB led using a pushbutton
  When the pushbutton is not pressed, the RGB led is green and red. When the pushbutton is pressed, the RGB led is green and blue.
  Pushbutton state is displayed on Serial Monitor.
*/

// Declare pins
const int PUSH_BUTTON_PIN = 6;
const int RED_PIN = 13;
const int GREEN_PIN = 12;
const int BLUE_PIN = 10;

void setup() {
  pinMode(PUSH_BUTTON_PIN, INPUT);     // Set pushButton as regular input
  pinMode(RED_PIN, OUTPUT);            // Set Red pin as output
  pinMode(GREEN_PIN, OUTPUT);          // Set Green pin as output
  pinMode(BLUE_PIN, OUTPUT);           // Set Blue pin as output
  Serial.begin(9600);                  // Start Serial communication
}

void loop() {
  int buttonState = digitalRead(PUSH_BUTTON_PIN); // Read pushButton state and store in variable

  digitalWrite(RED_PIN, HIGH);          // Turn on Red
  digitalWrite(GREEN_PIN, buttonState); // Turn on Green if pushButton is not pressed
  digitalWrite(BLUE_PIN, !buttonState);// Turn on Blue if pushButton is pressed

  // Display pushButton's state on the Serial Monitor
  Serial.print("Pushbutton state: ");   // Print label for pushButton's state
  Serial.println(buttonState);          // Display pushButton's state
}
