#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: void
 */
void print_alphabet_x10()
{
	int i = 0;

	while (i <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
