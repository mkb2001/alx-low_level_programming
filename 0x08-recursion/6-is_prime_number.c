#include "main.h"
/**
 * isprime - checks if number is a prime number
 * @n: this is the number being checked
 * @i: this is the number divided by.
 * Return: 1 if it is a prime number and 0 if it is not.
*/
int isprime(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;

    return isprime(n , i + 1);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: the number checked.
 * Return: returns 1 if the input integer is a prime number, otherwise return 0. 
*/
int is_prime_number(int n)
{
    return (isprime(n, 2));
}