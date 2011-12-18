/*
 * RobotFuncGoStraight.h
 *
 *	Created on: Nov 25, 2011
 *		Author: Prashant
 */

#ifndef ROBOTFUNCGOSTRAIGHT_H_
#define ROBOTFUNCGOSTRAIGHT_H_

struct _GoStraightInfo {
	int distance;
} *_goStraightInfoInstance;

void _goStraight ();

void _setGoStraightDistance (int prm_iDistance);

struct RobotFuncGoStraight {
	void (*setDistance) (int);
	void (*execute) ();
};

struct RobotFuncGoStraight goStraight_GetInstance();

#endif /* ROBOTFUNCGOSTRAIGHT_H_ */
