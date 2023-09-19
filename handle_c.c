#include "main.h"

/**
 * handle_c - prints a char to stdout
 * @args: variable arguments
 * Return: 1
 */
int handle_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
