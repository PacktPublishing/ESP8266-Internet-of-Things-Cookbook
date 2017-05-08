// Pin
int inputPin = A0;

void setup() {
  
  // Serial
  Serial.begin(115200);
  
  // Set pin as input
  pinMode(inputPin, INPUT);
}

void loop() {
  
  // Read pin
  float inputState = analogRead(inputPin);

  // Convert to percent
  inputState = inputState / 1023. * 100;

  // Print out the state of the pin
  Serial.println(inputState);

  // Delay
  delay(100);        
}



