#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: number of times '\' is printed
 */
void print_diagonal(int n)
{
	unsigned int i = 0, j = 0;

	while (n > 0)
	{
		for (i = 0; i < j; i++)
			_putchar(' ');
		_putchar('\\');
		if (n > 1)
			_putchar('\n');
		j++;
		n--;
	}
	_putchar('\n');
}
