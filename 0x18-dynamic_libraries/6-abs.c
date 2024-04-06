#include "main.h"
#include <stdio.h>

/**
 * _abs - writes the the string _putchar to stdout
 *
 * @a: receives an int converted to char
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int a)
{
	int b = 0;

	if (a < 0)
	{
		b = -1 * a;
	}
	else if (a > 0)
	{
		b = a;
	}
	return (b);
}
