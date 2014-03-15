#include "stm32f30x.h"

#include "delay.h"
#include "uart_1.h"
#include "led_blink.h"

int main(void)
{
	Uart_1Init();
	ledInit();

    while(1)
    {
    }
}
