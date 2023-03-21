#ifndef _struct
#define _struct
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 *struct dog - dog structure
 *@name: name of dog
 *@age: age of dog
 *@owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
