#include "key.h"
#include "staticDigital.h"
/*
按键接在P3.2上，下降沿触发
*/
uint i = 0;
void keyInt0() interrupt 0
{
	if(i == 9)
	{
	  i = 0;
	}else{
	 	i++;
	}
	showOneNum(i);			
}

void interrupt_init()
{
	IT0 = 1;//下降沿触发
	EX0 = 1;//开启中断0
	EA = 1;	//开启总中断
	i = 0;
}