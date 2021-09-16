/**
 * @file a3.h
 * @author SHA160
 * @brief Header file for a3
 */

#ifndef __A_3_H__
#define __A_3_H__

#define PWM_20_PERCENT (205)
#define PWM_40_PERCENT (410)
#define PWM_70_PERCENT (717)
#define PWM_95_PERCENT (973)

#include <util/delay.h>
#include <avr/io.h>

void InitTimer();

void act3_PWM(uint16_t temp);

#endif