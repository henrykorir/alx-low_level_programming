#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - finds the natural square root of a number
 *
 * @n: the number to find squareroot
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	static int d = 1;
	static int count = -1;
	int root;

	n -= d;
	count++;
	if (n < 0)
	{
		d = 1;
		count = 0;
		return (-1);
	}
	if (n == 0)
	{
		d = 1;
		root = count;
		count = 0;
		return (root);
	}
	d += 2;
	return (_sqrt_recursion(n));
}
