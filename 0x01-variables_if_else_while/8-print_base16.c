#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int index = 0;

	while (index <= 15)
	{
		if (index <= 9)
			putchar((int)('0' + index));
		else
			putchar((int)('a' + (6 - (16 - index))));
		index++;
	}
	putchar('\n');

	return (0);
}
