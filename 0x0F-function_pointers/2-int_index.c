/**
 * int_index - a function that searches for an integer.
 * @size: number of elements in array
 * @array: the array
 * @cmp: the pointer to function
 * Return: an Int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0
			)
				return (i);
		}
	}
	return (-1);
}
