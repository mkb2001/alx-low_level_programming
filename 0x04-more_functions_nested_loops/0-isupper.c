#include "main.h"

/**
 * _isupper - check the code.
 * @c: the number to be checked
 *
 * Return: 1 for upper nad 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c<= 90)
	{
		return (1);
	}

	return (0);
}
