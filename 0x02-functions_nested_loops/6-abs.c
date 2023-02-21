#include "main.h"
/**
 * _abs - gets the absolute value of a number
 *
 * @n: number to be checked
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
