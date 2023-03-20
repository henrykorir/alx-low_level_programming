#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - restores reserved memory
 * @d: pointer to the reserved memory"
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
	d = NULL;
}
