#include "led.h"

void initLed()
{
   P0 = 0x00;
}

/*
  unsigned int which:to control which led will be light
*/
void lightLed(unsigned int which)
{
	uchar setValue = 1<<which;
	P0 |= setValue;
}
/*
  unsigned int which:to control which led will be close
*/
void offLed(unsigned int which)
{
	//uchar setValue = ~(1<<which);
	P0 &= ~((1U)<<(which-1));	
}

void testLed()
{
	unsigned int i = 0;
	initLed();
	for(i = 0;i < 8;i++)
	{
		lightLed(i);
	}
	offLed(2);
}



