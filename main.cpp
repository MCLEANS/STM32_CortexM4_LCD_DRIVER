/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "LCD.h"
			

int main(void)
{
	custom_drivers::LCD lcd;

	lcd.enable_port(GPIOC);
	lcd.enable_port(GPIOD);
	lcd.initialize();

	char greetings[] = "  HELLO FROM";
	char intro[] = "STM32F407EVT6";

	lcd.clear();
	lcd.send_string(greetings);
	lcd.newline();
	lcd.send_string(intro);

	while(1){

	}
}
