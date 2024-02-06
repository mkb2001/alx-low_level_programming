#include <stdio.h>

void first_to_print(void) _attribute__((constructor));

/**
* first_to_print - prints a sentence before the main function is executed.
*/

void first_to_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
