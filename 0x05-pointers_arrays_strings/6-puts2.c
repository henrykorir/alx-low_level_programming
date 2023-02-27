#include "main.h"
/**
 * puts2 - print characters
 * @str: string
 */
void puts2(char *str)
{
	int i;

	while ((i % 2 != 0 && str[i] != '\0') ||
		(i % 2 == 0 && str[i + 1] != '\0'))
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
