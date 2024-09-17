/*
 * EX3.c
 *
 *  Created on: Sep 12, 2024
 *      Author: dangq
 */
#include "EX3.h"

void EX3_Init(void) {
    // Kích hoạt xung nhịp cho cổng A
    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};


    GPIO_InitStruct.Pin = LED_RED_1|LED_YELLOW_1|LED_GREEN_1
    		|LED_RED_2|LED_YELLOW_2|LED_GREEN_2
			|LED_RED_3|LED_YELLOW_3|LED_GREEN_3
			|LED_RED_4|LED_YELLOW_4|LED_GREEN_4;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);


}
void EX3 (int counter){
	switch(counter){
	case 0:
		//Đèn 1 Đỏ 3s
		    HAL_GPIO_WritePin(GPIOB, LED_RED_1, GPIO_PIN_SET);  // Đỏ bật
		    HAL_GPIO_WritePin(GPIOB, LED_YELLOW_1, GPIO_PIN_RESET);  // Vàng tắt
		    HAL_GPIO_WritePin(GPIOB, LED_GREEN_1, GPIO_PIN_RESET);  // Xanh tắt
		    HAL_GPIO_WritePin(GPIOB, LED_RED_2, GPIO_PIN_RESET);  // Đỏ tắt
		    HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2, GPIO_PIN_RESET);  // Vàng tắt
		    HAL_GPIO_WritePin(GPIOB, LED_GREEN_2, GPIO_PIN_SET);  // Xanh bật
		    HAL_GPIO_WritePin(GPIOB, LED_RED_3, GPIO_PIN_SET);  // Đỏ bật
		    HAL_GPIO_WritePin(GPIOB, LED_YELLOW_3, GPIO_PIN_RESET);  // Vàng tắt
		    HAL_GPIO_WritePin(GPIOB, LED_GREEN_3, GPIO_PIN_RESET);  // Xanh tắt
		    HAL_GPIO_WritePin(GPIOB, LED_RED_4, GPIO_PIN_RESET);  // Đỏ tắt
		    HAL_GPIO_WritePin(GPIOB, LED_YELLOW_4, GPIO_PIN_RESET);  // Vàng tắt
		    HAL_GPIO_WritePin(GPIOB, LED_GREEN_4, GPIO_PIN_SET);  // Xanh bật
		    break;
	case 3:
		//Đèn 1 dỏ 4 5
			HAL_GPIO_WritePin(GPIOB, LED_RED_1, GPIO_PIN_SET);  // Đỏ bật
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_1, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_1, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_2, GPIO_PIN_RESET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2, GPIO_PIN_SET);  // Vàng bật
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_2, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_3, GPIO_PIN_SET);  // Đỏ bật
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_3, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_3, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_4, GPIO_PIN_RESET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_4, GPIO_PIN_SET);  // Vàng bật
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_4, GPIO_PIN_RESET);  // Xanh tắt
			break;
	case 5:
		//Đèn xanh
			HAL_GPIO_WritePin(GPIOB, LED_RED_1, GPIO_PIN_RESET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_1, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_1, GPIO_PIN_SET);  // Xanh bật
			HAL_GPIO_WritePin(GPIOB, LED_RED_2, GPIO_PIN_SET);  // Đỏ bật
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_2, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_3, GPIO_PIN_RESET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_3, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_3, GPIO_PIN_SET);  // Xanh bật
			HAL_GPIO_WritePin(GPIOB, LED_RED_4, GPIO_PIN_SET);  // Đỏ bật
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_4, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_4, GPIO_PIN_RESET);  // Xanh tắt
			break;
	case 8:
		//đèn vàng
			HAL_GPIO_WritePin(GPIOB, LED_RED_1, GPIO_PIN_RESET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_1, GPIO_PIN_SET);  // Vàng bật
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_1, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_2, GPIO_PIN_SET);  // Đỏ bật
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_2, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_2, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_3, GPIO_PIN_RESET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_3, GPIO_PIN_SET);  // Vàng bật
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_3, GPIO_PIN_RESET);  // Xanh tắt
			HAL_GPIO_WritePin(GPIOB, LED_RED_4, GPIO_PIN_SET);  // Đỏ bật
			HAL_GPIO_WritePin(GPIOB, LED_YELLOW_4, GPIO_PIN_RESET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOB, LED_GREEN_4, GPIO_PIN_RESET);  // Xanh tắt
			break;

	}

}
