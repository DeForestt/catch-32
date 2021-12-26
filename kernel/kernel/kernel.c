#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	for(int i = 1; i < 27; i++) {
		terminal_putchar('0' + i);
		printf("Hello, kernel World!\n");
	}
	
}
