#include "main.h"

/**
 * _strcpy - copies the string including the null terminator
 * @dest: destination string is copied to
 * @src: source it is copied from
 * Return: 0 is Success!
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
