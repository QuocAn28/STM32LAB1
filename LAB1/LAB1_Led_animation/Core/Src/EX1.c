/*
 * EX1.c
 *
 *  Created on: Sep 12, 2024
 *      Author: dangq
 */
#include "EX1.h"


void EX1_Init(void) {
    // Cấu hình GPIO cho PA5,PÂ
    __HAL_RCC_GPIOA_CLK_ENABLE();  // Kích hoạt xung nhịp cho cổng A

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = LED_RED|LED_YELLOW;  // Chọn chân PA5,PA6
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;  // Chế độ Output Push-Pull
    GPIO_InitStruct.Pull = GPIO_NOPULL;  // Không có Pull-up hoặc Pull-down
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;  // Tốc độ thấp

    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);  // Khởi tạo cấu hình cho PA5
}


void EX1(int status){
	if (status == 0) {
	            // Bật đèn đỏ, tắt đèn vàng
	            HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_SET);
	            HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_RESET);
	        } else {
	            // Tắt đèn đỏ, bật đèn vàng
	            HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_RESET);
	            HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_SET);
	        }
}
