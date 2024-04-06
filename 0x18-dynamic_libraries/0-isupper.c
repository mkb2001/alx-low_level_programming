#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: argument takes any any integer
 * Return: success
 */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
}
