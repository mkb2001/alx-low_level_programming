#include "main.h"

/**
 * _isalpha - writes the the string _putchar to stdout
 *
 * @c: receives an int converted to char
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{

	int i, a;

	for (i = 65; i <= 122; i++)
	{
		if (i >= 91 && i <= 96)
			a = 0;
		else if (c == i)
		{
			a = 1;
			break;
		}
		else
			a = 0;
	}

	return (a);
}
