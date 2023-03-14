#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to be split
 * Return: a pointer to an array of strings (words)
 * or NULL otherwise
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, m = 0, n = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[k] != '\0')
		k++;
	k++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			m++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j++;
		if (str[i] == ' ')
			if (j > n)
				n = j;
		i++;
	}
	n++;
	words = malloc(m * sizeof(char*));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < m; i++)
	{
		words[i] = malloc(n * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
	}
	i = 0;
while (str[i] != '\0')
{

