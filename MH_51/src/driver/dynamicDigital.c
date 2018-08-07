#include "dynamicDigital.h"
void testDynamicDigtal()
{
/*
查看74LS138译码器，对应段码	
需要的时候再进行断码的写入
*/
   unsigned char val[10] = {0x40,0x79,0x24,0x30,0x19,0x12,0x82,0xf8,0x00,0xf6};
   LSA = 0;
   LSB = 0;
   LSC = 1;
   P0 = 0x40;
}