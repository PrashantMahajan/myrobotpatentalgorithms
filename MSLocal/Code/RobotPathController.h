/*
 * RobotPathController.h
 *
 *  Created on: Nov 24, 2011
 *      Author: Prashant
 */

#ifndef ROBOTPATHCONTROLLER_H_
#define ROBOTPATHCONTROLLER_H_


struct RobotPathController {
	void (*moveBack) (int distance);
	void (*moveForward) (int distance);
	void (*moveRight) ();
	void (*moveLeft) ();
};

void goBack (int distance);
void goForward (int distance);
void goLeft ();
void goRight ();

#endif /* ROBOTPATHCONTROLLER_H_ */
