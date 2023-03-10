/*
   RGB Chaser Program
   This program creates an RGB light chaser effect with colors of Red, Green, and Blue connected to pins 10, 12, and 13.
   Each color will turn On and OFF sequentially with one second delay.
   Vary the delay time to adjust the speed pattern.
   digitalWrite() function is used to set the brightness of each color.
   HIGH value represents full brightness, while LOW represents off state.
   Vary the values of Red, Blue, and Green to create different colors.
*/

// define the pin number for the RGB LED
int Red = 10;
int Green = 12;
int Blue = 13;

void setup() {
  // initialize pins as outputs
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

// the loop routine runs over and over again
void loop() {
  digitalWrite(Red, HIGH);   // pin 10 is set to HIGH, Red light is displayed
  digitalWrite(Green, LOW);  // pin 12 is set to LOW, no light
  digitalWrite(Blue, LOW);   // pin 13 is set to LOW, no light
  delay(1000);               // wait for a second

  digitalWrite(Red, LOW);    // pin 10 is set to LOW, no light
  digitalWrite(Green, HIGH); // pin 12 is set to HIGH, Green light is displayed
  digitalWrite(Blue, LOW);   // pin 13 is set to LOW, no light
  delay(1000);               // wait for a second

  digitalWrite(Red, LOW);    // pin 10 is set to LOW, no light
  digitalWrite(Green, LOW);  // pin 12 is set to LOW, no light
  digitalWrite(Blue, HIGH);  // pin 13 is set to HIGH, Blue light is displayed
  delay(1000);               // wait for a second

  // set the brightness of all pins 10(Red), 12(Green), & 13(Blue) to create White color
  digitalWrite(Red, HIGH);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, HIGH);
  delay(1000);               // wait for a second

  // turn back to Blue
  digitalWrite(Red, LOW);    // pin 10 is set to LOW, no light
  digitalWrite(Green, LOW);  // pin 12 is set to LOW, no light
  digitalWrite(Blue, HIGH);  // pin 13 is set to HIGH, Blue light is displayed
  delay(1000);               // wait for a second

  digitalWrite(Red, LOW);    // pin 10 is set to LOW, no light
  digitalWrite(Green, HIGH); // pin 12 is set to HIGH, Green light is displayed
  digitalWrite(Blue, LOW);   // pin 13 is set to LOW, no light
  delay(1000);               // wait for a second
}
