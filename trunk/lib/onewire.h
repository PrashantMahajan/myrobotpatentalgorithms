/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
#ifndef _ONEWIRE_H_
#define _ONEWIRE_H_

#include "delay.h"

/* ONEWIRE ROUTINES */

/* standard read, write and initialize routines for onewire */
extern char onewire_init(volatile char *dq_port, char dq_pin);
extern void onewire_write(volatile char *dq_port, char dq_pin,char command);
extern char onewire_read(volatile char *dq_port, char dq_pin,char whichbyte);

#endif

