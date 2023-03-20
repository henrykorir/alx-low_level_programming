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
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: ");
		if (d->age < 0)
			puts("(nil)");
		else
			printf("%f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
