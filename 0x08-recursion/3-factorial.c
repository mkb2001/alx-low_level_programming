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
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

void insertionSort(int array[], int n)
{
    int i, element, j;
    for (i = 1; i < n; i++)
    {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = element;
    }
}