#include "main.h"
/**
 * _strncpy - copy n chars from src
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: new string, dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
		j++;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i > j || dest[i - 1] == '\n')
		dest[i] = '\0';

	return (dest);
}

