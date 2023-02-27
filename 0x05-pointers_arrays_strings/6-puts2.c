#include "main.h"
/**
 * puts2 - print characters
 * @str: string
 */
void puts2(char *str)
{
	int length = 0, i = 0;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length && str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

