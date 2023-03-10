/*
Light Chaser Program 2
This program creates a light chaser effect using four LEDs connected to pins 13, 12, 11, and 10.
Using digitalWrite() function, each LED will turn ON and OFF sequentially with a delay of 100 milliseconds.
Adjust the delay time to control the speed pattern.
After the white LED turns off, the blue LED turns ON again and the sequence repeats in reverse.
This creates a loop where the LEDs sequentially turn ON and OFF and then reverse back to their initial state.
*/

// Define the pins that the LEDs are connected to.
int redLed = 13;
int greenLed = 12;
int blueLed = 11;
int whiteLed = 10;

void setup() {
// Initialize the LED pins as outputs
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
pinMode(blueLed, OUTPUT);
pinMode(whiteLed, OUTPUT);
}

void loop() {

digitalWrite(redLed, HIGH); // Turns on the red LED
delay(100); // Wait for a short time

digitalWrite(redLed, LOW); // Turns off the red LED
digitalWrite(greenLed, HIGH); // Turns on the green LED
delay(100); // Wait for a short time

digitalWrite(greenLed, LOW); // Turns off the green LED
digitalWrite(blueLed, HIGH); // Turns on the blue LED
delay(100); // Wait for a short time

digitalWrite(blueLed, LOW); // Turns off the blue LED
digitalWrite(whiteLed, HIGH); // Turns on the white LED
delay(100); // Wait for a short time

digitalWrite(whiteLed, LOW); // Turns off the white LED

digitalWrite(blueLed, HIGH); // Turns on the blue LED again
delay(100); // Wait for a short time

digitalWrite(blueLed, LOW); // Turns off the blue LED
digitalWrite(greenLed, HIGH); // Turns on the green LED again
delay(100); // Wait for a short time

digitalWrite(greenLed, LOW); // Turns off the green LED
}
