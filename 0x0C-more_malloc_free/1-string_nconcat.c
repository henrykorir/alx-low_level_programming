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
        int i = 0, j = 0, k = 0, m = 0;
        
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
        if (s2 == NULL)
		return (s2);
	if (j <= n)
		m = i + j + 1;
	else
		m = i + n + 1;
	s1 = realloc(s1, m * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	k = (j <= n) ? j : n;
	j = 0;
	while (j <= k && s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	return (s1);
}
