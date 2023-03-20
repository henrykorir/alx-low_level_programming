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
	int i = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	if (i == 0)
		return (NULL);
	new_dog_ptr->name = malloc(i * sizeof(char));
	if (new_dog_ptr->name == NULL)
		return (NULL);
	i = 0;
	while ((new_dog_ptr->name[i] = name[i]) != '\0')
		i++;
	i = 0;
	while (owner[i] != '\0')
		i++;
	if (i == 0)
		return (NULL);
	new_dog_ptr->owner = malloc(i * sizeof(char));
	if (new_dog_ptr->owner == NULL)
		return (NULL);
	i = 0;
	while ((new_dog_ptr->owner[i] = owner[i]) != '\0')
		i++;
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
