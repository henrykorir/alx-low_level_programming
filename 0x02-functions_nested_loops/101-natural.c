#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 0, count = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			count += i;
	}
	printf("%d\n", count);

	return (0);
}
