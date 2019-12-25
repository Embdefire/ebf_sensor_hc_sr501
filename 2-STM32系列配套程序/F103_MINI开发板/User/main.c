/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   HC-SR501人体红外感应
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 F103-MINI STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 

#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_exti.h" 


/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */ 
int main(void)
{
	/* LED 端口初始化 */
	LED_GPIO_Config();
	  	
	/* 初始化EXTI中断，按感应到人体热源会触发中断*/
	EXTI_SR501_Config(); 
	
	/* 等待中断，由于使用中断方式，CPU不用轮询按键 */
	while(1)                            
	{
	}
}
/*********************************************END OF FILE**********************/
