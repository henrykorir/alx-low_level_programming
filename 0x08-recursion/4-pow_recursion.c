#include "main.h"
/**
 * _pow_recursion - find the value of x raised to the power of y.
 *
 * @x: base value
 * @y: index
 *
 * Return: the power, -1 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
