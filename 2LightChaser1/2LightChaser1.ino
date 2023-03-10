/*
  Light Chaser Program 1
  This program creates a light chaser effect using four LEDs connected to pins 13, 12, 11, and 10.
  Using digitalWrite() function, each LED will turn ON and OFF sequentially with one second delay.
  Vary the delay time to adjust the speed pattern.
*/

// Define the pins that the LEDs are connected to.
int redLed   = 13;
int greenLed = 12;
int blueLed  = 11;
int whiteLed = 10;

void setup() {
  // Initialize the LED pins as outputs 
  pinMode(redLed,   OUTPUT); 
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed,  OUTPUT);
  pinMode(whiteLed, OUTPUT);
}

void loop() {  
  digitalWrite(redLed, HIGH);   // redLed turns ON
  delay(1000);                  // wait for a second
  digitalWrite(redLed, LOW);    // redLed turns OFF
  
  digitalWrite(greenLed, HIGH); // greenLed turns ON
  delay(1000);                  // wait for a second
  digitalWrite(greenLed, LOW);  // greenLed turns OFF
  
  digitalWrite(blueLed, HIGH);  // blueLed turns ON
  delay(1000);                  // wait for a second 
  digitalWrite(blueLed, LOW);   // blueLed turns OFF
  
  digitalWrite(whiteLed, HIGH); // whiteLed turns ON
  delay(1000);                  // wait for a second
  digitalWrite(whiteLed, LOW);  // whiteLed turns OFF
}