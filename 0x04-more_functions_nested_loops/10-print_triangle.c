#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i = 0, j = 0, spaces = size - 1;

	if (size > 0)
	{
		spaces = size - 1;
		while (spaces <= size)
		{
			for (i = 1; i <= spaces; i++)
				_putchar(' ');
			for (j = 1; j <= (size - spaces); j++)
				_putchar('#');
			_putchar('\n');
			spaces--;
		}
	}
	else
		_putchar('\n');
}
