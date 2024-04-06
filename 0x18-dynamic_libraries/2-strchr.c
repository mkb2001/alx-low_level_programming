#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the first occurence of a character in a string
 * @s: the string
 * @c: the character we are to find within the string
 * Return: Returns a pointer to the character if found in the string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	if (s[i] == '\0' && !(s[i] == c))
		return (NULL);
	else
		return (s + i);

}
