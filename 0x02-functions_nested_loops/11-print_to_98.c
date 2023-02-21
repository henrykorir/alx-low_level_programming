#include <stdio.h>
/**
 * print_to_98 - Prints numbers from n to 98
 *
 * @n: starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	for(; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
			printf(", ");
	}
}
