/*
 * Uart_handle.h
 *
 *  Created on: May 16, 2023
 *      Author: ACER
 */

#ifndef UART_HANDLE_H_
#define UART_HANDLE_H_

#include "stm32f1xx_hal.h"
typedef enum{
    LENGTH_DATA = 21,
}UART_STATE;


typedef struct{
    UART_HandleTypeDef* UART;
    uint32_t length;
    uint32_t pos1;
    uint32_t pos2;
    uint32_t pos3;
    uint32_t direction1;
    uint32_t direction2;
    uint32_t direction3;

}UART;

void UART_Init(UART* name,UART_HandleTypeDef* UART);
void UART_Handle(UART* name);
int UART_Handle_x(UART* name);
int UART_Handle_y(UART* name);
int UART_Handle_z(UART* name);

#endif /* UART_HANDLE_H_ */
