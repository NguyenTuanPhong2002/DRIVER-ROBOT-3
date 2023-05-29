/*
 * Driver.c
 *
 *  Created on: May 16, 2023
 *      Author: ACER
 */


#include "../Driver_step/Driver_step.h"

void Driver_init(DRIVER_Name* driver,GPIO_TypeDef* EN_PORT,uint32_t EN_PIN,GPIO_TypeDef* DIR_PORT,uint32_t DIR_PIN,TIM_HandleTypeDef* PUL_TIM,uint32_t Channel){
    driver->EN_PORT = EN_PORT;
    driver->EN_PIN = EN_PIN;
    driver->DIR_PORT = DIR_PORT;
    driver->DIR_PIN = DIR_PIN;
    driver->PUL_TIM = PUL_TIM;
    driver->Channel = Channel;
};

void Driver_STOP(DRIVER_Name* driver){
    HAL_GPIO_WritePin(driver->EN_PORT, driver->EN_PIN, ON);
    HAL_GPIO_WritePin(driver->DIR_PORT, driver->DIR_PIN, OFF);
    HAL_TIM_PWM_Stop(driver->PUL_TIM, driver->Channel);
};

void Driver_ON(DRIVER_Name* driver){
    HAL_GPIO_WritePin(driver->EN_PORT, driver->EN_PIN, ON);
    HAL_GPIO_WritePin(driver->DIR_PORT, driver->DIR_PIN, ON);
    HAL_TIM_PWM_Start(driver->PUL_TIM, driver->Channel);
	__HAL_TIM_SetCompare(driver->PUL_TIM,driver->Channel,COMPARE);
};
void Driver_OFF(DRIVER_Name* driver){
    HAL_GPIO_WritePin(driver->EN_PORT, driver->EN_PIN, ON);
    HAL_GPIO_WritePin(driver->DIR_PORT, driver->DIR_PIN, OFF);
    HAL_TIM_PWM_Start(driver->PUL_TIM, driver->Channel);
	__HAL_TIM_SetCompare(driver->PUL_TIM,driver->Channel,COMPARE);
};
