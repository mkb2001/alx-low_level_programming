#include "main.h"

/**
* _memset - fills a memory location with a constant byte
* @s: the poointer to the memory location to be filled
* @b: the character to be stored in the location
* @n: the number of times to fillthe space
* Return: the pointer to the location
*/

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}

		return (s);
}
