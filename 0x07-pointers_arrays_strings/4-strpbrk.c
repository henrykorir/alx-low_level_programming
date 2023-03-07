#include <stdio.h>
#include "main.h"
/**
 * _strpbrk -  locates the first occurrence in the string s of any of the bytes
 * in the string accept
 *
 * @s: string to be checked in
 * @accept: string to check
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, k = -1;

	if (s == NULL || accept == NULL || s[0] == '\0' || accept[0] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				if (k == -1)
					k = i;
				else
					if (i < k)
						k = i;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (k == -1)
		return (NULL);
	return (s + k);
}
