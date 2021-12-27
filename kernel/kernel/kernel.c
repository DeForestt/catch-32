#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("*************************\n");
	printf("** Welcome to catch 32 **\n");
	printf("*************************\n");
	printf("\n");
	printf("\n");
	
	return;
}
