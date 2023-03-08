#include "main.h"
/**
 * _puts_recrsion - prints a string, followed by a new line
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
