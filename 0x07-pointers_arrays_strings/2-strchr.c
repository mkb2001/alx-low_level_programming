#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @ch: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char ch)
{
		int x;

		while (1)
		{
			x = *s++;
			if (x == ch)
			{
				return (s - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
