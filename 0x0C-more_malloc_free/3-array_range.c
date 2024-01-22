#include "main.h"
#include <stdlib.h>
/**
* array_range - function that creates an array of integers.
* @min: contain all the values from min
* @max: the maximum value.
* Return: If min > max, return NULL or If malloc fails, return NULL
*/
int *array_range(int min, int max)
{
	int *arr;

	int size, i, j;
	if (min > max)
		return (NULL);
	size = max - min;

	arr = malloc((sizeof(int) * size) + 1);

	for (i = 0, j = min; i != (size + 1) && j <= max; i++, j++)
	{
		arr[i] = j;
	}

	return (arr);
}
