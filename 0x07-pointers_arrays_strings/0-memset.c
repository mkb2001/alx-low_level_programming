#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @k: char to copy
 * @m: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char k, unsigned int m)
{
	unsigned int x;

	for (x = 0; x < m; x++)
	{
		s[x] = k;
	}

	return (s);
}
