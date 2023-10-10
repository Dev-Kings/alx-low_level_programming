#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
