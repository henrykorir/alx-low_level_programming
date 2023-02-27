#include "main.h"
/**
 * puts_half - print 2nd half of string
 * @str: string
 */
void puts_half(char *str)
{
	int length = 0, n = 0, i = 0;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length -1) / 2;
	for (i = n; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
