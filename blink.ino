/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(13, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  encapsulated_delay();    
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  encapsulated_delay2(); 
}

void encapsulated_delay() {
  delay(3554);
}


void encapsulated_delay2() {
  delay(3554);
}
