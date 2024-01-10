#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
*/

int _strlen_recursion(char *s)
{
    int x;

    if (*s)
    {
       x  =  _strlen_recursion(s+1);
       x++;
    }
    return (x);
}