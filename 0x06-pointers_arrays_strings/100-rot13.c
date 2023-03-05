#include "stdio.h"
#include "main.h"
/**
 * rot13 - rotates characters by 13
 *
 * @s: string
 *
 * Return: rotated string;
 */
char *rot13(char *s)
{
	int i = 0;
	char c;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			c = 'A';
		else
			c = 'a';
		s[i] = ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) ?
		(c + (((s[i] - c) + 13) % 26)) : s[i];
		i++;
	}

	return (s);
}
