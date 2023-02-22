#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long long int i = 1, j = 2, k = 3;
	unsigned int count = 0;

	printf("%lld, %lld, ", i, j);
	while (count <= 50)
	{
		k = i + j;
		printf("%lld", k);
		if (count < 50)
			printf(", ");
		i = j;
		j = k;
		count++;
	}
	putchar('\n');
	return (0);
}
