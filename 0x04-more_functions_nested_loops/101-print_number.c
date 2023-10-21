#include "main.h"

/**
 * print_number - prints an integer
 * @x: integer to be printed
 */
void print_number(int x)
{
	unsigned int x1;

	if (x < 0)
	{
		x1 = -x;
		_putchar('-');
	} else
	{
		x1 = x;
	}

	if (x1 / 10)
	{
		print_number(x1 / 10);
	}

	_putchar((x1 % 10) + '0');
}
