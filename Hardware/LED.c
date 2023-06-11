#include "stm32f10x.h"

void LED_Init(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    GPIO_InitTypeDef GPIO_initStruct;

    GPIO_initStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_initStruct.GPIO_Pin = GPIO_Pin_1;
    GPIO_initStruct.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOA, &GPIO_initStruct);

    GPIO_SetBits(GPIOA, GPIO_Pin_1);
}

void LED1_ON(void)
{
    GPIO_ResetBits(GPIOA, GPIO_Pin_1);
}

void LED1_OFF(void)
{
    GPIO_SetBits(GPIOA, GPIO_Pin_1);
}

void LED1_TURN(void)
{
    if (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1) == 0)
    {
        LED1_OFF();
    }
    else
    {
        LED1_ON();
    }
}
