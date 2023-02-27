#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, j;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	i = 0;
	while (i <  j && j >= 0)
	{
		c = s[i];
		*(s + i) = s[j];
		*(s + j) = c;
		i++;
		j--;
	}
}
