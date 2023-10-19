#include "main.h"

/**
  * print_square - Draws a square according parameter
  * @size: The number of times to print square
  *
  * Return: empty
  */

void print_square(int size)
{
	int x, y;
	
	if (size = 0)
	{
		_putchar('n');
	}

	for (x = 0; x <= size; i++)
	{
		for (y = 0;y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
