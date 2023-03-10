int ledR = 9;         // the PWM pin the LED is attached to
int ledG = 3;         // the PWM pin the LED is attached to
int ledB = 5;         // the PWM pin the LED is attached to
void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(ledR, 155);
analogWrite(ledG, 6);
analogWrite(ledB, 125);
}
