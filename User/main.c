#include "stm32f10x.h"                  // Device header


int main(void) {
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStruct);

	// GPIO_SetBits(GPIOC, GPIO_Pin_13);  // 不亮
	// GPIO_ResetBits(GPIOC, GPIO_Pin_13);  // 亮
	while (1)
	{
 
		// delay(2000);
		

		// delay(2000);
	}
	
 


	// RCC->APB2ENR = 0x00000010;
	// GPIOC->CRH = 0x00300000;
	// GPIOC->ODR = 0x00002000;

	// while(1) {
	// }
}