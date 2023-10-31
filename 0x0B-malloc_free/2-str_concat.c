#include "main.h"

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
	len2 = sizeof(s2);
	if (n >= sizeof(s2))
		n = sizeof(s2);
	len1 = sizeof(s1);
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
