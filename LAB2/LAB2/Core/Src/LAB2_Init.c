/*
 * LAB2_Init.c
 *
 *  Created on: Sep 26, 2024
 *      Author: dangq
 */
#include"LAB2.h"

void LAB2_Init(void) {
	 // Kích hoạt xung nhịp cho cổng A
	    __HAL_RCC_GPIOA_CLK_ENABLE();

	    GPIO_InitTypeDef GPIO_InitStruct = {0};


	    GPIO_InitStruct.Pin = EN_0|EN_1|EN_2|EN_3|LED_RED|DOT
	    					|ENM_0|ENM_1|ENM_2|ENM_3|ENM_4|ENM_5|ENM_6|ENM_7;

	    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	    GPIO_InitStruct.Pull = GPIO_NOPULL;
	    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Kích hoạt xung nhịp cho cổng B
    __HAL_RCC_GPIOB_CLK_ENABLE();




    GPIO_InitStruct.Pin = SEG_0|SEG_1|SEG_2|SEG_3|SEG_4|SEG_5|SEG_6
    					|ROW_0|ROW_1|ROW_2|ROW_3|ROW_4|ROW_5|ROW_6|ROW_7;

    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);


}
