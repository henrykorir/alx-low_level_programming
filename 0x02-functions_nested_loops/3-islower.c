#include "main.h"
/**
 * _islower - Checks if a character is
 * lowercase alphabet
 *
 * @c: character to be tested
 *
 * Return: 0 for false or 1 otherwise
 */
int _islower(int c)
{
	if ((c >= ((int)('a'))) && (c <= ((int)('z'))))
		return (1);
	return (0);
}
