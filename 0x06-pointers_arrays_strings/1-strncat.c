#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * limited by size
 *
 * @dest: destination string
 * @src: source string
 * @n: The length of the result string
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (src[k] != '\0')
		k++;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (i < j && i < n && i <= k)
	{
		*(dest + j) = src[i];
		i++;
		j++;
	}
	*(dest + j) = '\0';

	return (dest);
}
