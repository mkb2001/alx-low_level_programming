#include "main.h"

/**
* _strcat - this joins one string to the other
* @dest: the final string
* @src: the string to be added
* Return: the final string
*
*/

char *_strcat(char *dest, char *src)
{
	unsigned int i;

	unsigned int j;

	i = 0;

	while (*dest != '\0')
	{
		i++;
	}

	for (j = 0; *src != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
