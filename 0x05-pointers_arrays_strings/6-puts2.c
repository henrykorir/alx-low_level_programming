#include "main.h"
/**
 * puts2 - print characters
 * @str: string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
