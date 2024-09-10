#include "Lib_Button.h"

//#include <avr/iom328p.h>
#include <avr/io.h>


Button::Button(byte pin, bool mode)
  : pin(pin), timerKey (true), speedy(mode), state (false){
    pinMode (pin, INPUT_PULLUP);
}

void Button::buttonListener() {
  debouncerTimer.tick();  
  if (debouncerTimer.isTimerEnd()){
    //if ((PIND & (1 << pin)) == 0) {
    if(digitalRead(pin) == LOW){
      if (timerKey){
        if (speedy){
          state = true; 
        }
        debouncerTimer.timerStart();
        timerKey = false;
      }
      else {
          state = true;
      } 
    }
    else {
      state = false;
      timerKey = true;
    }
  }
}

void Button::speedyMode(bool mode){
  speedy = mode;
}

bool Button::btnState(){
  return state;
}
 
 void Button::setDebPause(unsigned int time){
   debouncerTimer.setTime(time);
   
}



  

