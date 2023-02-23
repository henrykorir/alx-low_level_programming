#include "main.h"
/**
 * more_numbers - print 0 t0 14 10x
 *
 * Return : nothing
 */
void more_numbers(void)
{
	int i = 1, j = 0;
	char c1 = '0', c2 = '0';

	for (; i <= 10; i++)
	{
		if (i < 10)
			c1 = (char)('0' + i);
		else
		{
			c1 = (char)('0' + (i / 10));
			c2 = (char)('0' + (i % 10));
		}
		_putchar(c1);
		if (c2 != '0')
			_putchar(c2);
	}
	_putchar('\n');
}
