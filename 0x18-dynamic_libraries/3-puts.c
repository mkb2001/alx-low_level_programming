#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: parameter is the variable that hold the string
 * Return: String!
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
