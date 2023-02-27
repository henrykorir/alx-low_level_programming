#include "main.h"
/**
 * swap_int - exchange two integers
 * @a: 1st pointer
 * @b: 2nd pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
