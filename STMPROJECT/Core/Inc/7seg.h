/*
 * 7seg.h
 *
 *  Created on: Nov 10, 2023
 *      Author: DELL
 */

#ifndef INC_7SEG_H_
#define INC_7SEG_H_

#include "global.h"

void segRun1();
void segRun2();
void display7SEG(int counter);
void update7SEG_Mode(int index, int data);
void update7SEG_Value(int index, int data);

#endif /* INC_7SEG_H_ */
