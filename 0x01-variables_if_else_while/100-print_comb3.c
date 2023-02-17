#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 3;
	unsigned int value = 1;

	while (i <= 10)
	{
		while ((value % 10) != 0)
		{
			if (value <= 9)
				putchar('0');
			else
				putchar((int)('0' + (value / 10)));
			putchar((int)('0' + (value % 10)));
			if (i <= 10)
				putchar(' ');
			value++;
		}
		value--;
		value += i;
		i++;
	}
	putchar('\n');
	return (0);
}
