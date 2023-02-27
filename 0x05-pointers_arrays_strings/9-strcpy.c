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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
