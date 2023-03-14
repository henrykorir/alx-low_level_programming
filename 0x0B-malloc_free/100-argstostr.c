#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - concatenate all arguments
 * @ac: argument count
 * @av: argument variables (values)
 * Return:  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, length = 0;
	char *cptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		j = 0;
		length++;
	}
	length++;
	j = 0;
	cptr = malloc(length * sizeof(char));
	if (cptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			cptr[k] = av[i][j];
			k++;
			j++;
		}
		cptr[k] = '\n';
		k++;
		j = 0;
	}
	cptr[k + 1] = '\0';

	return (cptr);
}
