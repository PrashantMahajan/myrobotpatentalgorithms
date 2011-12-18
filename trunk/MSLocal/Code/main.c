/*
 * main.c
 *
 *	Created on: Nov 24, 2011
 *		Author: Prashant
 */

#include <machinescience.h>

#include "RobotPathController.c"

int main (void) {
	struct RobotPathController v_objController;
	servo_control(ENABLE);
	v_objController = getNewRobotPathController();
	v_objController.moveForward(1);
	v_objController.moveLeft();
	v_objController.moveRight();
	v_objController.moveBack(1);

	v_objController = getNewRobotPathController();
	v_objController.moveForward(1);
	v_objController.moveRight();
	v_objController.moveLeft();
	v_objController.moveBack(1);

	end();
}
