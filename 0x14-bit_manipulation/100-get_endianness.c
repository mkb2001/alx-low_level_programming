#include "main.h"

/**
* get_endianness - function that checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int num = 0x01020304;

	unsigned char *arr = (unsigned char *) (&num);

	if (*arr == 0x01)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
