/* -------------------------------------------------------------
 Machine Science API

(c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   26 Feburary 2007
 -----------------------------------------------------------------
 ============================================================== */
#ifndef _TONE_H_
#define _TONE_H_

#include "machinescience.h"
#include "delay.h"

/* TONES DEFINES */
#define E3 165
#define F3 175
#define F3S 185
#define G3 196
#define G3S 208
#define A3 220
#define A3S 233
#define B3 247
#define C4 262
#define C4S 277
#define D4 294
#define D4S 311
#define E4 330
#define F4 349
#define F4S 370
#define G4 392
#define G4S 415
#define A4 440
#define A4S 466
#define B4 494
#define C5 523
#define C5S 554
#define D5 587
#define D5S 622
#define E5 659
#define F5 698
#define F5S 740
#define G5 784
#define G5S 831
#define A5 880
#define A5S 932
#define B5 988
#define thirnote 60
#define sixtnote 2*thirnote
#define eighnote 2*sixtnote
#define quarnote 2*eighnote
#define halfnote 2*quarnote
#define fullnote 2*halfnote
#define wholnote 2*halfnote

extern void tone(int,int);
#endif
