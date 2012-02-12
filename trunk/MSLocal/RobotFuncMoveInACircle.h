/*
 * RobotFuncMoveInACircle.h
 *
 *  Created on: Dec 18, 2011
 *      Author: Prashant
 */

#ifndef ROBOTFUNCMOVEINACIRCLE_H_
#define ROBOTFUNCMOVEINACIRCLE_H_

struct _MoveInCircleInfo {
	int radius;
} *_moveInCircleInfoInstance;

struct RobotFuncMoveInCircle {
	void (*setRadius) (int);
	void (*execute) ();
};

void _moveInCircle ();

void _setRadius (int prm_iRadius);

struct RobotFuncMoveInCircle moveInCircle_GetInstance();


#endif /* ROBOTFUNCMOVEINACIRCLE_H_ */
