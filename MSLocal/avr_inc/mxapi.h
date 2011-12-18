/* -------------------------------------------------------------
 Machine Science API
 
 (c) Copyright Machine Science, 2007.  All rights reserved

 Version Date: Mon Oct 25 11:30:04 EDT 2010
-----------------------------------------------------------------
============================================================== */

#ifndef _MXAPI_H_
#define _MXAPI_H_

#define PRESSED		0
#define UNPRESSED	1

#define input_bit(var, pin)		var &= ~(1<<(unsigned char) pin)
#define output_bit(var, pin)	var |= 1<<(unsigned char) pin

#define end()					while(TRUE)

#include <ms.h>
#include <delay.h>
#include <pins.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#endif

