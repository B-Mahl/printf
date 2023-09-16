#include "main.h"
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: the format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argLst;
	char cValue;
	char *sValue;
	int chars;

	chars = 0;
	va_start(argLst, format);
	if (format == NULL)
		exit(-1);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chars++;
			continue;
		}
		switch (*++format)
		{
			case 'c':
				cValue = va_arg(argLst, int);
				write(1, &cValue, 1);
				chars++;
				break;
			case 's':
				sValue = va_arg(argLst, char *);
				while (*sValue)
				{
					write(1, sValue, 1);
					sValue++;
					chars++;
				}
				break;
			case '%':
				write(1, format, 1);
				chars++;
				break;
		}
	}
	va_end(argLst);
	return (chars);
}
