#include "main.h"
/**
 * reverse_array - reverse array elements
 *
 * @a: array
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, x;

	n--;
	while (i < n)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
		i++;
		n--;
	}
}
