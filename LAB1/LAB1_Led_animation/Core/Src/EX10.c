/*
 * EX10.c
 *
 *  Created on: Sep 13, 2024
 *      Author: dangq
 */
#include "EX10.h"

void EX10_Init(void) {

    // Kích hoạt xung nhịp cho cổng A
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};


    GPIO_InitStruct.Pin = 	LED_1|LED_2|LED_3|
							LED_4|LED_5|LED_6|
							LED_7|LED_8|LED_9|
							LED_10|LED_11|LED_12;

    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);


}
void clearAllClock(void){
			HAL_GPIO_WritePin(GPIOA, LED_1, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_2, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_3, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_4, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_5, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_6, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_7, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_8, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_9, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_10, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_11, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, LED_12, GPIO_PIN_RESET);
}
void setNumberOnClock(int num){
	switch(num){
	case 1:
			HAL_GPIO_WritePin(GPIOA, LED_1, GPIO_PIN_SET);
			break;
		case 2:

			HAL_GPIO_WritePin(GPIOA, LED_2, GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, LED_3, GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, LED_4, GPIO_PIN_SET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, LED_5, GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, LED_6, GPIO_PIN_SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, LED_7, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, LED_8, GPIO_PIN_SET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, LED_9, GPIO_PIN_SET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOA, LED_10, GPIO_PIN_SET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOA, LED_11, GPIO_PIN_SET);
			break;
		case 0:
			HAL_GPIO_WritePin(GPIOA, LED_12, GPIO_PIN_SET);
			break;
	}
}
void clearNumberOnClock(int num){
	switch(num){
		case 1:
			HAL_GPIO_WritePin(GPIOA, LED_1, GPIO_PIN_RESET);
			break;
		case 2:

			HAL_GPIO_WritePin(GPIOA, LED_2, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, LED_3, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, LED_4, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, LED_5, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, LED_6, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, LED_7, GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, LED_8, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, LED_9, GPIO_PIN_RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOA, LED_10, GPIO_PIN_RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOA, LED_11, GPIO_PIN_RESET);
			break;
		case 0:
			HAL_GPIO_WritePin(GPIOA, LED_12, GPIO_PIN_RESET);
			break;

	}

//	void EX10(int hour, int minute, int second) {
//	    clearAllClock();  // Turn off all LEDs first
//
//	    // Map hour, minute, second to positions on the clock
//	    int hourLED = hour % 12;     // Map hours to 0-11
//	    int minuteLED = minute / 5;  // Map minutes to 0-11 (each LED represents 5 minutes)
//	    int secondLED = second / 5;  // Map seconds to 0-11 (each LED represents 5 seconds)
//
//	    // Turn on the corresponding LEDs for hour, minute, and second
//	    setNumberOnClock(hourLED);
//	    setNumberOnClock(minuteLED);
//	    setNumberOnClock(secondLED);
//	}
}
