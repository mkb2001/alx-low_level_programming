#include "main.h"

/**
 * _islower - writes the the string _putchar to stdout
 *
 * @c : receives an int value later converter to char
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{

	int i, a;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			a = 1;
			break;
		}
		else
			a = 0;
	}

	return (a);
}
