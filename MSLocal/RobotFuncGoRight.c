/*
 * RobotFuncGoRight.c
 *
 *	Created on: Nov 24, 2011
 *		Author: Prashant
 */

#include <machinescience.h>
#include <mastermod.h>
#include <mxapi.h>
#include <servo.h>
#include "RobotFuncGoRight.h"

void _goRight () {
	servo_motor(0, -100);
	servo_motor(1, -100);
	delay_ms (4000);
	servo_robot(STOP, 0);
}

struct RobotFuncGoRight goRight_GetInstance () {
	struct RobotFuncGoRight v_Return;
	v_Return.execute = _goRight;
	return v_Return;
}
