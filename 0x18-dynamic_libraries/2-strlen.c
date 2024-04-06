#include "main.h"

/**
 * _strlen - gets the length lf the string
 * @s: parameter is the variable that hold the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
