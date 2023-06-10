#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void) {
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitTypeDef GPIO_initStruct;

	GPIO_initStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_initStruct.GPIO_Pin = GPIO_Pin_12;
	GPIO_initStruct.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOB, &GPIO_initStruct);


	while(1) {
		GPIO_ResetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(1500);
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(3500);
	}
}
