
/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2009.  All rights reserved

Version Date: Mon Oct 18 14:43:08 EDT 2010
-----------------------------------------------------------------
============================================================== */

#ifndef _SERVO_H_
#define _SERVO_H_

#include <timers.h>
#include <pins.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <ms.h>

#define OUTPUT		0
#define INPUT		1
#define PNEUMATIC	2
#define SERVO		3

#define SERVO_FULL_ON		2000
#define SERVO_FULL_OFF		1000
#define SERVO_RANGE			SERVO_FULL_ON - SERVO_FULL_OFF
#define SERVO_NEUTRAL		SERVO_RANGE / 2
#define SERVO_MULTIPLYER	1
#define SERVO_DIVISOR		1
#define SERVO_PULSE_DELAY	14000

#ifndef _TWIM_HCMD_H_
#define FORWARD 				0x00
#define REVERSE					0x01
#define SPIN_RIGHT				0x02
#define SPIN_LEFT 				0x03
#define MOTORA					0x00
#define MOTORB					0x01
#define STOP					0x04
#endif

extern uint8_t servoPortMask;
extern int16_t masterServoCounter; 
//extern int16_t masterServoControl[7];
extern int16_t masterServoControl[9];

extern void servo_port(int8_t , int8_t );
extern void servo_init(void);
extern void servo_control(int8_t );
extern void servo_position(int8_t , int16_t );
extern void servo_robot(char, signed char);
extern void servo_motor(unsigned char, signed int);
extern void servo_drive(unsigned char, unsigned int);

#endif
