#include "main.h"
/**
 * handle_u - Handles the unsigned integer conversion specifier.
 * @args: parameter containing the arg to be printed
 *
 * Return: Number of chars printed
 */

int handle_u(va_list args)
{
	unsigned int ui;
	int chars, i, k;
	char storage[20];

	i = 0;
	chars = 0;
	ui = va_arg(args, unsigned int);

	do {
		storage[i++] = (ui % 10) + '0';
		ui /= 10;
		chars++;
	} while (ui > 0);
	for (k = i - 1; k >= 0; k--)
		_putchar(storage[k]);

	return (chars);
}
