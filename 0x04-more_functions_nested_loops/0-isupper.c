#include "main.h"

/**
 * _isupper - Determine if a letter is uppercase
 *
 * @c: character to be cheked
 *
 * Return: 1 for true and 0 otherwise
 */
int _isupper(int c)
{
	if (((char)c >= 'A') && ((char)c <= 'Z'))
		return (1);
	return (0);
}
