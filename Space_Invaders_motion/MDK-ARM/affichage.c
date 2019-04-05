/**
 * Fonctions permettant de s'occuper de l'affichage 
 * 
 */

#include "affichage.h"

void clear_screen(UART_HandleTypeDef *huart)
{
	HAL_UART_Transmit(huart, (uint8_t*) "\033[2J", 7, 1);
}

void positioning_cursor(UART_HandleTypeDef *huart, uint8_t x, uint8_t y)
{
	char buffer[13];
	sprintf(buffer, "\033[%d;%dH", y, x);
	HAL_UART_Transmit(huart, (uint8_t*) buffer, sizeof(buffer), 1);
	HAL_Delay(25);
}

