// Library
#include <Servo.h>

// Servo instance
Servo myservo; 

// Position
int pos = 0;   

void setup() {
  
  // Attach to pin 5
  myservo.attach(5);
  
}

void loop() {

  // Go from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }

  // Go again to 0
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
