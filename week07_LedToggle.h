#ifndef LedToggle.h
#define LedToggle.h

#include "Arduino.h"

class LedToggle{
public:
	LedToggle(int pin);
	LedToggle(int pin, unsigned long delayTime)
	void toggle();
private:
	int _pin;
	bool _state;
};

#enddif
