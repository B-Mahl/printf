#include "main.h"
/**
 * handle_i - converts integer to string and
 * prints it to stdout
 * @args: variable arguments
 * Return: string length
 */
int handle_i(va_list args)
{
	char storage[20];
	int chars, i, k, n;

	n = va_arg(args, int);
	i = 0;
	chars = 0;
	if (n < 0)
	{
		_putchar('-');
		chars++;
		n = -n;
	}
	do {
		storage[i++] = (n % 10) + '0';
		n /= 10;
		chars++;
	} while (n > 0);
	for (k = i - 1; k >= 0; k--)
		_putchar(storage[k]);

	return (chars);
}
