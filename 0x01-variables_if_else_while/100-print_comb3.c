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

	while (i <= 11)
	{
		while ((value % 10) != 0)
		{
			putchar((int)('0' + (value / 10)));
			putchar((int)('0' + (value % 10)));
			if ((value + 10) != 99)
			{
				putchar(',');
				putchar(' ');
			}
			value++;
		}
		value--;
		value += i;
		i++;
	}
	putchar('\n');
	return (0);
}
