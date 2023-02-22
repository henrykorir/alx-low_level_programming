#include <limits.h>
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
	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
		return (n);
	}
	if (n < 0)
		n = n * -1;
	n  = n % 10;
	_putchar('0' + n);
	return (n);
}
