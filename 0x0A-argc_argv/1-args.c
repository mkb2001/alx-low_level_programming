#include <stdio.h>
#include "main.h"
/**
* main - returns number of args
* @argc: the number of args
* @argv: the pointer to array of args
* Return: the number of args
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
