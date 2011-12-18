/* -------------------------------------------------------------
 Machine Science API

(c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   26 March 2007
 -----------------------------------------------------------------
 ============================================================== */
#ifndef _GEARS_H _
#define _GEARS_H_

#include "machinescience.h"
#include "delay.h"

/* GEARS DEFINES */
#define RIGHT_MOTOR RB3
#define LEFT_MOTOR RB0
#define RIGHT_MOTOR_DIR TRISB3
#define LEFT_MOTOR_DIR TRISB0

extern void gears_init(void);
extern void robot_pulse(int count, int left_pulse, int right_pulse);
extern void robot_move(int count, int pulse_width[]);	
#endif
