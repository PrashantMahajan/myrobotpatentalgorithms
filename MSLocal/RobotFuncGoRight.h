/*
 * RobotFuncGoRight.h
 *
 *	Created on: Nov 25, 2011
 *		Author: Prashant
 */

#ifndef ROBOTFUNCGORIGHT_H_
#define ROBOTFUNCGORIGHT_H_

void _goRight ();

struct RobotFuncGoRight {
	void (*execute) ();
};

struct RobotFuncGoRight goRight_GetInstance();

#endif /* ROBOTFUNCGORIGHT_H_ */
