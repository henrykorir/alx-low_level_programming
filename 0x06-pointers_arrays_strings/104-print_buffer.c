#include <stdio.h>
#include "main.h"
/**
 * print_buffer - buffer hex as in memory
 *
 * @b: buffer
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k = 0;

	if (size > 0)
	{
		printf("%08x: ", 0);
		while (j < size)
		{
			if (i < size)
			{
				if (i % 10 == 0 && i >= 10)
				{
					for (; j < i; j++)
						((b[j] >= ' ') && (b[j] <= '~')) ?
					printf("%c", b[j]) : printf(".");
					printf("\n%08x: ", i);
					k = 0;
				}
				if (b[i] <= 16)
					(b[i] == 0) ? printf("00") : printf("0%x", b[i]);
				else
					printf("%x", b[i]);
				if (i % 2 != 0 && i >= 1)
				{
					putchar(' ');
					k++;
				}
				k += 2;
				i++;
			}
			if (i == size)
			{
				k = (24 - k) + 1;
				for (; k > 0; k--)
					putchar(' ');
				for (; j < i; j++)
					((b[j] >= ' ') && (b[j] <= '~')) ?
				printf("%c", b[j]) : printf(".");
			}
		}
		printf("\n");
	}
	else
		printf("\n");
}
