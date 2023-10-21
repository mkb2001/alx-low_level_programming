#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
        int x;
        
        x = 0;

        while(s[x] != '\0')
        {
                if (s[x] >= 'a' && s[x] <= 'z')
                        s[x] = s[x] - 32;
                x++;
        }

        return (s);
}

