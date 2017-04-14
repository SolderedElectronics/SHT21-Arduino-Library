//==============================================================================
//    E - R A D I O N I C A . C O M,  H.Kolomana 6/A, Djakovo 31400, Croatia
//==============================================================================
// Project   :  SHT21 Arduino Library
// File      :  SHT21 Serial Number Example
// Author    :  e-radionica.com 2017
// Licence   :  Open-source ! 
//==============================================================================
//==============================================================================
// Use with any SHT21 breakout. Check ours: 
// https://e-radionica.com/en/sht21-humidity-and-temperature-sensor.html
// Prints hardcored SHT21 Serial Number to Serial monitor.
// If any questions, 
// just contact techsupport@e-radionica.com
//==============================================================================

#include <SHT21.h>

SHT21 sht;

void setup() {
  Wire.begin();		// begin Wire
  Serial.begin(9600); // begin Serial

  // call following as argument in getSerialNumber function to print SN
  //		0 - for SNC_0
  //		1 - for SNC_1
  //		2 - for SNB_0
  //		3 - for SNB_1
  //		4 - for SNB_2
  //		5 - for SNB_3
  //		6 - for SNA_0
  //		7 - for SNA_1

  // printing all serial numbers to Serial monitor
  for(int i= 0; i < 8; i++)
  {
    Serial.print(sht.getSerialNumber(0),BIN);
  }
}

void loop() {
}
