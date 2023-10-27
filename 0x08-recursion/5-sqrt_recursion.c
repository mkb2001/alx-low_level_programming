#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: number to be evaluated
*
* Return: natural square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * _sqrt_recursion(n - 1));
	}
	else
	{
		return (1);
	}
}
