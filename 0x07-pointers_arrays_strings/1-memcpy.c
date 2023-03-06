#include "main.h"
/**
 * _memcpy - copy memory from src to dest
 *
 * @dest: where to copy memory to.
 * @src: where to copy memory from.
 * @n: size of memory to be copied
 *
 * Return: dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
