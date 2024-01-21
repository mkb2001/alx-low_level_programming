#include "main.h"
#include <stdlib.h>

/**
* str_concat - pointer should point to a newly allocated space in
* memory which
* contains the contents of s1,
*  followed by the contents of s2, and null terminated
* @s1: the first string
* @s2: the second String
* Return: NULL on failure else a pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *mem;

	int i, j, x, y;

	i = 0;
	j = 0;
	x = 0;
	y = 0;

	if (s1 == NULL)
		s1  = " ";

	if (s2 == NULL)
		s2  = " ";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	mem = (char *)malloc(sizeof(char) * (i + j + 1));

	if (mem == NULL)
		return (NULL);

	while (s1[x] != '\0')
	{
		*(mem + x) = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		*(mem + x + y) = s2[y];
		y++;
	}
	*(mem + y + x) = '\0';
	return (mem);
}
