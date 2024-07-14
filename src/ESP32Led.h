
#ifndef ESP32LED_h
#define ESP32LED_h
#include "Arduino.h"


class ESP32Led
	{

		public :
			ESP32Led(int LED1, int LED2, int LED3, int LED4);
			void begin();
			void LED_On();
			void LED_Off();

		private :
			int _LED1;
			int _LED2;
			int _LED3;
			int _LED4;
	};

#endif