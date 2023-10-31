#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - function that concatenates two strings
* @s1: pointer to the first string
* @s2: pointer to the second string
* @n: number of bytes of s2 to concatenate to s1
*
* Return: pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	if (n >= len1)
		n = len1;
	while (s2[len2] != '\0')
		len2++;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);

}
