#include "main.h"
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to a newly allocated space
*
* @str: the string to return
*
* Return - a pointer to a newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *ptr;

	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	while ((ptr[i] = str[i]) != '\0')
		i++;

	return (ptr);

}

