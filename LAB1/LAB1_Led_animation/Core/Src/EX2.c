/*
 * EX2.c
 *
 *  Created on: Sep 12, 2024
 *      Author: dangq
 */
#include "EX2.h"

// Hàm khởi tạo các chân đèn giao thông (PA5, PA6, PA4)
void EX2_Init(void) {
    // Kích hoạt xung nhịp cho cổng A
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};


    GPIO_InitStruct.Pin = LED_RED|LED_YELLOW|LED_GREEN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);


}

// Hàm điều khiển đèn giao thông
void EX2(int counter) {
	switch(counter){
	case 0:
		// Bật đèn đỏ, tắt đèn vàng và xanh
		    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_RESET);  // Đỏ bật
		    HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_SET);  // Vàng tắt
		    HAL_GPIO_WritePin(GPIOA, LED_GREEN, GPIO_PIN_SET);  // Xanh tắt
		    break;
	case 5:

			HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_SET);  // Đỏ tắt
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_SET);  // Vàng tắt
			HAL_GPIO_WritePin(GPIOA, LED_GREEN, GPIO_PIN_RESET);    // Xanh bật
			break;
	case 8:
		// Bật đèn vàng, tắt đèn đỏ và xanh
		    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_SET);  // Đỏ tắt
		    HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_RESET);    // Vàng bật
		    HAL_GPIO_WritePin(GPIOA, LED_GREEN, GPIO_PIN_SET);  // Xanh tắt

	}

}
