#include "BSP.h"
void BSP_Init(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//�ж����ȼ�����ģʽ 2
	delay_init();	    	 														//��ʱ������ʼ��
	usart1_init();																	//FPGA����
	usart2_init();																	//ң��������
	usart3_init();																	//OPENMV����
	TIM3_PWM_Init(10000-1,72-1);										//PWM��ʼ��  1khz arr=10000,psc=72

}

