#include "main.h"
/**
 * more_numbers - print 0 t0 14 10x
 *
 * Return : nothing
 */
void more_numbers(void)
{
	int i = 1, j = 0;

	for (; i <= 10; i++)
	{
		for (; j <= 14; j++)
		{
			if (j / 10 != 0)
				_putchar((char)('0' + (j / 10)));
			_putchar((char)('0' + (j % 10)));
		}
		j = 0;
		_putchar('\n');
	}
}
