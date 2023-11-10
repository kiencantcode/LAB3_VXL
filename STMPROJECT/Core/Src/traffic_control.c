/*
 * traffic_control.c
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#include "traffic_control.h"

//this function is used to turn on all leds
void setAllLeds() {
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, ON);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, ON);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, ON);

	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, ON);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, ON);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, ON);
}
//this function is used to blink all leds
void blinkingRED(){
	HAL_GPIO_TogglePin(RED_1_GPIO_Port, RED_1_Pin);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, OFF);

	HAL_GPIO_TogglePin(RED_2_GPIO_Port, RED_2_Pin);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, OFF);
}
void blinkingYELLOW(){
	HAL_GPIO_TogglePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin);
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, OFF);

	HAL_GPIO_TogglePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin);
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, OFF);
}
void blinkingGREEN(){
	HAL_GPIO_TogglePin(GREEN_1_GPIO_Port, GREEN_1_Pin);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, OFF);
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, OFF);

	HAL_GPIO_TogglePin(GREEN_2_GPIO_Port, GREEN_2_Pin);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, OFF);
}
//this function is used to turn off all leds
void offAllLeds() {
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, OFF);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, OFF);

	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, OFF);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, OFF);
}

void setRed1() {
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, ON);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, OFF);
}
void setYellow1() {
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, OFF);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, ON);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, OFF);
}
void setGreen1() {
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, OFF);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, ON);
}

void setRed2() {
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, ON);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, OFF);
}
void setYellow2() {
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, OFF);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, ON);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, OFF);
}
void setGreen2() {
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, OFF);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, ON);
}
