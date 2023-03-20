#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - restores reserved memory
 * @d: pointer to the reserved memory"
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		d->name = NULL;
		if (d->owner != NULL)
			free(d->owner);
		d->owner = NULL;
		free(d);
	}
	d = NULL;
}
