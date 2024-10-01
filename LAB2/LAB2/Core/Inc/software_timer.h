/*
 * software_timer.h
 *
 *  Created on: Sep 26, 2024
 *      Author: dangq
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include "main.h"
extern int timer0_flag;
void setTimer0(int duration);

extern int timer1_flag;
void setTimer1(int duration);

extern int timer2_flag;
void setTimer2(int duration);

void timer_run();


#endif /* INC_SOFTWARE_TIMER_H_ */
