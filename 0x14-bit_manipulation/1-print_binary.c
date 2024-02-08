#include "main.h"
/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: the number to convert
*/
void print_binary(unsigned long int n)
{
	unsigned long int i;

	int shft;

if (n == 0)
{
	printf("0");
	return;

}

for (i = n, shft = 0; (i >>= 1) > 0; shft++)
;

	for (; shft >= 0; shft--)
	{
		if ((n >> shft) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
