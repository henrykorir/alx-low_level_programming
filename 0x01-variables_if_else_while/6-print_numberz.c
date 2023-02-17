#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int index = 0;

	while (index < 10)
	{
		putchar('0' + index);
		index++;
	}
	putchar('\n');

	return (0);
}
