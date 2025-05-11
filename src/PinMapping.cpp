#include <Arduino.h>

#include <Keyboard.h>
#include "PinMapping.h"

void PinMapping::run(Keyboard_ &keyboard_out)
{


}

PinMapping::PinMapping(int InitPin, int InitKey)
{
    pin = InitPin;
    key = InitKey;
    //state = "";
    start_time = 0; 

}


