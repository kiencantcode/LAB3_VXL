/*
 * 7seg.c
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#include "7seg.h"

void display7SEG_Mode(int counter) {
	//led display number 0 by enable 6 ports as follow (reset state)
	if (counter == 0) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, SET);
	}
	//led display number 1 by enable 2 ports as follow (reset state)
	if (counter == 1) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, SET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, SET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, SET);
	}
	//led display number 2 by enable 5 ports as follow (reset state)
	if (counter == 2) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, SET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
	//led display number 3 by enable 5 ports as follow (reset state)
	if (counter == 3) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
	//led display number 4 by enable 4 ports as follow (reset state)
	if (counter == 4) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, SET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, SET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
	//led display number 5 by enable 5 ports as follow (reset state)
	if (counter == 5) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, SET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
	//led display number 6 by enable 6 ports as follow (reset state)
	if (counter == 6) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, SET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
	//led display number 7 by enable 3 ports as follow (reset state)
	if (counter == 7) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, SET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, SET);
	}
	//led display number 8 by enable 7 ports as follow (reset state)
	if (counter == 8) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
	//led display number 9 by enable 6 ports as follow (reset state)
	if (counter == 9) {
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
		HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
		HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
		HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
	}
}
void display7SEG_Value(int counter) {
	//led display number 0 by enable 6 ports as follow (reset state)
	if (counter == 0) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, SET);
	}
	//led display number 1 by enable 2 ports as follow (reset state)
	if (counter == 1) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, SET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, SET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, SET);
	}
	//led display number 2 by enable 5 ports as follow (reset state)
	if (counter == 2) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, SET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
	//led display number 3 by enable 5 ports as follow (reset state)
	if (counter == 3) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
	//led display number 4 by enable 4 ports as follow (reset state)
	if (counter == 4) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, SET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, SET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
	//led display number 5 by enable 5 ports as follow (reset state)
	if (counter == 5) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, SET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
	//led display number 6 by enable 6 ports as follow (reset state)
	if (counter == 6) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, SET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
	//led display number 7 by enable 3 ports as follow (reset state)
	if (counter == 7) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, SET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, SET);
	}
	//led display number 8 by enable 7 ports as follow (reset state)
	if (counter == 8) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
	//led display number 9 by enable 6 ports as follow (reset state)
	if (counter == 9) {
		HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
		HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
		HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
	}
}
void update7SEG_Mode(int index, int data) {
	switch (index) {
	case MODE_0_7SEG:
		// Display the first 7 SEG led to display MODE
		HAL_GPIO_WritePin(EN_MODE_0_GPIO_Port, EN_MODE_0_Pin, RESET);
		HAL_GPIO_WritePin(EN_MODE_1_GPIO_Port, EN_MODE_1_Pin, SET);
		display7SEG_Mode(data / 10);
		break;
	case MODE_1_7SEG:
		// Display the second 7 SEG led to display MODE
		HAL_GPIO_WritePin(EN_MODE_0_GPIO_Port, EN_MODE_0_Pin, SET);
		HAL_GPIO_WritePin(EN_MODE_1_GPIO_Port, EN_MODE_1_Pin, RESET);
		display7SEG_Mode(data % 10);
		break;
	default:
		break;
	}
}

void update7SEG_Value(int index, int data) {
	switch (index) {
	case VALUE_0_7SEG:
		// Display the first 7 SEG led to display VALUE
		HAL_GPIO_WritePin(EN_VAL_0_GPIO_Port, EN_VAL_0_Pin, RESET);
		HAL_GPIO_WritePin(EN_VAL_1_GPIO_Port, EN_VAL_1_Pin, SET);
		display7SEG_Value(data / 10);
		break;
	case VALUE_1_7SEG:
		// Display the second 7 SEG led to display VALUE
		HAL_GPIO_WritePin(EN_VAL_0_GPIO_Port, EN_VAL_0_Pin, SET);
		HAL_GPIO_WritePin(EN_VAL_1_GPIO_Port, EN_VAL_1_Pin, RESET);
		display7SEG_Value(data % 10);
		break;
	default:
		break;
	}
}

void segRun1() {
	update7SEG_Mode(MODE_0_7SEG, ledModeData);
	update7SEG_Value(VALUE_0_7SEG, ledValueData);
}

void segRun2() {
	update7SEG_Mode(MODE_1_7SEG, ledModeData);
	update7SEG_Value(VALUE_1_7SEG, ledValueData);
}
