#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - joins 2 strings up to n
 * @s1: first string
 * @s2: second string
 * @n: the number of characters to be appended to s1 from s2
 * Return: the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, m = 0;
	char *s3;

	while (s1 != NULL && s1[i] != '\0')
		i++;
	while (s2 != NULL && s2[j] != '\0')
		j++;
	if (s1 == NULL)
	{
		i = 0;
		s1 = malloc(1 * sizeof(char));
			if (s1 == NULL)
				return (NULL);
		s1[0] = '\0';
	}
	m = (j <= n) ? (i + j + 1) : (i + n + 1);
	s3 = malloc(m * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	k = (j <= n) ? j : n;
	j = 0;
	while (j < k && s2 != NULL && s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';

	return (s3);
}
