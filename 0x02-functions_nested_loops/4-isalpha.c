#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabet
 *
 * @c: character to be cahecked
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if (
			((c >= ((int)('a'))) && (c <= ((int)('z')))) ||
			((c >= ((int)('A'))) && (c <= ((int)('Z')))))
		return (1);
	return (0);
}
