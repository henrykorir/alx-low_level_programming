#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	int c  = *s;

	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(c);
}
