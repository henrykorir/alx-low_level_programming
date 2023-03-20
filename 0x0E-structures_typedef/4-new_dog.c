#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a record of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = NULL;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner;

	return (new_dog_ptr);
}
