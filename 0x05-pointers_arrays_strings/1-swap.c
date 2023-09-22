#include "main.h"
/**
 * swap_int - swaps the values of the variables
 * the pointer points to 98 and vice verser
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
