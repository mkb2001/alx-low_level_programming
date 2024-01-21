#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argv: pointer to array of strings
 * @argc: the number of arguments
 * Return: the program name
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
