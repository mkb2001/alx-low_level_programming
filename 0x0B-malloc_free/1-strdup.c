#include "main.h"
#include <stdlib.h>
/**
* _strdup - creates a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be copied
* Return: NULL if str = NULL
*/

char *_strdup(char *str)
{
	int i, len;

	char *mem;


	len = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	mem = (char *)malloc(sizeof(char) * (i + 1));

	if (mem == NULL)
		return (0);

	while (str[len] != '\0')
	{
		*(mem + len) = str[len];
		len++;
	}
	*(mem + len) = '\0';

	return (mem);

}
