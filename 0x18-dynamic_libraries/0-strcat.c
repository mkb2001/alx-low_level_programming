#include "main.h"
/**
 * _strcat -  Function to concatenate two strings
 * @dest: first pointer argument
 * @src: second pointer argument
 * Return:  Returns the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
