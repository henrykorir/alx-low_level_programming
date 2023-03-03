#include "main.h"
/**
 * print_number - print a number by char
 *
 * @n: number to be printed
 */
void print_number(int n)
{
	int number = n;
	unsigned int tens = 10;

	if (n < 0)
	{
		_putchar('-');
		number = (int)(((unsigned int)number) * ((unsigned int)-1));
	}
	while ((number / tens) >= 10)
		tens *= 10;
	while (number >= 10)
	{
		_putchar('0' + (number / tens));
		number %= tens;
		tens /= 10;
	}
	_putchar('0' + number);
}
