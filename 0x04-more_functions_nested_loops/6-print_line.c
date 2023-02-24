#include "main.h"

/**
 * print_line - print a line
 * @n: the number of times '_' has to be printed
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
