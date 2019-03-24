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

