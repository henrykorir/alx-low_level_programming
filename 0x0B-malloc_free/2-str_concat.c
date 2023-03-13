#include <stdlib.h>
#include "main.h"
/**
 * str_concat - joins 2 strings into 1 string
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m = 0, n = 0, length = 0;
        char *cptr = NULL;

        if (s1 == NULL)
                length++;
        if (s2 == NULL)
                length++;
	while (s1 != NULL && s1[m] != '\0')
		m++;
	while (s2 != NULL && s2[n] != '\0')
		n++;
	length += m + n + 1;
	cptr = (char *)malloc(length * sizeof(char));
	if (cptr == NULL)
		return (NULL);
	if (s1 == NULL)
		cptr[0] = '\0';
	if (s2 == NULL)
		cptr[0] = '\0';
	while (s1 != NULL && s1[i] != '\0')
	{
		cptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2 != NULL && (cptr[j] = s2[i]) != '\0')
	{
		i++;
		j++;
	}

	return (cptr);
}
