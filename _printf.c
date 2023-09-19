#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: the format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argLst;
	int chars;

	chars = 0;
	va_start(argLst, format);
	if (format == NULL)
		return (-1);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			chars += _putchar(*format);
			continue;
		}
		chars += printer_1(*++format, argLst);
		chars += printer_2(*format, argLst);
	}
	va_end(argLst);
	return (chars);
}
