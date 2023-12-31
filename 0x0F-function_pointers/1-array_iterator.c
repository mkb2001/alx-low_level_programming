#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter on each element
* @array: array to iterate through
* @size: size of array
* @action: pointer to function to use
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
