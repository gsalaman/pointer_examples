#include "SoftwareSerial.h"
#include "memprint.h"

int myArray[5]={10,11,12,13,14};

#define ARR_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

int stringLength(char *str)
{
  int count=0;

  while (*str)
  {
    count++;
    str++;
  }

  return count;
}

void string_length_excercise( void )
{
  char myString[] = "Sriracha";
  int  myStringLength;

  myStringLength = stringLength(myString);
  
  Serial.print("String length = ");
  Serial.println(stringLength(myString));
  
}

void setup( void )
{
  Serial.begin(9600);

  int *intPtr;
  int myInt;
  int i;

  intPtr = myArray;
  myInt = *intPtr;
  
  Serial.print("myArray = ");
  Serial.println((unsigned long) myArray, HEX);

  Serial.print("myInt = ");
  Serial.println(myInt);

  Serial.print("myArray size (bytes): ");
  Serial.println(sizeof(myArray));
  Serial.print("intPtr size: ");
  Serial.println(sizeof(intPtr));

  Serial.print("myArray # elements: ");
  Serial.println(ARR_SIZE(myArray));

  for (i=0; i<ARR_SIZE(myArray); i++)
  {
    Serial.print("intPtr = ");
    Serial.print((unsigned long) intPtr, HEX);
    Serial.print(" *intPtr = ");
    Serial.println(*intPtr);

    intPtr++;
  }
  
  
  memprint_bytes(myArray);

  string_length_excercise();
}

void loop ( void )
{

}
