#include "main.h"
/**
 * _strcmp - compare 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 for same, -1 for s1 < s2
 * 1 for s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0'	|| s2[i] != '\0'))
		i++;

	return (s1[i] - s2[i]);
}
