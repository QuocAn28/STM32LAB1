/*
 * LAB2.c
 *
 *  Created on: Oct 1, 2024
 *      Author: dangq
 */


#include <LAB2.h>
int led_buffer[4]= {6,9,6,9};
int BIN_array[8];
uint8_t matrix_buffer [8] = {0x18 , 0x3C , 0x66 , 0xC3 , 0xFF , 0xFF , 0xC3 , 0xC3 };

void setEN(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_RESET);
	}

}
void display7SEG(int num){
	switch (num){
		case 0:
				HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_SET);

				break;
		case 1:
					HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_SET);

				break;

		case 2:
					HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

				break;
		case 3:
					HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

				break;
		case 4:
						HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

					break;
		case 5:
						HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

					break;
		case 6:
						HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

					break;
		case 7:
						HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_SET);

					break;
		case 8:
						HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

					break;
		case 9:
						HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);

					break;
	}

}
void switch7SEGEX2(int status){
	switch(status){
	case 0:
		setEN(0);
		display7SEG(1);
		break;
	case 1:
		setEN(1);
		display7SEG(2);
		break;
	case 2:
		setEN(2);
		display7SEG(3);
		break;
	case 3:
		setEN(3);
		display7SEG(0);
		break;
	}
}

void switch7SEG(int status){
	switch(status){
	case 0:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOB, SEG_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEG_1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEG_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEG_3, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEG_4, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, SEG_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, SEG_6, GPIO_PIN_RESET);
		break;
	}

}
void update7SEG(int index){

	switch(index){
	case 0:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_RESET);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
void updateClockBuffer (int index, int hour, int minute){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;
	switch(index){
		case 0:
			setEN(0);
			display7SEG(led_buffer[0]);
			break;
		case 1:
			setEN(1);
			display7SEG(led_buffer[1]);
			break;
		case 2:
			setEN(2);
			display7SEG(led_buffer[2]);
			break;
		case 3:
			setEN(3);
			display7SEG(led_buffer[3]);
			break;
		default:
			break;
	}
}
void turnonROW(int index){
	switch(index){
	case 0:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 1:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 2:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 3:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 4:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 5:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 6:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, RESET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, SET);
		break;
	case 7:
		  HAL_GPIO_WritePin(GPIOB, ROW_0, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_1, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_2, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_3, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_4, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_5, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_6, SET);
		  HAL_GPIO_WritePin(GPIOB, ROW_7, RESET);
		break;
	}
}
void turnonCOL(int matrix_buffer){
	BIN_array[7]=(matrix_buffer >> 0)&1;
	BIN_array[6]=(matrix_buffer >> 1)&1;
	BIN_array[5]=(matrix_buffer >> 2)&1;
	BIN_array[4]=(matrix_buffer >> 3)&1;
	BIN_array[3]=(matrix_buffer >> 4)&1;
	BIN_array[2]=(matrix_buffer >> 5)&1;
	BIN_array[1]=(matrix_buffer >> 6)&1;
	BIN_array[0]=(matrix_buffer >> 7)&1;

	  HAL_GPIO_WritePin(GPIOA, ENM_0, !BIN_array[0]);
	  HAL_GPIO_WritePin(GPIOA, ENM_1, !BIN_array[1]);
	  HAL_GPIO_WritePin(GPIOA, ENM_2, !BIN_array[2]);
	  HAL_GPIO_WritePin(GPIOA, ENM_3, !BIN_array[3]);
	  HAL_GPIO_WritePin(GPIOA, ENM_4, !BIN_array[4]);
	  HAL_GPIO_WritePin(GPIOA, ENM_5, !BIN_array[5]);
	  HAL_GPIO_WritePin(GPIOA, ENM_6, !BIN_array[6]);
	  HAL_GPIO_WritePin(GPIOA, ENM_7, !BIN_array[7]);
}
void updateLEDMatrix(int index){
	switch (index){
	case 0:
		turnonROW(index);
		turnonCOL(matrix_buffer [0]);
		break;
	case 1:
		turnonROW(index);
		turnonCOL(matrix_buffer [1]);
		break;
	case 2:
		turnonROW(index);
		turnonCOL(matrix_buffer [2]);
		break;
	case 3:
		turnonROW(index);
		turnonCOL(matrix_buffer [3]);
		break;
	case 4:
		turnonROW(index);
		turnonCOL(matrix_buffer [4]);
		break;
	case 5:
		turnonROW(index);
		turnonCOL(matrix_buffer [5]);
		break;
	case 6:
		turnonROW(index);
		turnonCOL(matrix_buffer [6]);
		break;
	case 7:
		turnonROW(index);
		turnonCOL(matrix_buffer [7]);
		break;
	default:
		break;

	}
}
int i =0, j=0;
void update_Shiftleft(int matrix_buffer){

	BIN_array[7]=(matrix_buffer >> (j+0)%8)&1;
	BIN_array[6]=(matrix_buffer >> (j+1)%8)&1;
	BIN_array[5]=(matrix_buffer >> (j+2)%8)&1;
	BIN_array[4]=(matrix_buffer >> (j+3)%8)&1;
	BIN_array[3]=(matrix_buffer >> (j+4)%8)&1;
	BIN_array[2]=(matrix_buffer >> (j+5)%8)&1;
	BIN_array[1]=(matrix_buffer >> (j+6)%8)&1;
	BIN_array[0]=(matrix_buffer >> (j+7)%8)&1;
	i++;
	if(i>=8){
		i=0;
		j++;
	}
	  HAL_GPIO_WritePin(GPIOA, ENM_0, !BIN_array[0]);
	  HAL_GPIO_WritePin(GPIOA, ENM_1, !BIN_array[1]);
	  HAL_GPIO_WritePin(GPIOA, ENM_2, !BIN_array[2]);
	  HAL_GPIO_WritePin(GPIOA, ENM_3, !BIN_array[3]);
	  HAL_GPIO_WritePin(GPIOA, ENM_4, !BIN_array[4]);
	  HAL_GPIO_WritePin(GPIOA, ENM_5, !BIN_array[5]);
	  HAL_GPIO_WritePin(GPIOA, ENM_6, !BIN_array[6]);
	  HAL_GPIO_WritePin(GPIOA, ENM_7, !BIN_array[7]);

}
void updateARRAY_BOTtoTOP(){
	int temp = matrix_buffer[0];
	matrix_buffer[0] = matrix_buffer[1];
	matrix_buffer[1] = matrix_buffer[2];
	matrix_buffer[2] = matrix_buffer[3];
	matrix_buffer[3] = matrix_buffer[4];
	matrix_buffer[4] = matrix_buffer[5];
	matrix_buffer[5] = matrix_buffer[6];
	matrix_buffer[6] = matrix_buffer[7];
	matrix_buffer[7] = temp;
}
void updateLEDMatrix_EX10(int index){
	switch (index){
	case 0:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [0]);
		break;
	case 1:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [1]);
		break;
	case 2:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [2]);
		break;
	case 3:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [3]);
		break;
	case 4:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [4]);
		break;
	case 5:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [5]);
		break;
	case 6:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [6]);
		break;
	case 7:
		turnonROW(index);
		update_Shiftleft(matrix_buffer [7]);
		break;
	default:
		break;

	}
}


