#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	for(;src[x] != '\0' && i < n;x++;)
	{
		dest[x] = src[x];
		
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
