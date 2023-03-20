#include <stdlib.h>
#include "dog.h"

/**
 * add_string - copies a string into a pointer
 * @s: string to be added
 * Return: pointer to the new string
 */
char *add_string(char *s)
{
	int i = 0;
	char *str;

	while (s[i] != '\0')
		i++;
	if (i == 0)
		str = NULL;
	else
	{
		str = malloc(i * sizeof(char));
		if (str == NULL)
			str = NULL;
		else
		{
			i = 0;
			while ((str[i] = s[i]) != '\0')
				i++;
		}
	}

	return (str);
}
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

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	new_dog_ptr->name = add_string(name);
	new_dog_ptr->owner = add_string(owner);
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
