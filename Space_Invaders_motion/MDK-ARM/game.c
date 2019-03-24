#include "game.h"

Monster initialisation_monster(uint8_t x, uint8_t y, uint8_t life, uint8_t type)
{
	Monster aMonster;
	aMonster._position._x = x;
	aMonster._position._y = y;
	aMonster._life = life;
	aMonster._time_before_shooting = 50;
	aMonster._type = type;
	aMonster._state = 1;
	
	return aMonster;
}

void display_monsters(UART_HandleTypeDef *huart, Monster *monsters, uint8_t nb_monster)
{
	for(uint8_t index = 0 ; index < nb_monster ; index++){
		if(monsters[index]._state == 1){
			positioning_cursor(huart, monsters[index]._position._x, monsters[index]._position._y);
			HAL_UART_Transmit(huart, (uint8_t*) monsters[index]._type, 1, 1);
		}
	}
}
