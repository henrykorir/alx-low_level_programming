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
	unsigned int i = 0, j = 0, found = 0, count = 0;

	if (s == NULL || accept == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
			}
			j++;
		}
		if (found == 0)
			break;
		j = 0;
		found = 0;
		i++;
	}
	return (count);
}
