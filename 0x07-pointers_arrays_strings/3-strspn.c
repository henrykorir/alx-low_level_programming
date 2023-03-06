#include <stdio.h>
#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: string
 * @accept: characters to exclude
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, j = 0;

	if (s == NULL)
		return (0);
	while (s[count] != '\0')
		count++;
	if (accept == NULL)
		return (count);
	while (*accept != '\0')
	{
		while (s[j] != '\0')
		{
			if (*accept == s[j])
				count--;
			j++;
		}
		j = 0;
		accept++;
	}

	return (count);
}
