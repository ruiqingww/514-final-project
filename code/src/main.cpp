#include <DS18B20.h>
DS18B20 ds(D7);

void setup() {
  Serial.begin(9600); 
}

void loop() {
  float tempC = ds.getTempC();
  Serial.print("Current Temperature: ");
  Serial.print(tempC);
  Serial.println(" C");

  delay(1000); 
}

