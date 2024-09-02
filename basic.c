/*
 *********************************************************
 *  	Created on: AUG 6, 2024							 *
 *      Author:  Pratik Rajendraa Marabille			     *
 *      COLLEGE: R.V COLLEGE OF ENGINEERING				 *
 *      BRANCH:  ELECTRONICS AND COMMUNICATION			 *
 *      SEM:	 VI										 *
 *********************************************************
 * 				BASIC HIGH LEVEL API					 *
 *********************************************************
 *	designed High-Level APIs to streamline and simplify  *
 *	user interactions with the STM32 hardware. While the *
 *	HAL APIs offer comprehensive functionality, they can *
 *	be lengthy and complex,designed often requiring 	 *
 *	multiple calls and detailed configurations.			 *
 *********************************************************
 */

#include "basic.h"
#include "stm32f4xx_hal.h"

uint32_t AnalogRead(ADC_HandleTypeDef adc){
	uint32_t av;
	HAL_ADC_Start(&adc);
	if(HAL_ADC_PollForConversion(&adc, 1)==1)
		av=HAL_ADC_GetValue(&adc);
	else
		av=0;
	return av;
}
uint8_t DigitalRead(GPIO_TypeDef* port,uint8_t pin){
	return HAL_GPIO_ReadPin(port, pin);
}
void DigitalWrite(GPIO_TypeDef* port,uint8_t pin, uint8_t state){
	HAL_GPIO_WritePin(port, pin, state);
}
void Delay(uint32_t delay){
	HAL_Delay(delay);
}
