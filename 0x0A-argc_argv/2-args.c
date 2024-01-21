#include <stdio.h>
#include "main.h"
/**
* main - returns number of args
* @argc: the number of args
* @argv: the pointer to array of args
* Return: the number of args
*/
int main(int argc, char *argv[])
{
	unsigned int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
