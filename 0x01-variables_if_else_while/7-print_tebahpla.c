#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int index = 0;

	while (index <= 25)
	{
		putchar((int)('z' -  index));
		index++;
	}
	putchar('\n');

	return (0);
}
