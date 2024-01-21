#include <stdio.h>
#include <stdlib.h>
/**
* main - returns number of args
* @argc: the number of args
* @argv: the pointer to array of args
* Return: the number of args
*/

int main(int argc, char *argv[])
{
	int mul, i, j;

	if (argc != 3)
		printf("Error");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
