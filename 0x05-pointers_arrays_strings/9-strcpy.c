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
	while ((*dest = *src) != '\0')
	{
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
