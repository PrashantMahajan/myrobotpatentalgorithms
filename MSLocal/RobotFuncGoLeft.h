/*
 * RobotFuncGoLeft.h
 *
 *	Created on: Nov 25, 2011
 *		Author: Prashant
 */

#ifndef ROBOTFUNCGOLEFT_H_
#define ROBOTFUNCGOLEFT_H_


void _goLeft ();

struct RobotFuncGoLeft {
	void (*execute) ();
};

struct RobotFuncGoLeft goLeft_GetInstance();

#endif /* ROBOTFUNCGOLEFT_H_ */
