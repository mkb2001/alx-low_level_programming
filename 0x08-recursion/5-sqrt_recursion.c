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
		return (-1);
	return (actual_squareroot(n, 0));
}

/*
* actual_squareroot - function that returns the natural square root of a number.
* @n: number to be evaluated
* @i: number to be multiplied
*/
int actual_squareroot(int n, int i)
{
	if(i * i > n )
		return (-1);
	
	if (i * i == n)
		return (i);
	return (actual_squareroot(n, i + 1));
}