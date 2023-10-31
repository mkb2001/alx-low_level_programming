#include "main.h"

/**
* is_palindrome - function that returns 1 if a string is a palindrome and 0 if not.
* @s: pointer to the string to be evaluated
*
* Return: 1 if s is a palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	return (palindrome(s, len));

}

/**
* palindrome - function that returns 1 if a string is a palindrome
* and 0 if not.
* @s : pointer to the string to be evaluated
* @len : length of the string

* Return : 1 if s is a palindrome, 0 if not
*/

int palindrome(char *s, int len)
{
	if (*s == *(s + len - 1))
	{
		if (len <= 1)
		{
			return (1);
		}
		return (palindrome(s + 1, len - 2));
	}
	return (0);
}
