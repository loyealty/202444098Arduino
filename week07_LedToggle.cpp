#include "LedToggle.h"

LedToggle::LedToggle(int pin){
	_pin = pin;
	_state = false;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
}

void LedToggle::toggle(){
	_pin = pin;
	_state = !_state;
	_delayTime = delayTime;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
}

void LedToggle::toggle()){
	if(_delayTime > 0){
		delay(_delayTime);
	}
	_state = !_state;
	digitalWrite(_pin, _state ? HIGH : LOW)
}
