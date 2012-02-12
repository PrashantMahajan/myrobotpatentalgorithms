/*
 * RobotFuncGoBack.h
 *
 *	Created on: Nov 25, 2011
 *		Author: Prashant
 */

#ifndef ROBOTFUNCGOBACK_H_
#define ROBOTFUNCGOBACK_H_

struct _GoBackInfo {
	int distance;
} *_goBackInfoInstance;

void _goBack ();

void _setGobackDistance (int prm_iDistance);

struct RobotFuncGoBack {
	void (*setDistance) (int);
	void (*execute) ();
};

struct RobotFuncGoBack goBack_GetInstance();

#endif /* ROBOTFUNCGOBACK_H_ */
