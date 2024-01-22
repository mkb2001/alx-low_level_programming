#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @new_size: is the new size, in bytes of the new memory block
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * Return: Pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
