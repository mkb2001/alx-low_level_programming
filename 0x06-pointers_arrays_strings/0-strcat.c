#include "main.h"

/**
 * *_strcat - it concatenates two functions
 * @*dest - this is the parameter for the final string
 * @*src -  this is the parameter for the source string
 *
 * return - a character 
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = *dest;

	while (*ptr != '\0')
	{
		*ptr++

	}
	while (*src != '\0')
	{
		*ptr = *src;
		*ptr++;
		src++;
	}
	*ptr = '\0';


	
return dest;
}
