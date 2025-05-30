#include <stdint.h>
#include "uart.h"

int main(void)
{
	init_UART();
	while(1){
		//sendChar('S');
		UART_write("Hello world\n");
	}
}
