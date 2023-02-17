#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int index = 0;

	while (index < 9)
	{
		putchar((int)('0' + index));
		putchar(',');
		putchar(' ');
		index++;
	}
	putchar((int)('0' + index));

	return (0);
}
