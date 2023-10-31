#include "main.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings
* @s1: pointer to the first string
* @s2: pointer to the second string
*
*
* Return: pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;

	int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
