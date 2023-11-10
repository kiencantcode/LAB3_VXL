/*
 * normal_mode.c
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#include "normal_mode.h"
#include "global.h"

void mode1Run() {
	switch (state) {
	case RED_GREEN_INIT:
				setTimer1(greenTime * 1000);
				ledModeData = redTime;
				ledValueData = greenTime;
				setRed1();
				setGreen2();
				state = RED_YELLOW;
			break;
		case RED_YELLOW:
			if (timer1_flag == 1) {
				setTimer1(yellowTime * 1000);
				setYellow2();
				ledValueData = yellowTime;
				state = GREEN_RED;
			}
			break;
		case GREEN_RED:
			if (timer1_flag == 1) {
				setTimer1(greenTime * 1000);
				setGreen1();
				setRed2();
				ledModeData = greenTime;
				ledValueData = redTime;
				state = YELLOW_RED;
			}
			break;
		case YELLOW_RED:
			if (timer1_flag == 1) {
				setTimer1(yellowTime * 1000);
				setYellow1();
				ledModeData = yellowTime;
				state = RED_GREEN;
			}
			break;
		case RED_GREEN:
			if (timer1_flag == 1) {
					setTimer1(greenTime * 1000);
					setRed1();
					setGreen2();
					ledModeData = redTime;
					ledValueData = greenTime;
					state = RED_YELLOW;
				}
			break;
	default:
		break;
	}
}
