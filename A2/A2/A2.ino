
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  11;      // the number of the LED pin

// variables will change
int buttonState = 0; // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on and do fade animation:
    digitalWrite(ledPin, HIGH);
    for(int i = 0; i < 150;i++){   // Set LED from brightness 0 to 150
      analogWrite(11, i);          // Light LED at brightness i
      delay(10);                   // Delay for 0.01 second
   }
   for(int i = 150; i >= 0;i--){   // Set LED from brightness 150 to 0
      analogWrite(11, i);          // Light LED at brightness i
      delay(10);                   // Delay for 0.01 second
   }
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  } 

}
