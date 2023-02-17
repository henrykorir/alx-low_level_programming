#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int index = 0;

	while (index <= 16)
	{
		if (index <= 9)
			putchar((int)('0' + index));
		else 
			putchar(('f' - (16 - index)));
		index++;
	}
	putchar('\n');

	return (0);
}
