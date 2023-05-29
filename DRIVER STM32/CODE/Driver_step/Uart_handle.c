/*
 * Uart_handle.c
 *
 *  Created on: May 16, 2023
 *      Author: ACER
 */

#include "../Driver_step/Uart_handle.h"

void UART_Init(UART *name, UART_HandleTypeDef *UART)
{
    name->UART = UART;
    name->length = LENGTH_DATA;
};
void UART_Handle(UART *name)
{
    char str[4];
    char data[22];
    HAL_UART_Receive_IT(name->UART, data, name->length);
    strncpy(str, data + 1, 4);
    name->pos1 = atoi(str);
    strncpy(str, "" + 0, 4);
    strncpy(str, data + 6, 1);
    name->direction1 = atoi(str);
    strncpy(str, "" + 0, 4);

    strncpy(str, data + 8, 4);
    name->pos2 = atoi(str);
    strncpy(str, "" + 0, 4);
    strncpy(str, data + 13, 1);
    name->direction2 = atoi(str);
    strncpy(str, "" + 0, 4);

    strncpy(str, data + 15, 4);
    name->pos3 = atoi(str);
    strncpy(str, "" + 0, 4);
    strncpy(str, data + 20, 1);
    name->direction3 = atoi(str);
    strncpy(str, "" + 0, 4);
};