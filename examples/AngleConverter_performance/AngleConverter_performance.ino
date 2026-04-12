//
//    FILE: AngleConverter_performance.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo sketch to test angleConvertor class
//     URL: https://github.com/RobTillaart/AngleConvertor


#include "AngleConvertor.h"

AngleConvertor conv;

uint32_t start, stop;
volatile float x;
volatile char * wr;

void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.println(__FILE__);
  Serial.print("ANGLECONVERTOR_LIB_VERSION: ");
  Serial.println(ANGLECONVERTOR_LIB_VERSION);
  Serial.println();

  x = analogRead(A0);
  while (x > 360) x -= 360;
  delay(10);

  start = micros();
  conv.setDegrees(x);
  x = conv.getTurn();
  stop = micros();

  Serial.print("getTurn: \t");
  Serial.println(stop - start);  //  2 steps
  delay(100);

  start = micros();
  wr = conv.windrose(x);
  stop = micros();
  Serial.print("windrose: \t");
  Serial.println(stop - start);
  delay(100);



  Serial.println("\nDone...");
}


void loop()
{
}


//  -- END OF FILE --
