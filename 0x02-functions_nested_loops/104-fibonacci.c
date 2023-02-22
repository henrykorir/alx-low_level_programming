#include <stdio.h>
#include "main.h"
/**
 * fibonacci - Prints the firdt 98 fibonacci
 * terms
 *
 * @a: first term
 * @b: second term
 * @count: the number of terms
 *
 * Return: Nothing
 */
void fibonacci(int a, int b, int count)
{
	if (count == 2)
		printf("%d, %d", a, b);
	if (count >= 2 && count < 98)
		printf(", ");
	printf("%d", (a + b));
	if (count <= 98)
		fibonacci(b, (a + b), (count + 1));
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count = 2;

	fibonacci(1, 2, count);
	printf("\n");
	return (0);
}
