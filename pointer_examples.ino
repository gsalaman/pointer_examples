#include "SoftwareSerial.h"
#include "memprint.h"

int myInt;
int *intPtr;
int secondInt;
  
void setup( void )
{
  Serial.begin(9600);

  Serial.println("Addresses:");
  Serial.print("myInt = 0x");
  Serial.println((unsigned long) &myInt, HEX);
  Serial.print("intPtr = 0x");
  Serial.println((unsigned long) &intPtr, HEX);
  Serial.print("secondInt = 0x");
  Serial.println((unsigned long) &secondInt, HEX);
  Serial.println("============");
  
  myInt = 4;
  
  Serial.print("myInt = ");
  Serial.println(myInt);
  
  intPtr = &myInt;
  
  Serial.print("intPtr = ");
  Serial.println((unsigned long) intPtr, HEX);
  Serial.print("Address of intPtr = ");
  Serial.println((unsigned long) &intPtr, HEX);
  
  secondInt = *intPtr;
  *intPtr = 7;
  
  Serial.print("myInt = ");
  Serial.println(myInt);
  Serial.print("secondInt = ");
  Serial.println(secondInt);

  Serial.println("==========");

  memprint_bytes(&secondInt);
}

void loop ( void )
{

}
