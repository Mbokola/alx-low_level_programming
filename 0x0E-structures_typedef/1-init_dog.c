#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize dog members
 *@d: pointer to my_dog
 *@name: pointer name of dog
 *@age: age of dog
 *@owner: pointer to dog owner
 *Return: 0 if succesful
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* initialize dog name, age and owner */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
