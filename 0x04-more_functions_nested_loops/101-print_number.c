#include <limits.h>
#include "main.h"

/**
* print_number - Print number by digits
* @n: The number
*/
void print_number(int n)
{
	int divisor = 10, sign = 0;
	unsigned int number;

	if (n == INT_MIN)
	{
		number = (unsigned int)n;
		sign = 1;
	}
	else if (n < 0 && n != INT_MIN)
	{
		sign = 1;
		number = -1 * n;
	}
	else
		number = n;
	if (sign == 1)
		_putchar('-');
	if (number <= 9)
	{
		_putchar('0' + number);
	}
	else
	{
		while ((number / divisor) >= 10)
		{
			divisor *= 10;
		}
		while (divisor >= 10)
		{
			_putchar((char)('0' + (number / divisor)));
			number %= divisor;
			divisor /= 10;
		}
		_putchar((char)('0' + number));
	}
}
