/*
 * mode_control.c
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#include "mode_control.h"

int seg_counter;
int tempVal;

void modeRun(){
	switch(mode){
	case INIT:
		seg_counter = 2;
		segRun1();
		setTimer2(500);
		mode = MODE1;
		break;
	case MODE1:
		//In MODE1, we have 2 traffic systems to control
		mode1Run();
		if (timer2_flag == 1) {
			setTimer2(500);
			if (seg_counter == 2) {
				segRun2();
				ledValueData--;
				ledModeData--;
				seg_counter = 0;
			} else {
				segRun1();
			}
			seg_counter++;
		}
		//if we press button 1, system will change to MODE2
		if (isButtonPressed(BUTTON_1_PRESS) == 1) {
			setTimer2(500);
			tempVal = redTime;
			ledModeData = MODE2;
			ledValueData = redTime;
			mode = MODE2;
			offAllLeds();
		}
		break;
	case MODE2:
			//In MODE2, we use button 2 and 3 to adjust duration of red light
			if (timer2_flag == 1) {
				setTimer2(500);
				blinkingLeds();
				if (seg_counter == 2) {
					segRun2();
					seg_counter = 0;
				} else {
					segRun1();
				}
				seg_counter++;
			}
			//if we press button 1, system will change to MODE3
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				setTimer2(500);
				tempVal = yellowTime;
				ledModeData = MODE3;
				ledValueData = yellowTime;
				mode = MODE3;
				offAllLeds();
			}
			//if we press button 2, duration of red light will increase 1s
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (tempVal > 99) {
					tempVal = 1;
				}
				tempVal++;
				ledValueData = tempVal;
			}
			//if we press button 3, system will save the change to red light
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				redTime = tempVal;
				ledValueData = redTime;
			}
			break;
			//MODE3 is similar to MODE2
		case MODE3:
			if (timer2_flag == 1) {
				setTimer2(500);
				blinkingLeds();
				if (seg_counter == 2) {
					segRun2();
					seg_counter = 0;
				} else {
					segRun1();
				}
				seg_counter++;
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				setTimer2(500);
				tempVal = greenTime;
				ledModeData = MODE4;
				ledValueData = greenTime;
				mode = MODE4;
				offAllLeds();
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (tempVal > 99) {
					tempVal = 1;
				}
				tempVal++;
				ledValueData = tempVal;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				yellowTime = tempVal;
				ledValueData = yellowTime;
			}
			break;
			//MODE4 is similar to MODE1
		case MODE4:
			if (timer2_flag == 1) {
				setTimer2(500);
				blinkingLeds();
				if (seg_counter == 2) {
					segRun2();
					seg_counter = 0;
				} else {
					segRun1();
				}
				seg_counter++;
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				state = RED_GREEN_INIT;
				seg_counter = 2;
				segRun1();
				setTimer2(500);
				mode = MODE1;
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (tempVal > 99) {
					tempVal = 1;
				}
				tempVal++;
				ledValueData = tempVal;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				greenTime = tempVal;
				ledValueData = greenTime;
			}
			break;
	default:
		break;
	}
}

