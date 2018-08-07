#ifndef __DYNAMIC_DIGTAL_H__
#define __DYNAMIC_DIGTAL_H__
#include <reg51.h>
sbit LSA=P2^2;	 //LS138译码器中的A
sbit LSB=P2^1;	 //LS138译码器中的B
sbit LSC=P2^0;	 //LS138译码器中的C

void testDynamicDigtal();
#endif