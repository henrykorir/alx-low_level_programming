#include "main.h"
/**
* print_number - Print number by digits
* @n: The number
*/
void print_number(int n)
{
	int divisor = 10, number = n, sign = 0;

	if (number < 0)
	{
		sign = 1;
		number *= -1;
	}
	if (sign == 1)
		putchar('-');
	if (number <= 9)
	{
		putchar('0' + number);
	}
	else
	{
		while ((number / divisor) > 10)
		{
			divisor *= 10;
		}
		while (divisor >= 10)
		{
			putchar((char)('0' + (number / divisor)));
			number %= divisor;
			divisor /= 10;
		}
		putchar((char)('0' + number));
	}
}
