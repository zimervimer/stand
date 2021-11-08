#include "stm32f10x.h"
int Setup (void){
	RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;
	GPIOB->CRH = 0x00180000; //setting port B pin#
}
