#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: the memory capacity
 * @c: the character to be assigned to the memory
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *cptr = NULL;
	unsigned int i = 0;

	cptr = (char *)malloc(size * sizeof(char));
	if (cptr == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		cptr[i] = c;
	}

	return (cptr);
}
