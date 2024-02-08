#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow, decimal;
	int i = 0;

	if (!b)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (pow = 1, decimal = 0, i--; i >= 0; i--, pow *= 2)
	{
		if (b[i] == '1')
			decimal += pow;
	}
	return (decimal);

}
