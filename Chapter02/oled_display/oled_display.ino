// Libraries
#include <ESP8266WiFi.h>
#include <Wire.h>
#include "SSD1306.h"

// Pins
#define SDA 14
#define SCL 12
#define I2C 0x3D

// Create display
SSD1306 display(I2C, SDA, SCL);

void setup() {

  // Serial
  Serial.begin(115200);
  delay(10);

   // Initialize display
  display.init();
  display.flipScreenVertically();
  display.clear();
  display.display();

  // Display data
  display.setFont(ArialMT_Plain_24);
  display.drawString(26, 20, "416.25");
  
}

void loop() {
  
}

