#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
void setup() 
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  delay(2000);
  float humidity = dht.readHumidity();    // Read humidity
  float temperature = dht.readTemperature();  // Read temperature as Celsius
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
 
