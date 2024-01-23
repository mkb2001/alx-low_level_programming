#include "dog.h"

/**
* init_dog -  a function that initialize a variable of type struct dog
* @d: dog structure
* @name: name of dog
* @age: age of dog
* @owner: owner
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->age = age;
	d->name = name;
	d->owner = owner;
}
