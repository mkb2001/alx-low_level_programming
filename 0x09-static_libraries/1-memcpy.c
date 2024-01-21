#include "main.h"

/**
* _memcpy - this copies bytes in one memory to the other memory
* @dest: the fina location
* @src: the source location
* @n: the number of times to copy the bytes in the location
* Return: the location of the dest
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
