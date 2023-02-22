#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i = 1, j = 2, k = 3;

	printf("%ld", j);
	while (k <= 4000000)
	{
		i = j;
		j = k;
		k = i + j;
		if (k % 2 == 0 && (k <= 4000000))
			printf("%ld", k);
		if ((((j + k) % 2) == 0) && ((j + k) <= 4000000))
			printf(", ");
	}
	printf("\n");
	return (0);
}
