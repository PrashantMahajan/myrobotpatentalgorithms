/*
 * RobotFuncMoveInAEllipse.h
 *
 *  Created on: Dec 18, 2011
 *      Author: Prashant
 */

#ifndef ROBOTFUNCMOVEINAELLIPSE_H_
#define ROBOTFUNCMOVEINAELLIPSE_H_

struct _MoveInEllipseInfo {
	int radiusx;
	int radiusy;
} *_moveInCircleInfoInstance;

struct RobotFuncMoveInCircle {
	void (*setRadius) (int, int);
	void (*execute) ();
};

void _moveInEllipse ();

void _setRadius (int prm_iRadiusx, int prm_iRadiusy);

struct RobotFuncMoveInCircle moveInEllipse_GetInstance();

#endif /* ROBOTFUNCMOVEINAELLIPSE_H_ */
