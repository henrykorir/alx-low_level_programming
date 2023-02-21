#include "main.h"
/**
 * times_table - Prints the 9x9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i = 1;
	int j = 1;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + k);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					if ((i * (j + 1)) <=  9)
						_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
