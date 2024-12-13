#include "delay.h"
#include "usart.h"
#include "bsp_i2c.h"


int main(void)
{	
	delay_init();     //延时函数初始化	  
	uart_init(115200);	 //串口初始化为115200
	IIC_Init();
		while(1)
	{
		printf("开始测量，请稍等：");
		read_AHT20_once();
		delay_ms(2000);
  }
}
