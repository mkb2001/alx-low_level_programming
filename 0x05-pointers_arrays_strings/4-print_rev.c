
include "main.h"

void print_rev(char *s)
{
	int x = sizeof(s);
	for (; x>0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
