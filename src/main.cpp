#include <Arduino.h>

#include <Keyboard.h>

struct pinmapping {int pin; int key;};

pinmapping pintable[] = {{2,97},{3,98}};


const int pintablesize = sizeof(pintable)/sizeof(pintable[0]);

// for (i,i++,i< pintablesize){



// }

//declaring button pins
const int buttonPin = 2;          

int previousButtonState = HIGH; 

void setup() {
  //declare the buttons as input_pullup
  pinMode(buttonPin, INPUT_PULLUP);  
  Keyboard.begin();
}

void loop() {
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