/**
 * @file a2.h
 * @author SHA160
 * @brief Header file of a2
 */

#ifndef __A_2_H__
#define __A_2_H__

#include <util/delay.h>
#include <avr/io.h>

void InitADC();

uint16_t ReadADC(uint8_t ch);
uint16_t act2_GetADC(void);

#endif