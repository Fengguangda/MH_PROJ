#include "key.h"
#include "staticDigital.h"
/*
��������P3.2�ϣ��½��ش���
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
	IT0 = 1;//�½��ش���
	EX0 = 1;//�����ж�0
	EA = 1;	//�������ж�
	i = 0;
}