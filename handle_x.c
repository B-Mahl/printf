#include "main.h"
/**
 * handle_x - converts an unsigned int to hexadecimal
 * and prints results
 * @c: format specifier
 * @args: list of variable arguments
 * Return: number pf characters printed
 */
int handle_x(char c, va_list args)
{
	static char *hexa = {0};
	static char buffer[50];
	int chars, i, k;
	unsigned int n;

	chars = 0;
	i = 0;
	n = va_arg(args, unsigned int);

	if (c == 'x')
		hexa = "0123456789abcdef";
	else if (c == 'X')
		hexa = "0123456789ABCDEF";
	do {
		buffer[i] = hexa[(n % 16)];
		n /= 16;
		i++;
		chars++;
	} while (n > 0);
	for (k = i - 1; k >= 0; k--)
		_putchar(buffer[k]);

	return (chars);
}
