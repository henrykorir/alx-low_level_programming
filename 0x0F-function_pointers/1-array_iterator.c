#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each of the array element
 * @array: array of integers
 * @size: length of the array
 * @action: pointer to the function to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; (action != NULL) && (i < size); i++)
		action(array[i]);
}
