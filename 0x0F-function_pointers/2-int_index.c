#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: a pointer to the function used to compare values
 * Return: the index of the first element for which cmp function
 * does not return 0, -1 if no element matches or if size if 0 or less
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, bool = 0;

	for (i = 0; cmp != NULL && i < size; i++)
	{
		bool = cmp(array[i]);
		if (bool == 1)
			return (i);
	}

	return (-1);
}
