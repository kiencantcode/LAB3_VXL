/*
 * traffic_control.h
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#ifndef INC_TRAFFIC_CONTROL_H_
#define INC_TRAFFIC_CONTROL_H_

#include "global.h"

#define ON		RESET
#define OFF		SET

void setAllLeds();
void offAllLeds();
void blinkingLeds();

void setRed1();
void setYellow1();
void setGreen1();

void setRed2();
void setYellow2();
void setGreen2();

#endif /* INC_TRAFFIC_CONTROL_H_ */
