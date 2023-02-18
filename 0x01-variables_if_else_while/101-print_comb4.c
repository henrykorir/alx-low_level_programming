#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				if (i != j && i != k && j != k)
				{
					if (i < j && j < k)
					{
						putchar((int)('0' + i));
						putchar((int)('0' + j));
						putchar((int)('0' + k));
					        if (i < 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
