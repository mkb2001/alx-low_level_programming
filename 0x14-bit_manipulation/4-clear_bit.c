/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: the number
* @index: the index
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = 1 << index;

	*n = *n & ~temp;

	return (1);
}
