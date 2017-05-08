// Pin
int inputPin = 5;

void setup() {
  
  // Serial
  Serial.begin(115200);
  
  // Set pin as input
  pinMode(inputPin, INPUT);
}

void loop() {
  
  // Read pin
  int inputState = digitalRead(inputPin);
  
  // Print out the state of the pin
  Serial.println(inputState);

  // Delay
  delay(100);        
}



