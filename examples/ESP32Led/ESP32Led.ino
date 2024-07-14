#include <ESP32Led.h>

ESP32Led abu(15, 2, 4, 16);
void setup() 
{
  // put your setup code here, to run once:
  abu.begin();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  abu.LED_On();
  delay(200);
  abu.LED_Off();
  delay(200);
}
