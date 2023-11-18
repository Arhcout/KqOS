#include <stdbool.h>
#include <stddef.h>
#include <stdint.h> 
#include <tty.h>
 
void kernel_main(void) {
	Init_tty();
	
	WriteString_tty("Hello world!");
}
