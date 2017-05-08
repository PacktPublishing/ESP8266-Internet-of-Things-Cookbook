// LED
int ledPin = 5;

void setup() {

  // Set as output
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  // Blink LED
  digitalWrite(ledPin, HIGH);   
  delay(1000);                       
  digitalWrite(ledPin, LOW);   
  delay(1000);    
                    
}
