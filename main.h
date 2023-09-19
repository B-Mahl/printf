#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *str);
int _putchar(char c);

int handle_i(va_list args);
int handle_s(va_list args);
int handle_c(va_list args);
int handle_b(va_list args);
int handle_u(va_list args);
int handle_o(va_list args);
int handle_x(char c, va_list args);

int printer_1(char c, va_list args);
int printer_2(char c, va_list args);

#endif
