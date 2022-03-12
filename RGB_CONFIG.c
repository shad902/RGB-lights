
#include "RGB_CONFIG.h"
#include "../Library/utils.h"  

int GPIOB_PDOR_ADDRESS = 0x400FF040u + 0x00;				// PORTB Data Output Register Address
int GPIOB_PDIR_ADDRESS = 0x400FF040u + 0x10;				// PORTB Data Input Register Address
int GPIOB_PDDR_ADDRESS = 0x400FF040u + 0x14;				// PORTB Data Direction Register Address

// Pin B18 is Red
// Pin B19 is Green
// Pin D1 is Blue

void SET_COLOR(enum RGB_t x) {
		MY_FROM_GPIO_init();
		PTB->PDOR = PTB->PDIR | (1<<18) | (1<<19); //turn off
		PTD->PDOR = PTD->PDIR | (1<<1);
	if (x==Red){
		PTB->PDOR = PTB->PDIR &~ (1<<18);
	}
	if (x==Green){
		PTB->PDOR = PTB->PDIR &~ (1<<19);
	if (x==Blue){
	PTD->PDOR = PTD->PDIR &- (1<<1);
	}
	if (x==Yellow){
		PTB->PDOR = PTB->PDIR &- (1<<18); //red on
		PTB->PDOR = PTB->PDIR &- (1<<19); // green on (y)
	}
	if (x==Cyan){
		PTD->PDOR = PTD->PDIR &- (1<1); //blue 
		PTB->PDOR = PTD->PDIR &- (1<<19); //green on (c)
	}
	if (x==Magenta){
		PTD->PDOR = PTD->PDIR &- (1<<1); //blue
		PTB->PDOR = PTB->PDIR &- (1<<18); //red on (m)
	}
	if (x==White){
		PTD->PDOR - PTD->PDIR &- (1<<1); //blue on
		PTB->PDOR - PTB->PDIR &- (1<<18); //red on
		PTB->PDOR - PTB->PDIR &- (1<<19); // green on makes white
	}
	if(x==Off){
	}
}


////////////// Use to enalbe pins to GPIO function
void PORT_B_and_D__FUNCTION
	(void)
{
	PORTB->PCR[18] = (1UL <<  8);  // Pin PTB18 is GPIO
    PORTB->PCR[19] = (1UL <<  8);  // Pin PTB19 is GPIO  
	PORTD->PCR[1]  = (1UL <<  8);  // Pin PTD1  is GPIO
}
////////////// You will learn more about PCR in later labs

void MY_FRDM_GPIO_init (void) 
{
  int val;
  int result;
  
  /* 1- CLOCK ENABLE
	 *    Enable the System Clock to PORT B 
	 *    Enable the systim clock to PORT D 
	 *    Make sure you do not overwrite the other ports
	 *    use read-modify-write to mask the specif ports
	 */
	
	/*********** YOUR CODE HERE *************/

	

  /* 2- SET GPIO FUNCTION
	 *    Define Port B & D specific pin function to act as GPIO 
	 */
  
	/*********** YOUR CODE HERE *************/
 
 
 
 
 /* 3- DATA DIRECTION 
	*    Configure Port B Data Direction to be outputs
	*    Configure Port D Data Direction to be outputs
	*/  
	
	/*********** YOUR CODE HERE *************/

	
}



////////////// Use to turn Red LED on
void RED_LED_ON
	(void) 
{
  // Turn the red LED on -- Clear Pin B18

}

////////////// Use to turn Green LED on/off
void GREEN_LED_ON
	(void) 
{
  // Turn the green LED on -- Clear Pin B19

}

////////////// Use to turn Blue LED on/off
void BLUE_LED_ON
	(void) 
{
  // Turn the blue LED on -- Clear Pin D1 

}

////////////// Use to turn ALL LEDs off
void LEDS_OFF
	(void) 
{
  // Turn the red, green and blue LEDs off -- Set Pins B18, B19, D1
  
  // Turn the red LED off -- Set Pin B18

  
  // Turn the green LED off -- Set Pin B19

  
  // Turn the blue LED off -- Set Pin D1


}

////////////// Use to set the RGB LED to red
void SET_RGB_RED
	(void) 
{
  // Turn All off, Turn Red on	

}

////////////// Use to set the RGB LED to green
void SET_RGB_GREEN
	(void) 
{
   // Turn All off, Turn Green on	
  
}

////////////// Use to set the RGB LED to blue
void SET_RGB_BLUE
	(void) 
{
  // Turn All off, Turn Blue on	
	
}
////////////// Use to set the RGB LED to yellow
void SET_RGB_YELLOW
	(void) 
{
  // Turn ONLY the red and green LEDs on

}

////////////// Use to set the RGB LED to cyan
void SET_RGB_CYAN
	(void) 
{
  // Turn ONLY the green and blue LEDs on
	
}

////////////// Use to set the RGB LED to magenta
void SET_RGB_MAGENTA
	(void) 
{
  // Turn ONLY the red and blue LEDs on
 
}

////////////// Use to set the RGB LED to white
void SET_RGB_WHITE
	(void) 
{
  // Turn the red, green and blue LEDs on -- Clear Pins B18, B19, D1
 
}

/***********************end***********************/


