/*
 * RobotPathController.c
 *
 *	Created on: Nov 24, 2011
 *		 Author: Prashant
 */

#include "RobotPathController.h"
#include "RobotFuncGoBack.c"
#include "RobotFuncGoStraight.c"
#include "RobotFuncGoLeft.c"
#include "RobotFuncGoRight.c"

void goBack (int distance) {
	struct RobotFuncGoBack goBack;
	goBack = goBack_GetInstance();
	goBack.setDistance(distance);
	goBack.execute();
}

void goForward (int distance) {
	struct RobotFuncGoStraight goStraight;
	goStraight = goStraight_GetInstance();
	goStraight.setDistance(distance);
	goStraight.execute();
}
void goLeft () {
	struct RobotFuncGoLeft goLeft;
	goLeft = goLeft_GetInstance();
	goLeft.execute();
}
void goRight () {
	struct RobotFuncGoRight goRight;
	goRight = goRight_GetInstance();
	goRight.execute();
}

struct RobotPathController getNewRobotPathController () {
	struct RobotPathController v_Return;
	v_Return.moveBack = goBack;
	v_Return.moveForward = goForward;
	v_Return.moveLeft = goLeft;
	v_Return.moveRight = goRight;
	return v_Return;
}
