#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned index = 0;

	while (index <= 25)
	{
		if ((('a' + index) != 'e') && (('a' + index) != 'q'))
			putchar((int)('a' + index));
		index++;
	}
	putchar('\n');

	return (0);
}	
