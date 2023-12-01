/**
* flip_bits - returns the number of bits you would need to flip to get from
* one number to another
* @n: the first number
* @m: the second number
* Return: the number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;

	unsigned int count = 0;

	temp = n ^ m;

	while (temp > 0)
	{
		if ((temp & 1) == 1)
			count++;
		temp = temp >> 1;
	}

	return (count);
}
