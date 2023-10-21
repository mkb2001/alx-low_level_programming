#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int counter;
	long int maximum;
	long int x;

	counter = 612852475143;
	maximum = -1;

	while (counter % 2 == 0)
	{
		maximum = 2;
		counter /= 2;
	}

	for (x = 3; x <= sqrt(counter); x = x + 2)
	{
		while (counter % x == 0)
		{
			maximum = x;
			counter = counter / x;
		}
	}

	if (counter > 2)
		maximum = counter;

	printf("%ld\n", maximum);

	return (0);
}
