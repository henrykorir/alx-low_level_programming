#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * Description: prints alphabets in small letter excluding q and e.
 */
int main(void)
{
	unsigned int index = 0;

	while (index <= 25)
	{
		if ((('a' + index) != 'e') && (('a' + index) != 'q'))
			putchar((int)('a' + index));
		index++;
	}
	putchar('\n');

	return (0);
}
