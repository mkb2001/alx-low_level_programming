#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @m: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int m)
{
	unsigned int x;

	for (x = 0; x < m; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
