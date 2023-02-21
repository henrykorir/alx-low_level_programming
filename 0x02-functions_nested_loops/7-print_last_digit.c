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
	if(n < 0)
		n = n * -1;
	x = n % 10;
	_putchar('0' + x);
	return (x);
}
