#include "main.h"

/**
* _strdup - function that returns a pointer to a newly allocated space
* @str: the string to return
*
* Return - a pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
	char *ptr;

    ptr = malloc(sizeof(char) * sizeof(str));
    ptr = str;
    
	return (ptr);
}
