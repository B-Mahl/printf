#include "main.h"
/**
 * handle_b - converts an unsigned int to binary
 * and prints the results
 * @args: list of variable arguments
 * Return: number of chars printed
 */
int handle_b(va_list args)
{
	unsigned int n;
	int i, k, chars;
	char binary[50];

	chars = 0;
	i = 0;
	n = va_arg(args, int);

	if (n == 0 || n == 1)
	{
		binary[0] = n +  '0';
		_putchar(binary[0]);
		return (1);
	}
	else
	{
		do {
			binary[i] = (n % 2) + '0';
			n /= 2;
			i++;
			chars++;
		} while (n > 0);
		for (k = i - 1; k >= 0; k--)
		_putchar(binary[k]);
	}
	return (chars);
}
