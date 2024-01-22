#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: the size tobe allocated.
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
