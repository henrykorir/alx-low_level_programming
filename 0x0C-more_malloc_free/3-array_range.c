#include <stdlib.h>
#include "main.h"
/**
 * array_range - create a dynamic array and assign
 * values from min to max
 * @min: lower bound value
 * @max: highest bound value in the range
 * Return: array of integers from min to max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

