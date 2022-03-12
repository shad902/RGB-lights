#include "utils.h"




void delay (int x)
{
	int val =0;
	int i=0;
	
	val= ((x*20971520)/4);
	for (i=val;i>0;i--);
}

