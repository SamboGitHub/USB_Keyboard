#include <Arduino.h>

#include <Keyboard.h>
#include "PinMapping.h"

void PinMapping::init()
{
    pinMode(pin, INPUT_PULLUP); 
    state = Idle;
}

void PinMapping::run(Keyboard_ &keyboard_out)
{
    //checking the state of the button
    button_state_val = digitalRead(pin);
    
    //replaces button press with UP arrow
    if (button_state_val == LOW && prev_button_state_val == HIGH) {
        // and it's currently pressed:
        keyboard_out.press(key);
        // delay(50);
    }

    if (button_state_val == HIGH && prev_button_state_val == LOW) {
        // and it's currently released:
        keyboard_out.release(key);
        // delay(50);
    }
    
    prev_button_state_val = button_state_val;

}

PinMapping::PinMapping(int InitPin, int InitKey)
{
    pin = InitPin;
    key = InitKey;
    state = Idle;
    start_time = 0; 

}


