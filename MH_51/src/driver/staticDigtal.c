#include "staticDigital.h"

/*
				1  1 1 1    1 1 1 1
				dp g f e    d c b a
0.gΪ1          0  1 0 0    0 0 0 0  --->0x40
1.cbΪ0			0  1 1 1    1 0 0 1	 --->0x79
2.gedbΪ0		0  0 1 0    0 1 0 0	 --->0x24
3.abgcdΪ0      0  0 1 1    0 0 0 0	 --->0x30;
4.fgbcΪ0	    0  0 0 1    1 0 0 1	 --->0x19
5.afgcdΪ0      0  0 0 1    0 0 1 0	 --->0x12
6.afedcgΪ0		1  0 0 0    0 0 1 0	 --->0x82
7.abcΪ0        1  1 1 1    1 0 0 0	 --->0xf8
8.ȫΪ0                              --->0x00
9.abcdfg        0  0 0 1    0 0 0 0  --->0x10
*/

void showOneNum(uint count)
{
	unsigned char val[10] = {0x40,0x79,0x24,0x30,0x19,0x12,0x82,0xf8,0x00,0x10};
	if(count < 0 || count > 9)
		return ;
	P0 = val[count];

}

void test()
{
 	showOneNum(9);
}