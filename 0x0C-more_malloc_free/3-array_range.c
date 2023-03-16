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
	int j = 0;
	unsigned long int i = 0, size = 0;
	int *array;

	if (min > max)
		return (NULL);
	if (min >= 0 && max >= 0)
		size = (max - min) + 1;
	else if (min < 0 && max >= 0)
		size = (min * -1) + 1 + max;
	else
		size = ((max * -1) - (min * -1)) + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (j = min; i < size && j <= max; j++)
	{
		array[i] = j;
		i++;
	}

	return (array);
}
