/*
 * EX3.h
 *
 *  Created on: Sep 12, 2024
 *      Author: dangq
 */

#ifndef INC_EX3_H_
#define INC_EX3_H_

#include "main.h"

#define LED_RED_1 GPIO_PIN_2
#define LED_YELLOW_1 GPIO_PIN_1
#define LED_GREEN_1 GPIO_PIN_0

#define LED_RED_2 GPIO_PIN_5
#define LED_YELLOW_2 GPIO_PIN_4
#define LED_GREEN_2 GPIO_PIN_3

#define LED_RED_3 GPIO_PIN_8
#define LED_YELLOW_3 GPIO_PIN_7
#define LED_GREEN_3 GPIO_PIN_6

#define LED_RED_4 GPIO_PIN_11
#define LED_YELLOW_4 GPIO_PIN_10
#define LED_GREEN_4 GPIO_PIN_9

void EX3 (int counter);
void EX3_Init(void);

#endif /* INC_EX3_H_ */
