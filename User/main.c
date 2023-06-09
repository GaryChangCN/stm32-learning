#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void) {
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitTypeDef GPIO_initStruct;

	GPIO_initStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_initStruct.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6;
	GPIO_initStruct.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOA, &GPIO_initStruct);


	while(1) {
		GPIO_Write(GPIOA, ~0x0001); // 0000 0000 0000 0001
		Delay_ms(500);

		GPIO_Write(GPIOA, ~0x0002); // 0000 0000 0000 0010
		Delay_ms(500);

		GPIO_Write(GPIOA, ~0x0004); // 0000 0000 0000 0100
		Delay_ms(500);

		GPIO_Write(GPIOA, ~0x0008); // 0000 0000 0000 1000
		Delay_ms(500);

		GPIO_Write(GPIOA, ~0x0010); // 0000 0000 0001 0000
		Delay_ms(500);

		GPIO_Write(GPIOA, ~0x0020); // 0000 0000 0010 0000
		Delay_ms(500);

		GPIO_Write(GPIOA, ~0x0040); // 0000 0000 0100 000
		Delay_ms(500);
	}
}
