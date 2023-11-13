/*
 * mode_control.c
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#include "mode_control.h"

int counter;
int temp;

void modeRun(){
	switch(mode){
	case INIT:
		counter = 2;
		segRun1();
		setTimer2(500);
		mode = MODE1;
		break;
	case MODE1:
		//MODE 1 -> control 2 traffic system
		mode1Run();
		if (timer2_flag == 1) {
			setTimer2(500);
			if (counter == 2) {
				segRun2();
				ledValueData--;
				ledModeData--;
				counter = 0;
			} else {
				segRun1();
			}
			counter++;
		}
		//MODE 2 -> Modify LED RED
		if (isButtonPressed(BUTTON_1_PRESS) == 1) {
			setTimer2(500);
			temp = redTime;
			ledModeData = MODE2;
			ledValueData = redTime;
			mode = MODE2;
			offAllLeds();
		}
		break;
	case MODE2:
			if (timer2_flag == 1) {
				setTimer2(500);
				blinkingRED();
				if (counter == 2) {
					segRun2();
					counter = 0;
				} else {
					segRun1();
				}
				counter++;
			}
			//press button 1
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				setTimer2(500);
				temp = yellowTime;
				ledModeData = MODE3;
				ledValueData = yellowTime;
				mode = MODE3;
				offAllLeds();
			}
			//press button 2
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (temp > 99) {
					temp = 1;
				}
				temp++;
				ledValueData = temp;
			}
			//press button 3
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				redTime = temp;
				ledValueData = redTime;
			}
			break;

		case MODE3:
			if (timer2_flag == 1) {
				setTimer2(500);
				blinkingYELLOW();
				if (counter == 2) {
					segRun2();
					counter = 0;
				} else {
					segRun1();
				}
				counter++;
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				setTimer2(500);
				temp = greenTime;
				ledModeData = MODE4;
				ledValueData = greenTime;
				mode = MODE4;
				offAllLeds();
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (temp > 99) {
					temp = 1;
				}
				temp++;
				ledValueData = temp;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				yellowTime = temp;
				ledValueData = yellowTime;
			}
			break;

		case MODE4:
			if (timer2_flag == 1) {
				setTimer2(500);
				blinkingGREEN();
				if (counter == 2) {
					segRun2();
					counter = 0;
				} else {
					segRun1();
				}
				counter++;
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				state = RED_GREEN_INIT;
				counter = 2;
				segRun1();
				setTimer2(500);
				mode = MODE1;
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (temp > 99) {
					temp = 1;
				}
				temp++;
				ledValueData = temp;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				greenTime = temp;
				ledValueData = greenTime;
			}
			break;
	default:
		break;
	}
}

