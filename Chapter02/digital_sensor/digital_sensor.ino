// Library
#include "DHT.h"

// DHT11 sensor pins
#define DHTPIN 5
#define DHTTYPE DHT11

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE, 15);

// Variables 
float temperature;
float humidity;

void setup() {
  
  // Serial
  Serial.begin(115200);

  // Init DHT 
  dht.begin();
  
}

void loop() {
  
  // Reading temperature and humidity
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  // Print out data
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Humidity: ");
  Serial.println(humidity);
  
  // Delay
  delay(1000);        
}



