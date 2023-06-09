#include "stm32f10x.h"                  // Device header


int main(void) {
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitTypeDef GPIO_initStruct;

	GPIO_initStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_initStruct.GPIO_Pin = GPIO_Pin_0;
	GPIO_initStruct.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOA, &GPIO_initStruct);

	GPIO_ResetBits(GPIOA, GPIO_Pin_0);

	while(1) {
	}
}