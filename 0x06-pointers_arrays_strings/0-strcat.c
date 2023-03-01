#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @src: first string
 * @dest: second string
 *
 * Description: s1 + s2
 *
 * Return: concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
