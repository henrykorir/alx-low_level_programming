#include <stdio.h>
#include "main.h"
/**
 * _strchr - locate a character in a string
 *
 * @s: string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the
 * character c in the string s, or NULL if the
 * character is not found
 */
char *_strchr(char *s, char c)
{
	char *cptr = NULL;

	while (s != NULL && *(cptr = s) != c && *s != '\0')
		s++;

	return (cptr);
}
