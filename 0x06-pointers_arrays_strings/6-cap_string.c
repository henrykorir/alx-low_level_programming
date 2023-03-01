#include "main.h"
/**
 * cap_string - Topic case string
 *
 * @s: string
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	while (*s != '\0')
	{
		if ((*(s - 1) == ' ' || *(s - 1) == '\n' ||
			*(s - 1) == '\v' || *(s - 1) == '\t' ||
			*(s - 1) == '\r' || *(s - 1) == '\f') &&
			((*s >= 'a') && (*s <= 'z'))
			)
			*s = 'A' + (*s - 'a');
		s++;
	}

	return (s);
}

