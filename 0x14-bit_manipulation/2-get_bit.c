#include "main.h"

/**
* get_bit - this function returns a bit at the index of a certain number
* @n:this is the number
* @index: this is the position of the bit needed.
* Return: the bit at the index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = n >> index;

	return (temp & 1);

}
