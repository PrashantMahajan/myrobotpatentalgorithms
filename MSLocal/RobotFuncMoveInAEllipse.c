/*
 * RobotFuncMoveInAEllipse.c
 *
 *  Created on: Dec 18, 2011
 *      Author: Prashant
 */

#include <machinescience.h>
#include <mastermod.h>
#include <mxapi.h>
#include "RobotFuncMoveInAEllipse.h"

void _goStraight () {
	int v_iTime = 0;
	servo_motor(0, +100);
	servo_motor(1, -100);
	v_iTime = _goBackInfoInstance->distance * 100;
	delay_ms (v_iTime);
	servo_robot(STOP, 0);
}

void _setGoStraightDistance (int prm_iDistance) {
	_goStraightInfoInstance->distance = prm_iDistance;
}

struct RobotFuncGoStraight goStraight_GetInstance () {
	struct RobotFuncGoStraight v_Return;
	v_Return.setDistance =_setGoStraightDistance;
	v_Return.execute = _goStraight;
	return v_Return;
}
