#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the contents of a struct
 * @d: pointer to a struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "Nil" : d->name));
		printf("Age: %s\n", (d->age == NULL ? "Nil" : d->age));
		printf("Owner: %s\n", (d->owner == NULL ? "Nil" : d->owner));
	}
}
