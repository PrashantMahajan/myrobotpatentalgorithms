/* -------------------------------------------------------------
 Machine Science API
 
 (c) Copyright Machine Science, 2007.  All rights reserved

Version Date: Mon Oct 25 11:03:19 EDT 2010
-----------------------------------------------------------------
============================================================== */
#ifndef _MS_H_
#define _MS_H_

#include <avr/io.h>

#define FOSM FOSC/1000000L

#define HIGH   		1
#define LOW       	0
#define TRUE   		1
#define FALSE   	0
#define ON    		1
#define OFF   		0
#define TOGGLE		2
#define ENABLE		1
#define DISABLE		0
#define ENABLED		1
#define DISABLED	0
#define NO			0	
#define YES			1

#define set_bit(var, pin)		var |= 1<<(unsigned char) pin
#define clear_bit(var, pin)		var &= ~(1<<(unsigned char)pin)
#define test_bit(var, pin)		((var & (1<<(unsigned char) pin)) >> pin)
#define toggle_bit(var, pin)	var ^= 1<<(unsigned char) pin	

typedef enum {OK = 1, ERROR = 0} status;

#endif

