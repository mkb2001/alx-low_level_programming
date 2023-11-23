#include "main.h"
/**
* print_binary - prints the binary representation on a number.
* @n:the integer to turn into binary.
*/
void print_binary(unsigned long int n)
{
	unsigned long int instance;

	int shft;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (instance = n, shft = 0; (instance >>= 1) > 0; shft++)
		;

	for (; shft >= 0; shft--)
	{
		if ((n >> shft) & 1)
			printf("1");
		else
			printf("0");

	}
}
