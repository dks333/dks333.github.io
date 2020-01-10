void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);   // Connect Pin 12 to LED
  pinMode(11, OUTPUT);   // Connect Pin 11 to LED
  pinMode(10, OUTPUT);   // Connect Pin 10 to LED
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);  // turn the LED on by making the voltage high
  delay(200);              // wait for 1/5 second
  digitalWrite(12, LOW);   // turn the LED on by making the voltage low
  delay(200);              // wait for 1/5 second
  
  digitalWrite(11, HIGH);  // turn the LED on by making the voltage high
  delay(200);              // wait for 1/5 second
  digitalWrite(11, LOW);   // turn the LED on by making the voltage low
  delay(200);              // wait for 1/5 second

  digitalWrite(10, HIGH);  // turn the LED on by making the voltage high
  delay(200);              // wait for 1/5 second
  digitalWrite(10, LOW);   // turn the LED on by making the voltage low
  delay(200);              // wait for 1/5 second
}
