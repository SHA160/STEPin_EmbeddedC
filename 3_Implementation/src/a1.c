/**
 * @file a1.c
 * @author SHA160
 * @brief Define pins and ports to blink the LED ON/OFF
 */

#include "a1.h"

void peripheral_init(void)
{	
	DDRD |= (1<<PD2); // set PD2=1 for LED
    DDRD &= ~(1<<PD0); //clear bit
    PORTD |= (1<<PD0); //set bit PD0 for SeatSwitch
    DDRD &= ~(1<<PD1); //clear bit
    PORTD |= (1<<PD1); //set bit PD0 for HeaterSwitch
}

void LEDON(){
    LED_PORT |= (1<<LED_PIN); 
}

void LEDOFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int activity1=0;
int a1_LED(void)
{
       peripheral_init();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) //Pressing both switches
        { 
            activity1=1;
        }
        else
        {
            activity1=0;
        }
    return activity1;
}