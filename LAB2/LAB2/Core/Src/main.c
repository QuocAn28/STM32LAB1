/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "software_timer.h"
#include "LAB2.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/

void SystemClock_Config(void);
static void MX_TIM2_Init(void);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */


int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */

  MX_TIM2_Init();

  /* USER CODE BEGIN 2 */

  HAL_TIM_Base_Start_IT(&htim2);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

	LAB2_Init();
	setTimer0(100);

//	setTimer1(50);	int status = 0; 								//ex1
//	setTimer1(50);	setTimer2(50);				int status = 0;		//ex2
//	setTimer1(100);	const int MAX_LED = 4;	 	int index_led = 0;	//ex3
//	int index=0, MAX_LED=4, hour = 17, minute = 59, second =50;	//ex5
//	setTimer1(1); int index=0, MAX_LED=4, hour = 17, minute = 59, second =48;		//ex7
//	setTimer1(25);	setTimer2(100);	const int MAX_LED = 4;	 	int index_led = 0;	//ex8
//	setTimer1(1);	setTimer2(8); const int MAX_LED_MATRIX = 8;	int index_led_matrix = 0; //ex9_ex10

  while (1)
  {
    /* USER CODE END WHILE */
	  if(timer0_flag == 1){									//runEX0
		  setTimer0(100);
		  HAL_GPIO_TogglePin(GPIOA, LED_RED);
	  }

//	  if(timer1_flag == 1){									//runEX1
//		  setTimer1(50);
//		  switch7SEG(status);
//		  status=!status;
//	  }

//	  if(timer1_flag ==1){									//runEX2
//		  setTimer1(50);
//		  if(status>=4) status=0;
//		  switch7SEGEX2(status);
//		  status++;
//	  }
//
//	  if(timer2_flag == 1){
//		  setTimer2(100);
//		  HAL_GPIO_TogglePin(GPIOA, DOT);
//	  }

//	  if(timer1_flag == 1){									//runEX3
//		  setTimer1(100);
//		  update7SEG(index_led);
//		  index_led++;
//		  if(index_led >= MAX_LED) {
//			  index_led = 0;
//		  }
//	  }

//	  second++;
//	  if(second >= 60){										//ex5
//			minute ++;
//			second = 0;
//	  	}
//	  if(minute >=60){
//	  		hour++;
//	  		minute = 0;
//	  	}
//	  if(hour >= 24){
//		  	hour = 0;
//	  	}
//
//	  updateClockBuffer(index, hour, minute);
//	  HAL_Delay(1000);
//	  index++;
//	  if(index >= MAX_LED) index=0;


//	  if(timer1_flag==1){									//runEX7
//		  setTimer1(100);
//		  updateClockBuffer (index, hour, minute);
//		  index++;
//		  if(index>=MAX_LED) index=0;
//
//		  second++;
//		  if(second >= 60){
//			  minute ++;
//			  second = 0;
//		  }
//		  if(minute >=60){
//			  hour++;
//			  minute = 0;
//		  }
//		  if(hour >= 24){
//			  hour = 0;
//		  }
//	  }


//	  if(timer1_flag == 1){									//runEX8
//		  setTimer1(25);
//		  update7SEG(index_led);
//		  index_led++;
//		  if(index_led>=MAX_LED){
//			  index_led = 0;
//		  }
//	  }
//
//	  if(timer2_flag == 1){
//		  setTimer2(100);
//		  HAL_GPIO_TogglePin(GPIOA, DOT);
//	  }

//	  if(timer1_flag ==1){									//runEX9
//		  setTimer1(1);
//		  updateLEDMatrix(index_led_matrix);
//		  index_led_matrix++;
//		  if(index_led_matrix >=MAX_LED_MATRIX) index_led_matrix=0;
//	  }

//	  if(timer1_flag ==1){									//runEX10_bot to top
//		  setTimer1(1);
//		  updateLEDMatrix(index_led_matrix);
//		  index_led_matrix++;
//		  if(index_led_matrix >=MAX_LED_MATRIX) index_led_matrix=0;
//	  }
//
//	  if(timer2_flag == 1){
//		  setTimer2(8);
//		  updateARRAY_BOTtoTOP();
//	  }

//	  if(timer1_flag ==1){									//runEX10_left to right
//		  setTimer1(1);
//		  updateLEDMatrix_EX10(index_led_matrix);
//		  index_led_matrix++;
//		  if(index_led_matrix >=MAX_LED_MATRIX) index_led_matrix=0;
//	  }
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/* USER CODE BEGIN 4 */
//const int MAX_LED = 4;	 	int index_led = 0; //ex4
//int counter =1;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
		timer_run();

//	counter--;						//EX1
//	if(counter<=0){
//		counter = 100;
//	}
//		if(counter == 100){
//			setEN(0);
//			display7SEG(1);
//		}
//		if(counter == 50){
//			setEN(1);
//			display7SEG(2);
//		}

//	counter--;						//ex2
//	if(counter <=0){
//		counter =200;
//	}
//	if(counter == 200 ){
//		setEN(0);
//		display7SEG(1);
//	}
//	if(counter == 150 ){
//		setEN(1);
//		display7SEG(2);
//	}
//	if(counter == 100 ){
//		setEN(2);
//		display7SEG(3);
//	}
//	if(counter == 50 ){
//		setEN(3);
//		display7SEG(0);
//	}

//	counter--;						//ex3
//	if(counter <= 0) {
//		counter =100;
//		update7SEG(index_led);
//		index_led++;
//		if(index_led >= MAX_LED) {
//			index_led = 0;
//		  }
//	}

//	counter--;						//ex4
//		if(counter <= 0) {
//			counter =25;
//			update7SEG(index_led);
//			index_led++;
//			if(index_led >= MAX_LED) {
//				index_led = 0;
//				HAL_GPIO_TogglePin(GPIOA, DOT);
//			  }
//		}


}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
