#include "main.h"
/**
 * _islower - check the code.
 *
 * Return:  0 or 1.
 */

int _islower(int c)
{
	if (isupper(c))
	{
		return(0);
	}else
	{
		return(1);
	}
}
