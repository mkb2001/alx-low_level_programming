#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
    int len;
    
    len = 0;

    while (s[len] != '\0')
    {
        _putchar(s[len]);
        len++;
    }
}
