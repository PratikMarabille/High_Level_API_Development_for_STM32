/*
 * basic.h
 *********************************************************
 *  	Created on: AUG 6, 2024
 *      Author:  Pratik Rajendra Marabille
 *      COLLEGE: R.V COLLEGE OF ENGINEERING
 *      BRANCH:  ELECTRONICS AND COMMUNICATION
 *      SEM:	 VI
 *********************************************************
 */

#ifndef INC_BASIC_H_
#define INC_BASIC_H_

#include "stm32f4xx_hal.h"

#define A GPIOA
#define B GPIOB
#define C GPIOC
#define D GPIOD
#define E GPIOE
#define F GPIOF
#define G GPIOG
#define H GPIOH
#define I GPIOI
#define P0 GPIO_PIN_0
#define P1 GPIO_PIN_1
#define P2 GPIO_PIN_2
#define P3 GPIO_PIN_3
#define P4 GPIO_PIN_4
#define P5 GPIO_PIN_5
#define P6 GPIO_PIN_6
#define P7 GPIO_PIN_7
#define P8 GPIO_PIN_8
#define P9 GPIO_PIN_9
#define P10 GPIO_PIN_10
#define P11 GPIO_PIN_11
#define P12 GPIO_PIN_12
#define P13 GPIO_PIN_13
#define P14 GPIO_PIN_14
#define P15 GPIO_PIN_15
#define HIGH GPIO_PIN_SET
#define LOW GPIO_PIN_RESET

uint32_t AnalogRead(ADC_HandleTypeDef adc);
uint8_t DigitalRead(GPIO_TypeDef* port,uint8_t pin);
void DigitalWrite(GPIO_TypeDef* port,uint8_t pin, uint8_t state);
void Delay(uint32_t delay);

#endif /* INC_BASIC_H_ */
