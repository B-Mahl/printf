#include "main.h"
/**
 * printer_2 - Function that uses a character specifier
 * to choose the proper handler to use.
 * @c: Character specifier
 * @args: va_list containing the variable arg
 * Return: Total number of characters printed.
 */
int printer_2(char c, va_list args)
{
	int chars, i, size;
	char specifiers[4] = {'u', 'o', 'x', 'X'};

	size = 4;
	chars = 0;

	for (i = 0; i < size; i++)
	{
		if (c == specifiers[i])
		{
			switch (c)
			{
				case 'u':
					chars += handle_u(args);
					break;
				case 'o':
					chars += handle_o(args);
					break;
				case 'x':
				case 'X':
					chars += handle_x(c, args);
					break;
			}
		}
	}
	return (chars);
}
