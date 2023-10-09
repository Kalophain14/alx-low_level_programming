#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initalize a variable of type
 * @d: pointer to dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
