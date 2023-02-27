#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: string
 * return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
