#include "main.h"
/**
 * binary_to_uint - function changes 
 * @b: the binary string to changes to integer
 * Return: the integer
*/
unsigned int binary_to_uint(const char *b)
{
    int length = strlen(b);
    unsigned int i;
    unsigned int fig;

    if (b == NULL)
        return (0);

    for (i = 0; i<length; i++)
    {
        if (b[i] == '0')
        {
            fig |= (0 << length - 1 -i); 
        } else if (b[i] == '1')
        {
            fig |= (1 << length - 1 - i);
        }else if (b[i] == '0' || b[i] == '1')
        {
            return (0);
        }
    }
    return fig;
}