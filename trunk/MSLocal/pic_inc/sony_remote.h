/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
/*NOTES:
a)	Why does this file include pic.h?
*/

#ifndef _SONY_REMOTE_H_
#define _SONY_REMOTE_H_

#include <pic.h>
#include "machinescience.h"

/* IR REMOTE CONTROL */
extern unsigned int remote();
extern unsigned int ir_sony_read(volatile char *ir_port, unsigned char ir_pin);
#endif

