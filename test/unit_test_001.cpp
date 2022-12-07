//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
//    DATE: 2022-12-03
// PURPOSE: unit tests for the Angle library
//          https://github.com/RobTillaart/AngleConvertor
//          https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
//

// supported assertions
// ----------------------------
// assertEqual(expected, actual);               // a == b
// assertNotEqual(unwanted, actual);            // a != b
// assertComparativeEquivalent(expected, actual);    // abs(a - b) == 0 or (!(a > b) && !(a < b))
// assertComparativeNotEquivalent(unwanted, actual); // abs(a - b) > 0  or ((a > b) || (a < b))
// assertLess(upperBound, actual);              // a < b
// assertMore(lowerBound, actual);              // a > b
// assertLessOrEqual(upperBound, actual);       // a <= b
// assertMoreOrEqual(lowerBound, actual);       // a >= b
// assertTrue(actual);
// assertFalse(actual);
// assertNull(actual);

// // special cases for floats
// assertEqualFloat(expected, actual, epsilon);    // fabs(a - b) <= epsilon
// assertNotEqualFloat(unwanted, actual, epsilon); // fabs(a - b) >= epsilon
// assertInfinity(actual);                         // isinf(a)
// assertNotInfinity(actual);                      // !isinf(a)
// assertNAN(arg);                                 // isnan(a)
// assertNotNAN(arg);                              // !isnan(a)


#include <ArduinoUnitTests.h>

#include "Arduino.h"
#include "AngleConvertor.h"


unittest_setup()
{
  fprintf(stderr, "ANGLECONVERTOR_LIB_VERSION: %s\n", (char *) ANGLECONVERTOR_LIB_VERSION);
}

unittest_teardown()
{
}


unittest(test_conversions)
{
  AngleConvertor AC;

  AC.setDegrees(1.0);
  AsserEqualFloat(1.0, AC. getDegrees(), 0.00001);

  AC.setRadians(1.0);
  AsserEqualFloat(1.0, AC. getRadians(), 0.00001);

  AC.setGradians(1.0);
  AsserEqualFloat(1.0, AC. getGradians(), 0.00001);

  AC.setAngularMil(1.0);
  AsserEqualFloat(1.0, AC. getAngularMil(), 0.00001);

  AC.setBinaryRadians(1.0);
  AsserEqualFloat(1.0, AC. getBinaryRadians(), 0.00001);

  AC.setCentiTurn(1.0);
  AsserEqualFloat(1.0, AC. getCentiTurn(), 0.00001);

  AC.setDiameterPart(1.0);
  AsserEqualFloat(1.0, AC. getDiameterPart(), 0.00001);

  AC.setHexacontade(1.0);
  AsserEqualFloat(1.0, AC. getHexacontade(), 0.00001);

  AC.setHourAngle(1.0);
  AsserEqualFloat(1.0, AC. getHourAngle(), 0.00001);

  AC.setMilliTurn(1.0);
  AsserEqualFloat(1.0, AC. getMilliTurn(), 0.00001);

  AC.setMinuteTime(1.0);
  AsserEqualFloat(1.0, AC. getMinuteTime(), 0.00001);

  AC.setOctant(1.0);
  AsserEqualFloat(1.0, AC. getOctant(), 0.00001);

  AC.setPechus(1.0);
  AsserEqualFloat(1.0, AC. getPechus(), 0.00001);

  AC.setPoints(1.0);
  AsserEqualFloat(1.0, AC. getPoints(), 0.00001);

  AC.setQuadrant(1.0);
  AsserEqualFloat(1.0, AC. getQuadrant(), 0.00001);

  AC.setQuarterPoint(1.0);
  AsserEqualFloat(1.0, AC. getQuarterPoint(), 0.00001);

  AC.setSecondsTime(1.0);
  AsserEqualFloat(1.0, AC. getSecondsTime(), 0.00001);

  AC.setSextant(1.0);
  AsserEqualFloat(1.0, AC. getSextant(), 0.00001);

  AC.setSign(1.0);
  AsserEqualFloat(1.0, AC. getSign(), 0.00001);

  AC.setTurn(1.0);
  AsserEqualFloat(1.0, AC. getTurn(), 0.00001);
}


unittest_main()

//  -- END OF FILE --
