#include "main.h"
/**
 * print_rev - print reversed string
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length >= 0)
	{
		_putchar(*(s + length - 1));
		length--;
	}
	_putchar('\n');
}
