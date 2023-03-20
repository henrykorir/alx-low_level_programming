#include "dog.h"
/**
 * init_dog - initializes dog structure
 * @d: structure
 * @name: struct first field
 * @age: struct second field
 * @owner: struct third field
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
