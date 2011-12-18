/*
 * RobotFuncGoLeft.c
 *
 *	Created on: Nov 24, 2011
 *		Author: Prashant
 */

#include <machinescience.h>
#include <mastermod.h>
#include <mxapi.h>
#include <servo.h>
#include "RobotFuncGoLeft.h"

void _goLeft () {
	servo_motor(0, +100);
	servo_motor(1, +100);
	delay_ms (4000);
	servo_robot(STOP, 0);
}

struct RobotFuncGoLeft goLeft_GetInstance () {
	struct RobotFuncGoLeft v_Return;
	v_Return.execute = _goLeft;
	return v_Return;
}
