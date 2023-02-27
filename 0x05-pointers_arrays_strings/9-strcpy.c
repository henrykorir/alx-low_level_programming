#include "main.h"
/**
 * _strcpy - copy string from
 * source to destination
 *
 * @src: source
 * @dest: destination
 *
 * Return: pointer  to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;
	dest[i] = '\0';

	return (dest);
}
