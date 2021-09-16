/**
 * @file main.c
 * @author SHA160
 * @brief Set the temperature of seat - Heated Seats
 */

#include "a1.h"
#include "a2.h"
#include "a3.h"

int main(void)
{
    uint16_t temp;  //unsigned 16-bit integer
    
    while(1)
    {
        if(a1_LED()==1) //Both the switches are turend ON
        { 
            LEDON();   //LED turned ON
            temp=a2_GetADC(); //This gets the ADC value
            a3_PWM(temp); //Checks the temperature and gets the PWM output
        }
        else
        {
            LEDOFF();  //LED turend OFF
		    _delay_ms(200); //delays for 200 milliseconds
        }
    }
    return 0;
}