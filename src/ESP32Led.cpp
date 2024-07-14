#include "Arduino.h"
#include "ESP32Led.h"

ESP32Led::ESP32Led(int LED1, int LED2, int LED3, int LED4)
	{
		_LED1 = LED1;
		_LED2 = LED2;
		_LED3 = LED3;
		_LED4 = LED4;
	}

void ESP32Led::begin()
	{
		pinMode(_LED1, OUTPUT);
  		pinMode(_LED2, OUTPUT);
  		pinMode(_LED3, OUTPUT);
  		pinMode(_LED4, OUTPUT);
	}

void ESP32Led::LED_On()
	{
		digitalWrite(_LED1, HIGH);
  		digitalWrite(_LED2, HIGH);
  		digitalWrite(_LED3, HIGH);
  		digitalWrite(_LED4, HIGH);
	}

void ESP32Led::LED_Off()
	{
		digitalWrite(_LED1, LOW);
  		digitalWrite(_LED2, LOW);
  		digitalWrite(_LED3, LOW);
  		digitalWrite(_LED4, LOW);
	}