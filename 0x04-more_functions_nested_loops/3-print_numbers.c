#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
