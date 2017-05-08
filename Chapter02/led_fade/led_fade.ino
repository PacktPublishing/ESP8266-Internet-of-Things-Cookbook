// LED
int ledPin = 5;

void setup() {

  // Set as output
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  // Fade LED
  for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, i);   
    delay(5);
  }

  for (int i = 255; i > 0; i--) {
    analogWrite(ledPin, i);   
    delay(5);
  }
              
}
