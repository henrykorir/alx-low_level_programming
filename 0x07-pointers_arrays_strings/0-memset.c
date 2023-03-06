#include "main.h"

/**
 * _memset - initialize a memory buffer
 *
 * @s: buffer
 * @b: character for initializing buffer
 * @n: length of buffer
 *
 * Return: initialized buffer pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
