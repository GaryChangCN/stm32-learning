#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "LED.h"
#include "Buzzer.h"
#include "LightSensor.h"

uint8_t KeyNum;

int main(void)
{
	LED_Init();
	Buzzer_Init();
	LightSensor_Init();

	while (1)
	{

		if (LightSensor_get() == 1)
		{
			Buzzer_ON();
			LED1_ON();
		}
		else
		{
			Buzzer_OFF();
			LED1_OFF();
		}
	}
}
