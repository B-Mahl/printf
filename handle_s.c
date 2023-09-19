#include "main.h"
/**
 * handle_s - prints a string to stdout
 * @args: variable arguments
 * Return: string length
*/
int handle_s(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (_strlen(str));
}
