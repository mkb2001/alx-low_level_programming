#include "main.h"

/**
* is_prime_number - function that returns 1 if the input integer is a prime
* number, otherwise return 0.
* @n: number to be evaluated
*
* Return: 1 if n is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, 2));
}

/**
* actual_prime - function that returns 1 if the input integer is a prime
* number, otherwise return 0.
* @n: number to be evaluated
* @i: number to be divided by
* Return: 1 if n is a prime number, otherwise return 0
*/

int actual_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_prime(n, i + 1));
}
