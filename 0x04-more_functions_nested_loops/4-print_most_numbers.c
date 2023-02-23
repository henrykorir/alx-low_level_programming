#include "main.h"
/**
 * print_most_numbers - Print number 0 - 1 and 3 - 9
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		if ((((int)('0' + c)) != 2) && ((((int)'0' + c)) != '4'))
			_putchar(c);
	}
}
