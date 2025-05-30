#include <stdint.h>
#include "uart.h"
#include "defines.h"
#include "heap.h"

void init_main(){
	init_UART();
	NL;dev_write(" Welcome to devOS - ");
	dev_write(VERSION_NUMBER);NL;

}


int main(void){
	init_main();
	while(1){

	}
}
