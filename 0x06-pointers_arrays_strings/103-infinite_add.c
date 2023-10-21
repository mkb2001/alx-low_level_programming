#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @x1: text representation of 1st number to add
 * @x2: text representation of 2nd number to add
 * @p: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *x1, char *x2, char *p, int size_r)
{
	int overflow = 0, a = 0, b = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(x1 + a) != '\0')
		a++;
	while (*(x2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || overflow == 1)
	{
		if (a < 0)
			val1 = 0;
		else
			val1 = *(x1 + a) - '0';
		if (b < 0)
			val2 = 0;
		else
			val2 = *(x2 + b) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(p + digits) = (temp_tot % 10) + '0';
		digits++;
		b--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(p + digits) = '\0';
	rev_string(p);
	return (p);
}
