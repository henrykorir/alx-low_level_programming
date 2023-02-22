#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i = 1, j = 2, k = 3, sum = 2;

	while (k <= 4000000)
	{
		i = j;
		j = k;
		k = i + j;
		if (k % 2 == 0 && (k <= 4000000))
			sum += k;
	}
	printf("%ld\n", sum);
	return (0);
}
