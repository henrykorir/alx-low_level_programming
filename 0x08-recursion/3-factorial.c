#include "main.h"
/**
 * factorial - find factorial of a number
 *
 * @n: number to find its factorial
 *
 * Return: factorial of a number, -1 otherwise.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
