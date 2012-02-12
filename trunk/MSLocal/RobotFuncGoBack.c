/*
 * RobotFuncGoBack.c
 *
 *	Created on: Nov 24, 2011
 *		Author: Prashant
 */

#include <machinescience.h>
#include <mastermod.h>
#include <mxapi.h>
#include <servo.h>
#include "RobotFuncGoBack.h"

void _goBack () {
	int v_iTime = 0;
	servo_motor(0, -100);
	servo_motor(1, +100);
	v_iTime = _goBackInfoInstance->distance * 100;
	delay_ms (v_iTime);
	servo_robot(STOP, 0);
}

void _setGobackDistance (int prm_iDistance) {
	_goBackInfoInstance->distance = prm_iDistance;
}

struct RobotFuncGoBack goBack_GetInstance () {
	struct RobotFuncGoBack v_Return;
	v_Return.setDistance =_setGobackDistance;
	v_Return.execute = _goBack;
	return v_Return;
}
