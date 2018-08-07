#ifndef __LED_H__
#define __LED_H__
#include <reg51.h>
#include "types.h"
void initLed();
void lightLed(unsigned int which);
void offLed(unsigned int which);
void testLed();


#endif