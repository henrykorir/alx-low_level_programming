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
		putchar((int)('a' + index));
		index++;
	}
	index=0;	
	while (index <= 25)
	{
		putchar((int)('A' + index));
		index++;
	}
	putchar('\n');

	return (0);
}
