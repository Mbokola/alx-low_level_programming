#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initialize dog members
 *@d: pointer to my_dog
 *@name: pointer name of dog
 *@age: age of dog
 *@owner: pointer to dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	/* initialize dog name, age and owner */
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
