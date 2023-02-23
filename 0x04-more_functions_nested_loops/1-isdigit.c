#include "main.h"

/**
 * _isdigit - checks if a character in a digite
 *
 * @c: the caracter to be checked
 *
 * Return: 1 for true, 0 otherwise
 */
int _isdigit(int c)
{
	if (((char)c >= '0') && ((char)(c) <= '9'))
		return (1);
	return (0);
}
