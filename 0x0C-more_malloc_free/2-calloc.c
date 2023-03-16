#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate and initialize  memory to 0.
 * @nmemb: number of bytes of memory to allocate
 * @size: byte size
 * Return: the new memory pointer, NULL otherwise.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (; i < size * nmemb; i++)
		mem[i] = '0';

	return ((void *)mem);
}
