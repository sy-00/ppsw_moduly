#include "led.h"
#include "keyboard.h"

void Delay(int iDelayInMS) {

    int iLoopCounter;
    int iIterations = iDelayInMS * 2500; 
	
    for(iLoopCounter = 0; iLoopCounter < iIterations; iLoopCounter++) {}
}

int main() {
    LedInit();
    KeyboardInit();

    while(1) {
        Delay(100); 

        switch(eKeyboardRead()) {
            case BUTTON_1:
                LedStepRight();
                break;
            
            case BUTTON_2:
                LedStepLeft();
                break;
            
            default:
                break;
        }
    }
}
