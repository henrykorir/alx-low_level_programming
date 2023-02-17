#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int index = 0;

	while (index <= 9)
	{
		putchar((int)('0' + index));
		if (index < 9)
		{
			putchar(',');
			putchar(' ');
		}
		index++;
	}
	putchar('\n');

	return (0);
}
