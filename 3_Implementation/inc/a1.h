/**
 * @file a1.h
 * @author SHA160
 * @brief Header file of a1 
 */

#ifndef __A_1_H__
#define __A_1_H__

#define F_CPU 16000000UL 	//Clock Frequency of MCU is 16 MHz 
#define LED_PORT (PORTD)    //LED Port Number
#define LED_PIN  (PORTD2)   // LED Pin number
#define BUTTON_SENSOR  (PORTD0)   //Port for Button Sensor
#define TEMP_SENSOR  (PORTD1)   //Port for Temperature Sensor

#include <util/delay.h>
#include <avr/io.h>

void peripheral_init(void);
void LEDON();   //LED ON
void LEDOFF();  //LED OFF

int a1_LED(void);   //Turn ON LED when Button sensor and Heator sensor pressed

#endif