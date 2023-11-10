/*
 * global.h
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "traffic_control.h"
#include "mode_control.h"
#include "normal_mode.h"
#include "7seg.h"

#define TIMER_CYCLE		10

#define MODE_0_7SEG		111
#define MODE_1_7SEG		112
#define VALUE_0_7SEG	222
#define VALUE_1_7SEG	223

#define YELLOW_TIME		2
#define GREEN_TIME		3
#define RED_TIME		5

#define INIT 			0
#define MODE1			1
#define MODE2 			2
#define MODE3	 		3
#define MODE4			4

#define NUM_OF_MODES	4

extern int redTime;
extern int yellowTime;
extern int greenTime;
extern int ledModeData;
extern int ledValueData;

extern int mode;
extern int state;

void initValues();

#endif /* INC_GLOBAL_H_ */
