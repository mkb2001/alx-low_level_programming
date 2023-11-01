#include <stdio.h>
#include "main.h"

/**
* main - nnormal function
* @argc: counter
* @argv: array
*
* Return: always success (0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
