#pragma once
#include <stdint.h>
#include <stddef.h>

void Init_tty();
void SetColor_tty(uint8_t color);
void PutEntryAt_tty(char c, uint8_t color, size_t x, size_t y);
void Scroll_tty();
void Putchar_tty(char c);
void Write_tty(const char* data, size_t size);
void WriteString_tty(const char* data);
