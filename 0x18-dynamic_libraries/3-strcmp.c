#include "main.h"

/**
 * _strcmp - program to compare two strings
 * @s1: first argument - takes string to be compared
 * @s2: second argument - takes string to be compared with
 * Return: Returns the value of the compared string in decimal
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	j = 0;
	while (s1[j] != '\0')
		j++;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			res = 0;
		}
	}

	return (res);
}
