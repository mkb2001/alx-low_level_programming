#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer;
	char character;
	long longInteger;
	long long veryLong;
	float floatNumber;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of an int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInteger));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(veryLong));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatNumber));
	return (0);
}
