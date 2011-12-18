/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
#ifndef _DIGITS_H_
#define _DIGITS_H_

#include "machinescience.h"

/* DIGIT DEFINES */

#define MAX_DIGITS          16
#define NO_LEADING_ZEROS    0
#define LEADING_ZEROS       1
#define BASE_10             10
#define BASE_2              2
#define BASE_16             16

extern char * convert_to_digits(unsigned int value, char base, char leading_zeros, char no_digit);

#endif
