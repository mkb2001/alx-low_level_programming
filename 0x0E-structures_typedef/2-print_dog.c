#include <stdio.h>
#include "dog.h"

#define NIL "(nil)"

/**
* print_dog - prints a struct dog
* @d: pointer to struct dog
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		d->name = NIL;
	if (d->owner == 0)
		d->owner = NIL;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
