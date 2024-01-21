#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - returns number of args
* @argc: the number of args
* @argv: the pointer to array of args
* Return: the number of args
*/

int main(int argc, char *argv[])
{
	int i, sum, temp;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		temp = atoi(argv[i]);
		sum += temp;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

