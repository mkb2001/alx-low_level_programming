#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @b: constant byte
 * @s: memory to be filled with constant byte
 * @n: maximum size of memory to fill
 * Return: Returns the constant byte
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	*s = b;
	for (i = 0; i < n; i++)
	{
		s[i] = *s;
	}

	return (s);
}
