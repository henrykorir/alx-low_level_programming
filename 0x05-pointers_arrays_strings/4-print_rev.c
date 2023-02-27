#include "main.h"
/**
 * print_rev - print reversed string
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	while (length >= 0)
	{
		_putchar(*(s + length - 1));
		length--;
	}
	_putchar('\n');
}
