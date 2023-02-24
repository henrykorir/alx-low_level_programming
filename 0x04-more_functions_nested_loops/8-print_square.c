#include "main.h"

/**
 * print_square - print square base on size
 * @size: the width of the square
 */
void print_square(int size)
{
	int i = 1, j = 1;

	if (size > 0)
	{
		for (; i <= size; i++)
		{
			for (; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j = 1;
		}
	}
	else
		_putchar('\n');
}
