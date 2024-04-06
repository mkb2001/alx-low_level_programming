#include "main.h"
/**
 * _strncat -  Function to concatenate two strings, the string
 * will use at most n bytes from the src
 * @dest: first pointer argument
 * @src: second pointer argument
 * @n: third argument int
 * Return:  Returns the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
