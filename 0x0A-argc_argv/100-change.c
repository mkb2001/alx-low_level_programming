#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - prints the minimum number of coins to make
* change for an amount of money.
* @argc: the number of args
* @argv: the pointer to array of args
* Return: the number of args
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if ((atoi(argv[1]) < 0))
	{
		printf("0\n");
	}
	if (*argv[1] % 25)
		printf("%d\n", (*argv[1] / 25));
	else if (*argv[1] % 10)
		printf("%d\n", (*argv[1] / 10));
	else if (*argv[1] % 5)
		printf("%d\n", (*argv[1] / 5));
	
}
