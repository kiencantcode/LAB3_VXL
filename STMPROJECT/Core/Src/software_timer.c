/*
 * software_timer.c
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#include "software_timer.h"


#define TIMER_CYCLE 10
int timer1_flag = 0;
int timer1_counter = 0;

int timer2_flag = 0;
int timer2_counter = 0;

int timer3_flag = 0;
int timer3_counter = 0;

void setTimer1(int duration) {
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}

void setTimer2(int duration) {
	timer2_counter = duration / TIMER_CYCLE;
	timer2_flag = 0;
}

void setTimer3(int duration) {
	timer3_counter = duration / TIMER_CYCLE;
	timer3_flag = 0;
}

void timerRun() {
	if (timer1_counter > 0) {
		timer1_counter--;
	} else {
		timer1_flag++;
	}

	if (timer2_counter > 0) {
		timer2_counter--;
	} else {
		timer2_flag++;
	}

	if (timer3_counter > 0) {
		timer3_counter--;
	} else {
		timer3_flag++;
	}
}
