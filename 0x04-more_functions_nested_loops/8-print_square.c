#include "main.h"

/**
 * print_square - print square base on size
 * @size: the width of the square
 */
void print_square(int size)
{
	unsigned int i = 1;

	if (size > 1)
	{
		for (; i <= size; i++)
			_putchar('#');
		_putchar('\n');
		_putchar('#');
		for (i = 1; i < (size - 2); i++)
			_putchar(' ');
		_putchar('#');
		_putchar('\n');
		for (i = 1; i <= size; i++)
			_putchar('#');
	}
	_putchar('\n');
}
