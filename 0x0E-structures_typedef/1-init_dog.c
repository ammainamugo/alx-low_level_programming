#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to initialise struct dog to
 * @name: name initialise to
 * @age: age initialise to
 * @owner: owner initialise to
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
