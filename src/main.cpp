#include <Arduino.h>
#include <Keyboard.h>

#include "PinMapping.h"


PinMapping pintable[] = {{2,48},{3,49},{4,50},{5,51},{6,52},{7,53},{8,54},{9,55},{10,56},{14,57},{15,65},{16,66}};
const int pintablesize = sizeof(pintable)/sizeof(pintable[0]);


void setup() {

for (int i=0; i<pintablesize; i++)
  {
      pintable[i].init();  
  };

  Keyboard_ Keyboard;
  Keyboard.begin(); 
}

void loop()
{
for (int i=0; i< pintablesize; i++)
  {
    pintable[i].run(Keyboard);
  };
}