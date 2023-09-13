#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main() {
    
	unsigned int prev = 1;
	unsigned int current = 2;
	int count = 2;
	const int maxCount = 98;
	
	printf("%u, %u", prev, current);

	while (count < maxCount) {

		unsigned int next = prev + current;


		printf(", %u", next);

		prev = current;
		current = next;

		count++;
	}


	printf('\n');

	return (0);
}
