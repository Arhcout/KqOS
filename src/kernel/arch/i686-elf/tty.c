#include <stdint.h>
#include <tty.h>
#include <string.h>
#include "vga.h"

 
size_t _row;
size_t _column;
uint8_t _color;
uint16_t* _buffer;
 
void Init_tty(void) {
	_row = 0;
	_column = 0;
	_color = vga_entry_color(VGA_COLOR_LIGHT_GREY, VGA_COLOR_BLACK);
	_buffer = (uint16_t*) 0xB8000;
	for (size_t y = 0; y < VGA_HEIGHT; y++) {
		for (size_t x = 0; x < VGA_WIDTH; x++) {
			const size_t index = y * VGA_WIDTH + x;
			_buffer[index] = vga_entry(' ', _color);
		}
	}
}
 
void SetColor_tty(uint8_t color) {
	_color = color;
}
 
void PutEntryAt_tty(char c, uint8_t color, size_t x, size_t y) {
	const size_t index = y * VGA_WIDTH + x;
	_buffer[index] = vga_entry(c, color);
}

void Scroll_tty() {
	for (size_t y = 1; y < VGA_HEIGHT; y++) {
		for(size_t x = 0; x < VGA_WIDTH; x++) {
			_buffer[y*VGA_WIDTH+x] = _buffer[y*VGA_WIDTH+x];
		}
	}

	for(size_t x = 0; x < VGA_WIDTH; x++) {
		_buffer[(VGA_HEIGHT-1)*VGA_WIDTH+x] = vga_entry(' ', _color);
	}
}

void Putchar_tty(char c) {
	switch(c){
		case '\n':
			_column = 0;
			if (++_row == VGA_HEIGHT)
				Scroll_tty();
			break;
		default:
			PutEntryAt_tty(c, _color, _column, _row);
	}
	if (++_column == VGA_WIDTH) {
		_column = 0;
		if (++_row == VGA_HEIGHT)
			Scroll_tty();
	}
}

void Write_tty(const char* data, size_t size) {
	for (size_t i = 0; i < size; i++)
		Putchar_tty(data[i]);
}
 
void WriteString_tty(const char* data) {
	Write_tty(data, strlen(data));
}
