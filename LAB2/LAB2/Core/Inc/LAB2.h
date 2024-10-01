/*
 * EX1.h
 *
 *  Created on: Sep 25, 2024
 *      Author: dangq
 */

#ifndef INC_EX1_H_
#define INC_EX1_H_

#include "main.h"

void LAB2_Init(void);

extern int led_buffer[4];
extern uint8_t matrix_buffer [8];
extern int BIN_array[8];
extern int i, j;

#define RESET 0
#define SET 1

#define DOT GPIO_PIN_4
#define LED_RED GPIO_PIN_5

#define EN_0 GPIO_PIN_6
#define EN_1 GPIO_PIN_7
#define EN_2 GPIO_PIN_8
#define EN_3 GPIO_PIN_9

#define SEG_0 GPIO_PIN_0
#define SEG_1 GPIO_PIN_1
#define SEG_2 GPIO_PIN_2
#define SEG_3 GPIO_PIN_3
#define SEG_4 GPIO_PIN_4
#define SEG_5 GPIO_PIN_5
#define SEG_6 GPIO_PIN_6

#define ROW_0 GPIO_PIN_8
#define ROW_1 GPIO_PIN_9
#define ROW_2 GPIO_PIN_10
#define ROW_3 GPIO_PIN_11
#define ROW_4 GPIO_PIN_12
#define ROW_5 GPIO_PIN_13
#define ROW_6 GPIO_PIN_14
#define ROW_7 GPIO_PIN_15

#define ENM_0 GPIO_PIN_2
#define ENM_1 GPIO_PIN_3
#define ENM_2 GPIO_PIN_10
#define ENM_3 GPIO_PIN_11
#define ENM_4 GPIO_PIN_12
#define ENM_5 GPIO_PIN_13
#define ENM_6 GPIO_PIN_14
#define ENM_7 GPIO_PIN_15

void setEN(int num);
void update7SEG(int index);
void display7SEG(int num);
void switch7SEG(int status); //ex1
void switch7SEGEX2(int status); //ex2
void updateClockBuffer (int index, int hout, int minute) ; //ex7
void updateLEDMatrix(int index);//ex9
void turnonROW(int index);
void turnonCOL(int matrix_buffer);

void updateLEDMatrix_EX10(int index);//ex10
void updateARRAY_BOTtoTOP();
void update_Shiftleft(int matrix_buffer);

#endif /* INC_EX1_H_ */
