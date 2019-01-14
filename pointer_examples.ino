#include "SoftwareSerial.h"

void setup( void )
{
  int myInt;
  int *intPtr;
  int secondInt;
  
  myInt = 4;
  Serial.print("myInt = ");
  Serial.println(myInt);
  
  intPtr = &myInt;
  Serial.print("intPtr = ");
  Serial.println(intPtr, HEX);
  
  secondInt = *intPtr;
  *intPtr = 7;
  Serial.print("myInt = ");
  Serial.println(myInt);
  Serial.print("secondInt = ");
  Serial.println(secondInt);
  
}

void loop ( void )
{

}
