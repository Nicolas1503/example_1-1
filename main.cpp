#include "mbed.h"
#include "arm_book_lib.h"

#define LED1 PA_1
#define BUTTON1 PA_2

int main()
{
    DigitalIn BOTON (BUTTON1);

    DigitalOut alarmLed(LED1);

    BOTON.mode(PullUp);

    alarmLed = OFF;

    while (true) {
        if ( BOTON == ON ) {
            alarmLed = ON;
        }
        
        if ( BOTON == OFF ) {
            alarmLed = OFF;
        }
    }
    
}