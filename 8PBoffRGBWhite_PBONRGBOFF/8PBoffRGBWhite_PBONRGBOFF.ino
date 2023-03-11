/*
  This program reads the state of a push button connected to pin 6 and controls an RGB LED connected to pins 13, 12, and 10.
  When the push button is not pressed, the RGB LED is turned on and displays a white light (all colors on).
  When the push button is pressed, the RGB LED is turned off.

  The state of the push button is displayed on the Serial Monitor for troubleshooting purposes.
*/

//declare variables for the pins
int pushButton = 6;  //push button pin is connected to pin 6
int Red = 13;        //red pin is connected to pin 13
int Green = 12;      //green pin is connected to pin 12
int Blue = 10;       //blue pin is connected to pin 10

void setup() {
  pinMode(pushButton, INPUT_PULLUP);  //set push button pin as input with internal pull-up resistor enabled
  pinMode(Red, OUTPUT);   //set red pin as output
  pinMode(Green, OUTPUT); //set green pin as output
  pinMode(Blue, OUTPUT);  //set blue pin as output
  Serial.begin(9600);     //initialize Serial Monitor with baud rate of 9600
}

void loop() {
  int buttonState = digitalRead(pushButton);  //read push button pin's state and store the result in the buttonState variable
  if (buttonState == HIGH) {  //if push button is not pressed
    digitalWrite(Red, HIGH);   //turn on red LED
    digitalWrite(Green, HIGH); //turn on green LED
    digitalWrite(Blue, HIGH);  //turn on blue LED
  } else {                    //if push button is pressed
    digitalWrite(Red, LOW);    //turn off red LED
    digitalWrite(Green, LOW);  //turn off green LED
    digitalWrite(Blue, LOW);   //turn off blue LED
  }

  //display push button's state on the Serial Monitor for troubleshooting
  Serial.print("Push Button State: ");  //print label for push button's state
  Serial.println(buttonState);          //display push button's state on the Serial Monitor
}