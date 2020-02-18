const int sensorPin = A0;  // Analog input pin that the photoresistor is attached to
const int LEDPin = 10; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int  brightness = 0;        // value output to the PWM (analog out)

void setup() {
  pinMode(sensorPin, INPUT); //sets A0 to input
  pinMode(LEDPin, OUTPUT); //sets pin 10 to output
}

void loop() {
  // read the analog in value:
  // limits values to specified range
  sensorValue = analogRead(sensorPin);
  // map it to the range of the analog out:
  brightness = map(sensorValue, 500, 1023, 0, 255);
  // change the analog out value:
  if (brightness > 200) {  // check if there are more light in the physical world
      analogWrite(LEDPin, 0); // turn LED off
   } else {
      analogWrite(LEDPin, brightness); // change the analog out value for LED Strip
   }
  delay(1000); //delay
}
