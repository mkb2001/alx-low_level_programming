#include "main.h"

/**
 * _strspn - Function to get the length of a prefix substring
 * @s: string argument to be compared with
 * @accept: string we want to get length of prefix
 * Return: the length of prefix
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	unsigned int n;

	n = 0;
	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			k = i + 1;
			if (s[i] == ',' && s[k] == ' ')
				break;
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}
	return (n);
}
