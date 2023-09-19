#include "main.h"

/**
 * _strlen - calculates length of a str
 * @str: chars to count
 * Return: string length
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _putchar - writes charecter to stdout
 * @c: char to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
