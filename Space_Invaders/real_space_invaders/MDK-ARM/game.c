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
	aMonster._state_shoot = 0;
	aMonster._p_missile._x = x;
	aMonster._p_missile._y = y+1;
	
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

Shooter init_shooter(void){
	Shooter the_shooter;
	the_shooter.life = 3;
	the_shooter._position._x = 65;
	the_shooter._position._y = 40;
	the_shooter._p_missile._x = 65;
	the_shooter._p_missile._y = 39;
	the_shooter._state_shoot = 0;
	
	return the_shooter;
}

