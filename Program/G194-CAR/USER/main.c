#include "main.h"
int main(void)
{	
	BSP_Init();						//�弶��ʼ��
	Calib_rcdata_Zero();
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	timer_Init(); 																	//ϵͳTick��ʼ��  10ms
	while(1)
	{
		
	} 
}

