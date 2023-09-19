#include "main.h"
/**
 * printer_1 - prints according to format specifier
 * @c: format specifier character
 * @args: List of arugments
 * Return: number of characters printed
 */
int printer_1(char c, va_list args)
{
	int chars, i, size;
	char specifiers[6] = {'b', 'c', 's', 'd', 'i', '%'};

	size = 6;
	chars = 0;
	for (i = 0; i < size; i++)
	{
		if (c == specifiers[i])
		{
			switch (c)
			{
				case 'b':
				chars += handle_b(args);
				break;
				case 'c':
				chars += handle_c(args);
				break;
				case 's':
				chars += handle_s(args);
				break;
				case 'd':
				case 'i':
				chars += handle_i(args);
				break;
				case '%':
				chars += _putchar(c);
				break;
			}
		}
	}
	return (chars);
}
