#ifndef UART_H_
#define UART_H_

#define STM32F401xE
#include <stdint.h>
#include "stm32f4xx.h"				// for bitwise operations
#include "stm32f401xe.h"
#include "system_stm32f4xx.h"


void dev_write(const char *str);
uint16_t dev_read();
//void sendChar(char c);
void init_UART();

#endif /* UART_H_ */
