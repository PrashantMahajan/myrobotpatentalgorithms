/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
#ifndef _PWM_H_
#define _PWM_H_

#include "machinescience.h"
#include <pic.h>

/* PWM HARDWARE DEFINES */

/* basic pwm defines */
#define PWM_ON 0
#define PWM_OFF 1


extern void pwm_onoff(unsigned char onoff, unsigned char channel);
extern char pwm_duty(unsigned char duty, unsigned char channel);
extern char pwm_init(unsigned long fpwm, unsigned char duty1, unsigned char duty2);


#endif
