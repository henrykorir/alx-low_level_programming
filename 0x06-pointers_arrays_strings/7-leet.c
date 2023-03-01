#include "main.h"
/**
 * leet - change string to 1337
 *
 * @s: string
 *
 * Return: 1337 string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char l337[] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (
				((s[i] >= 'a' && s[i] <= 'z') ||
				(('a' + (s[i] - 'A')) == l337[j])) &&
				s[i] == l337[j]
			)
			{
				s[i] = '0' + j;
			}
		}
	}

	return (s);
}
