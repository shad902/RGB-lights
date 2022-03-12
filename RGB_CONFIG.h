
#ifndef __RGB_LED__GUARD
#define __RGB_LED__GUARD

#include <MKL25Z4.h>    // Device header for PRC

/* Declaring enum RGB type */
enum RGB_t
{
	Red,
	Green,
	Blue,
	Yellow,
	Cyan,
	Magenta,
	White,
	Off
};



/****************************API********************************/
void MY_FRDM_GPIO_init
	(void);
void RED_LED_ON
	(void);
void GREEN_LED_ON
	(void);
void BLUE_LED_ON
	(void);
void LEDS_OFF
    (void);
void SET_RGB_RED
    (void);
void SET_RGB_GREEN
    (void);
void SET_RGB_BLUE
    (void);
void SET_RGB_YELLOW
    (void);
void SET_RGB_CYAN
    (void);
void SET_RGB_MAGENTA
    (void);
void SET_RGB_WHITE
    (void);
void SET_COLOR (enum RGB_t RGB_STATE);
/*******************************END**************************/

#endif /* __RGB_LED__GUARD */

