/*
  Program to control an RGB led using a pushbutton
  When the pushbutton is not pressed, the RGB led is green and red. When the pushbutton is pressed, the RGB led is green and blue.
  Pushbutton state is displayed on Serial Monitor.
*/

// Declare pins
int pushButton = 6;
int Red   = 13;
int Green = 12;
int Blue  = 10;

void setup() {
  pinMode(pushButton, INPUT_PULLUP);   // Set pushButton as input with pullup resistor
  pinMode(Red,   OUTPUT);             // Set Red pin as output
  pinMode(Green, OUTPUT);             // Set Green pin as output
  pinMode(Blue,  OUTPUT);             // Set Blue pin as output
  Serial.begin(9600);                 // Start Serial communication
}

void loop() {
  int buttonState = digitalRead(pushButton); // Read pushButton state and store in variable

  digitalWrite(Red, HIGH);              // Turn on Red
  digitalWrite(Green, buttonState);     // Turn on Green if pushButton is not pressed
  digitalWrite(Blue, !buttonState);     // Turn on Blue if pushButton is pressed

  // Display pushButton's state on the Serial Monitor
  Serial.print("PB=");                  // Print label for pushButton's state
  Serial.print("\t");                   // Add tab space for easier reading
  Serial.println(buttonState);          // Display pushButton's state
}
