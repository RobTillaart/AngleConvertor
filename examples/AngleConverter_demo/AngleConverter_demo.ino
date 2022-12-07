//
//    FILE: AngleConverter_demo.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo sketch to test angleConvertor class
//    DATE: 2022-12-01
//     URL: https://github.com/RobTillaart/AngleConvertor
//


#include "AngleConvertor.h"

AngleConvertor AC;


void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.print("lib version: ");
  Serial.println(ANGLECONVERTOR_LIB_VERSION);
  Serial.println();

  AC.setDegrees(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getDegrees(), 7);

  AC.setRadians(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getRadians(), 7);

  AC.setGradians(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getGradians(), 7);

  AC.setAngularMil(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getAngularMil(), 7);

  AC.setBinaryRadians(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getBinaryRadians(), 7);

  AC.setCentiTurn(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getCentiTurn(), 7);

  AC.setDiameterPart(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getDiameterPart(), 7);

  AC.setHexacontade(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getHexacontade(), 7);

  AC.setHourAngle(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getHourAngle(), 7);

  AC.setMilliTurn(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getMilliTurn(), 7);

  AC.setMinuteTime(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getMinuteTime(), 7);

  AC.setOctant(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getOctant(), 7);

  AC.setPechus(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getPechus(), 7);

  AC.setPoints(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getPoints(), 7);

  AC.setQuadrant(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getQuadrant(), 7);

  AC.setQuarterPoint(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getQuarterPoint(), 7);

  AC.setSecondsTime(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getSecondsTime(), 7);

  AC.setSextant(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getSextant(), 7);

  AC.setSign(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getSign(), 7);

  AC.setTurn(1.0);
  Serial.print(AC.getRadians(), 7);
  Serial.print("\t");
  Serial.println(AC.getTurn(), 7);

  Serial.println("\nDone...");
}


void loop()
{
}


//  -- END OF FILE --
