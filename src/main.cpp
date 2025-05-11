#include <Arduino.h>
#include <Keyboard.h>

#include "PinMapping.h"

//struct pinmapping {int pin; int key;};

// Map buttons to to 0-9,A-B
//pinmapping pintable[] = {{2,48},{3,49},{4,50},{5,51},{6,52},{7,53},{8,54},{9,55},{10,56},{14,57},{15,65},{16,66}};
PinMapping pintable[] = {{2,48},{3,49},{4,50},{5,51},{6,52},{7,53},{8,54},{9,55},{10,56},{14,57},{15,65},{16,66}};

const int pintablesize = sizeof(pintable)/sizeof(pintable[0]);



//declaring button pins
const int buttonPin = 2;          

int previousButtonState = HIGH; 

void setup() {
  //declare the buttons as input_pullup
  pinMode(buttonPin, INPUT_PULLUP);  
  Keyboard.begin();

  
}

void loop() {


//pass in Keyboard object when you call the run method



for (int i=0; i< pintablesize; i++)

{

pintable[i].run(Keyboard);
//pintable::run(*keyboard type from .h* * keyboard_instance)   i is var in the run:

};



  //checking the state of the button
  int buttonState = digitalRead(buttonPin);
  
 //replaces button press with UP arrow
  if (buttonState == LOW && previousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press(97);
    delay(50);
  }

  if (buttonState == HIGH && previousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release(97);
    delay(50);
  }
 
  previousButtonState = buttonState;

}