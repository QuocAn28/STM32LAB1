/*
 * EX10.h
 *
 *  Created on: Sep 13, 2024
 *      Author: dangq
 */

#ifndef INC_EX10_H_
#define INC_EX10_H_
#include "main.h"

#define LED_1 GPIO_PIN_4
#define LED_2 GPIO_PIN_5
#define LED_3 GPIO_PIN_6
#define LED_4 GPIO_PIN_7
#define LED_5 GPIO_PIN_8
#define LED_6 GPIO_PIN_9
#define LED_7 GPIO_PIN_10
#define LED_8 GPIO_PIN_11
#define LED_9 GPIO_PIN_12
#define LED_10 GPIO_PIN_13
#define LED_11 GPIO_PIN_14
#define LED_12 GPIO_PIN_15

void EX10_Init (void);
void setNumberOnClock(int num);
void clearNumberOnClock(int num);
void clearAllClock(void);
//void EX10(int hour, int minute, int second);

#endif /* INC_EX10_H_ */
