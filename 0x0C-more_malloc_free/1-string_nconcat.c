#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: First string
* @s2: the string two
* @n: number of bytes to concat to s1 from s2
* Return: function fails, it should return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	int i = 0, j = 0, k;

	while (s1 && s1[i])
		i++;

	while (s2 && s2[j])
		j++;

	k = i + n;

	ptr = malloc((sizeof(char) * k) + 1);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;

	while (j < (int)n)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}

	ptr[i] = '\0';

	return (ptr);

}

