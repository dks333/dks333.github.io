void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // initialize serial communications at 9600 bps
  pinMode(2, OUTPUT);  // initialize the LED pin as an output
  pinMode(3, OUTPUT);  // initialize the LED pin as an output:
  pinMode(A0, INPUT);  // initialize the Photoresistor pin as an input:
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);   // Turn blue LED on
  int inputValue = analogRead(A0); // read the analog in value
  int outputValue = map(inputValue, 500, 1023, 0, 255); // map it to the range of the analog out
  
  if (outputValue > 200) {  // check if there are less light
    analogWrite(2, outputValue); // change the analog out value for blue LED
    analogWrite(3, 0);   // dim the white LED
  } else {
    analogWrite(3, outputValue); // change the analog out value for white
    analogWrite(2, 0);   // dim the blue LED
  }

  
  
  // print the results to the Serial Monitor:
  Serial.print("output = ");
  Serial.print(outputValue);  // print output value of the 
  Serial.println("");  // print on next line

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);

}
