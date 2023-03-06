#include <stdio.h>
/**
 * print_diagsums - print sum of each
 * diagonal of mxm array
 *
 * @a: 1d array
 * @size: length of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, sum = 0;

	if (size == 0)
		printf("d\n", 0);
	else if (size == 1)
		printf("%d\n", a[0]);
	else
	{
		for (; i < (size * size); i += (size + 1))
		{
			sum += a[i];
		}
		printf("%d, ", sum);
		sum = 0;
		for (; j <= ((size * size) - (size - 1)); j += (size - 1))
		{
			sum += a[j];
		}
		printf("%d\n", sum);
	}
}
