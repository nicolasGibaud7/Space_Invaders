#include "usart.h"
#include <stdio.h>

void clear_screen(UART_HandleTypeDef *huart);
void positioning_cursor(UART_HandleTypeDef *huart, uint8_t x, uint8_t y);
