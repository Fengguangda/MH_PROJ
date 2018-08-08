#include "timer.h"
#include "staticDigital.h"
/*
	51��Ƭ����12��Ƶ����ô12MHZ�ͷ�ƵΪ1MHZ��Ҳ����ʱ�����ڣ�Ƶ�ʵĵ�����Ϊ1us
   	�������Ҫ��ʱ��ʱ��Ϊ50ms,��ô������Ҫ��ʱ�ĸ���Ϊ50ms/1us = 50000��
	51�Ķ�ʱ��Ϊ�ӷ�����������������16λ��������0xff�������ֵΪ65535���������ǵĳ�ʼֵӦ��Ϊ65535 - 50000 = 15535
	���ʱ�����ǵ�TL0 = 15535 %256 TH0 = 15535 / 256
 */
#define CNT 20
uint count = 0;
uint num = 0;
void timer0_isr(void) interrupt 1 using 1
{
	TL0 = 15535 % 256;//�ų�ֵ
	TH0 = 15535 / 256;//�ų�ֵ
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
	TMOD = 0x01;//����Ϊ16Ϊ��ʱ��/������
	TL0 = 15535 % 256;//�ų�ֵ
	TH0 = 15535 / 256;//�ų�ֵ
	TR0 = 1;//��ʼ����
	ET0 = 1;//�򿪶�ʱ��0�ж�
	EA  = 1;//�����ж�
	count = CNT;
}