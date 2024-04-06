#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: argument holds the copied memory area
 * @src: argument is the memory area to be copied
 * @n: maximum size or memory area to be copied
 * Return: Returns the copied area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
