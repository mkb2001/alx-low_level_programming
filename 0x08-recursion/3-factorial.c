#include "main.h"

/**
 * factorial - Prints the fatorial of a number
 * @n: this is the number whose factorial is returned
 * Return: the factorial
*/

int factorial(int n)
{ 
    if (n < 0)
        return (-1);
    if (n == 0)
    {
        return (1);
    }else
    {
        return (n * factorial(n - 1));
    } 
}