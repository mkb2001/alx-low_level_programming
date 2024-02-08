#include "main.h"
#include <unistd.h>
/**
* _putchar - This is used to write
* the character on the screen.
* @b: The character to be written.
*
* Return: the value to be written.
*
*/
int _putchar(char b)
{
	return (write(1, &b, 1));
}
