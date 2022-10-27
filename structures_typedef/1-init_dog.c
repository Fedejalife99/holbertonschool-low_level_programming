#include <stdio.h>
#include "dog.h"

/**
 *init_dog - function that initialize a estructure
 *@d: pointer to a struct
 *@name: pointer to a char
 *@age: float
 *@owner: pointer to a char
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
