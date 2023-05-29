/*
 * Driver.h
 *
 *  Created on: May 16, 2023
 *      Author: ACER
 */

#ifndef DRIVER_STEP_H_
#define DRIVER_STEP_H_

#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_conf.h"

typedef enum{
	COMPARE = 500,
	DIRECTION_ON = 1,
	DIRECTION_OFF = 0,
	ON = 1,
	OFF = 0,
}DRIVER_STATE;

typedef struct{
	GPIO_TypeDef* EN_PORT;
	uint32_t EN_PIN;
	uint32_t STATE_EN;

	GPIO_TypeDef* DIR_PORT;
	uint32_t DIR_PIN;
	uint32_t direction;
	
	TIM_HandleTypeDef* PUL_TIM;
	uint32_t Channel;
	uint32_t compare;
}DRIVER_Name;

void Driver_init(DRIVER_Name* driver,GPIO_TypeDef* EN_PORT,uint32_t EN_PIN,GPIO_TypeDef* DIR_PORT,uint32_t DIR_PIN,TIM_HandleTypeDef* PUL_TIM,uint32_t Channel);

void Driver_ON(DRIVER_Name* driver);
void Driver_OFF(DRIVER_Name* driver);
void Driver_STOP(DRIVER_Name* driver);


#endif /* DRIVER_STEP_H_ */
