#include "main.h"

/**
* wildcmp - function that compares two strings and returns 1 if the strings
* can be considered identical, otherwise return 0.
* @s1: pointer to the first string to be compared
* @s2: pointer to the second string to be compared
*
* Return: 1 if the strings can be considered identical, otherwise return 0.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* if both strings are empty */
	{
		return (1);
	}
	if (*s1 == *s2) /* if characters match */
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*') /* if s2 is a wildcard */
	{
		if (*(s2 + 1) == '*') /* if s2 is a series of '*' */
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (wildcmp(s1, s2 + 1)) /* if s2 is a wildcard */
		{
			return (1);
		}
		if (*(s1 + 1) != '\0' && wildcmp(s1 + 1, s2)) /* if s1 is not empty */
		{
			return (1);
		}
	}
	return (0);
}
