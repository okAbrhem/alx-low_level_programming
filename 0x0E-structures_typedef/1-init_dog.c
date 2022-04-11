#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer variable
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
