#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;
	unsigned int d = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					if (
						((a * 10) + b) != ((c * 10) + d) &&
						((a * 1000) + (b * 100) + (c * 10) + d) <
						((c * 1000) + (d * 100) + (a * 10) + b)
					)
					{
						putchar((int)('0' + a));
						putchar((int)('0' + b));
						putchar(' ');
						putchar((int)('0' + c));
						putchar((int)('0' + d));
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
