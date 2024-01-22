#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
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
/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: the number of elements
* @size: the size in bytes ofeach element
* Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	
	if (nmemb == 0 || size == 0)
		return (NULL);


	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, size * nmemb);

	return (arr);
}
