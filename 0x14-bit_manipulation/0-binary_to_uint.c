#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 *@b: string of 0s and 1s
 * Return: the converted number, or 0 if
 * there is one of more characters in the
 * string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, i = 0, n = 0;

	if (b == NULL)
		return (0);
	n = strlen(b);
	while (n != 0 && b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value += (b[i] - '0') << ((n - 1) - i);
		i++;
	}
	return (value);
}
