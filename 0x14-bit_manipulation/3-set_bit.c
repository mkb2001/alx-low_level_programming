#include "main.h"
/**
 * set_bit - sets bit
 * @n: this is the number to set to
 * @index: this is the position
 * Return: this is the 1 for succeess
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
