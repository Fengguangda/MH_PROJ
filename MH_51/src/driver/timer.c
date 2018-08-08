#include "timer.h"
#include "staticDigital.h"
/*
	51单片机是12分频，那么12MHZ就分频为1MHZ，也就是时钟周期（频率的倒数）为1us
   	如果我们要定时的时间为50ms,那么我们需要定时的个数为50ms/1us = 50000个
	51的定时器为加法计数器，但是我们16位计数器（0xff）的最大值为65535，所以我们的初始值应该为65535 - 50000 = 15535
	这个时候我们的TL0 = 15535 %256 TH0 = 15535 / 256
 */
#define CNT 20
uint count = 0;
uint num = 0;
void timer0_isr(void) interrupt 1 using 1
{
	TL0 = 15535 % 256;//放初值
	TH0 = 15535 / 256;//放初值
	if(count-- == 0)
	{
		count = CNT;
		if(num == 9)
		{
			num = 0;
		}else{
			num++;
		}
		showOneNum(num);	
	}
}

void initTimer()
{
	TMOD = 0x01;//设置为16为定时器/计数器
	TL0 = 15535 % 256;//放初值
	TH0 = 15535 / 256;//放初值
	TR0 = 1;//开始计数
	ET0 = 1;//打开定时器0中断
	EA  = 1;//打开总中断
	count = CNT;
}