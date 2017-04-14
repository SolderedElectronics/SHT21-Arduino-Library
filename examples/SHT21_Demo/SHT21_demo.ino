//==============================================================================
//    E - R A D I O N I C A . C O M,  H.Kolomana 6/A, Djakovo 31400, Croatia
//==============================================================================
// Project   :  SHT21 Arduino Library
// File      :  SHT21 Demo Arduino Example
// Author    :  e-radionica.com 2017
// Licence   :  Open-source ! 
//==============================================================================
//==============================================================================
// Use with any SHT21 breakout. Check ours: 
// https://e-radionica.com/en/sht21-humidity-and-temperature-sensor.html
// Shows temperature and humidity from SHT21 sensor in Serial monitor.
// If any questions, 
// just contact techsupport@e-radionica.com
//==============================================================================

#include <SHT21.h>  // include SHT21 library

SHT21 sht; 

float temp; 	// variable to store temperature
float humidity; // variable to store hemidity

void setup() {
  Wire.begin();		// begin Wire(I2C)
  Serial.begin(9600); // begin Serial
}

void loop() {

  temp = sht.getTemperature();  // get temp from SHT 
  humidity = sht.getHumidity(); // get temp from SHT

  Serial.print("Temp: ");			// print readings
  Serial.print(temp);
  Serial.print("\t Humidity: ");
  Serial.println(humidity);

  delay(85);	// min delay for 14bit temp reading is 85ms
}
