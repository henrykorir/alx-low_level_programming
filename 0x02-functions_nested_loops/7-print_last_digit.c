#include "main.h"
/**
 * print_last_digit - Print the last digit of
 * a  number
 *
 * @n: Number to find last digit
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	long int x = n;

	if (x >= 0 && x <= 9)
	{
		_putchar('0' + x);
		return (x);
	}
	if (x < 0)
		x = x * -1;
	x = x % 10;
	_putchar('0' + x);
	return (x);
}
