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
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, i));
}
