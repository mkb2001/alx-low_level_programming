#include "main.h"
#include <unistd.h>
/**
 * _putchar: This is used to write the character on the screen.
 * @c: The character to be written.
 * 
 * Return : the value to be written.
 * 
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}