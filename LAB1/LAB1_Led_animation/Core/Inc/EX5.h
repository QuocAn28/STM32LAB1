/*
 * EX5.h
 *
 *  Created on: Sep 12, 2024
 *      Author: dangq
 */

#ifndef INC_EX5_H_
#define INC_EX5_H_
#include "main.h"

#define RED1 0
#define RED2 1
#define GREEN 2
#define YELLOW 3

//chân đèn giao thông
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

//chân LED7 đèn 1-3

#define SEG_0 GPIO_PIN_7
#define SEG_1 GPIO_PIN_8
#define SEG_2 GPIO_PIN_9
#define SEG_3 GPIO_PIN_10
#define SEG_4 GPIO_PIN_11
#define SEG_5 GPIO_PIN_12
#define SEG_6 GPIO_PIN_13


//chân LED7 đèn 2-4

#define SEG_7 GPIO_PIN_1
#define SEG_8 GPIO_PIN_2
#define SEG_9 GPIO_PIN_3
#define SEG_10 GPIO_PIN_12
#define SEG_11 GPIO_PIN_13
#define SEG_12 GPIO_PIN_14
#define SEG_13 GPIO_PIN_15

void EX5_Init (void);
void Trafficlight (int counter);
void SevenSEGEX5 (int counter);

#endif /* INC_EX5_H_ */
