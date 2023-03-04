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
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0 && i >= 10)
			{
				for (; j < i; j++)
				{
					if ((b[j] >= ' ') && (b[j] <= '~'))
						printf("%c", b[j]);
					else
						printf(".");
				}
				printf("\n%08x: ", i);
			}
			if (b[i] <= 16)
				(b[i] == 0) ? printf("00") : printf("0%x", b[i]);
			else
				printf("%x", b[i]);
			if (i % 2 != 0 && i >= 1)
				printf(" ");
		}
		k = ((10 - (i - j)) * 2) + ((i - j) / 2);
		while (--k > 0)
			printf(" ");
		for (; j < i; j++)
		{
			if ((b[j] >= ' ') && (b[j] <= '~'))
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
	else
		printf("\n");
}
