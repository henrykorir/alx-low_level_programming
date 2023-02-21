#include "main.h"
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char string[9] = "_putchar\n";
	unsigned int i = 0;

	for (; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (0);
}
