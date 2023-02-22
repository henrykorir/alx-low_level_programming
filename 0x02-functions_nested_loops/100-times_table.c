#include "main.h"
/**
 * print_times_table - print times table from n
 *
 * @n: Maximum width of the table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i = 0, j = 0, k = 0;

	if (n >= 0 && n <= 15)
		for (; i <= n; i++)
		{
			for (; j <= n; j++)
			{
				k = i * j;
				if (k >= 0 && k <= 9)
					_putchar('0' + k);
				else if (k >= 10 && k <= 99)
				{
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
				else
				{
					_putchar('0' + (k / 100));
					_putchar('0' + ((k % 100) / 10));
					_putchar('0' + (k % 10));
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (((i * (j + 1)) >= 0) && ((i * (j + 1)) <= 9))
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (((i * (j + 1)) >= 10) && ((i * (j + 1)) <= 99))
						_putchar(' ');
				}
			}
			j = 0;
			_putchar('\n');
		}
}
