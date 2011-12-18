/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   17 March 2007
-----------------------------------------------------------------
============================================================== */
#ifndef _KEYSCAN_H_
#define _KEYSCAN_H

#include <machinescience.h>
#include <avr/interrupt.h>

#define KEY_PORT 	PORTD
#define KEY_PIN  	PIND
#define KEY_DIR		DDRD

struct KEY_XY{
	char row;
	char col;
	char key;
}keypad;

extern char scan_keypad(void);
extern void keypad_init(void);

#endif
