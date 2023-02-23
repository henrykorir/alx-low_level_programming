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
		if ((c >= '0' && c <= '1') || c == '3' || (c >= '5' && c <= '9'))
			_putchar(c);
	}
	_putchar('\n');
}
