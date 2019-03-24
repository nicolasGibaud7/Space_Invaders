#include "stm32f4xx_hal.h"
#include "../MDK-ARM/affichage.h"

typedef struct {
	uint8_t _x;
	uint8_t _y;
}Position;

typedef struct {
	Position _position;
	uint8_t _life;
	uint8_t _time_before_shooting;
	uint8_t _type;
	_Bool _state;
}Monster;

Monster initialisation_monster(uint8_t x, uint8_t y, uint8_t life, uint8_t type);
void display_monsters(UART_HandleTypeDef *huart, Monster *monsters, uint8_t nb_monster);
