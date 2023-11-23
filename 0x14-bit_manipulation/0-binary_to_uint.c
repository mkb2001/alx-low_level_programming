#include "main.h"
/**
* binary_to_uint - function changes
* @b: the binary string to changes to integer
* Return: the integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int final, pow;

	int length = 0;

	if (b == NULL)
		return (0);

	/**
	*for (length = 0; b[length]; length++)
	*{
	*	if (b[length] != '0' && b[length] != '1')
	*		return (0);
	*}
	*/

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	for (pow = 1, final = 0, length--; length >= 0; length--, pow *= 2)
	{
		if (b[length] == '1')
			final += pow;
	}

	return (final);
}
