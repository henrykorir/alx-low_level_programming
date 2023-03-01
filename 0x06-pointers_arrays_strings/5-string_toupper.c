#include "main.h"
/**
 * string_toupper - convert the
 * string to uppercase
 *
 * @s: string
 *
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + (s[i] - 'a');
		}
		i++;
	}

	return (s);
}
