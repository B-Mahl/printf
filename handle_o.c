#include "main.h"
/**
 * handle_o - Handles the octal format conversion specifier 'o'.
 * @args: va_list with the arg to be printed.
 *
 * Return: Number of characters printed
 */
int handle_o(va_list args)
{
	unsigned int n;
	int i, k, chars;
	char octal[50];

	chars = 0;
	i = 0;
	n = va_arg(args, unsigned int);

	do {
		octal[i] = (n % 8) + '0';
		n /= 8;
		i++;
		chars++;
	} while (n > 0);
	for (k = i - 1; k >= 0; k--)
		_putchar(octal[k]);
	return (chars);
}
