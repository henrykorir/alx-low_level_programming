#include <stdlib.h>
#include "main.h"
/**
 * check_for_space - checks if a character is a whitespaces
 * @str: string to be checked
 * @pos: character position in the string
 * Return: 1 if it is a space, 0 otherwise
 */
int check_for_space(char *str, int pos)
{
	int is_space =
		str[pos] == ' ' ||
		str[pos] == '\t' ||
		str[pos] == '\n' ||
		str[pos] == '\v' ||
		str[pos] == '\f' ||
		str[pos] == '\r';

	return (is_space);
}
/**
 * skip_spaces - skips unnecessary whitespaces
 * @str: string to skip spaces
 * @pos: starting position
 * Return: legal position, -1 otherwise
 */
int skip_spaces(char *str, int pos)
{
	if (check_for_space(str, pos) == 0)
		return (pos);
	while ((str + pos) != NULL && str[pos] != '\0')
	{
		if ((str + pos + 1) != NULL &&
			str[pos + 1] != '\0' &&
			check_for_space(str, pos + 1) == 0
		)
			return (pos + 1);
		pos++;
	}
	if ((str + pos) == NULL || str[pos] == '\0')
		return (-1);

	return (pos);
}
/**
 * allocate_memory - allocate m x n memory
 * @m: the height
 * @n: the width
 * Return: 2d array memory or NULL otherwise
 */
char **allocate_memory(int m, int n)
{
	int i = 0, j = 0;
	char **words = malloc(m * sizeof(char *));

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
	return (words);
}
/**
 * split_string - splits string into words
 * @words: the memory to hold words
 * @str: string to be split.
 * @m: height of the memory.
 * @n: the width of the memory.
 * Return: 2d array of words
 */
char **split_string(char **words, char *str, int m, int n)
{
	int i = 0, j = 0, k = 0;

	while (check_for_space(str, i) == 1 || str[i] != '\0')
	{
		i = skip_spaces(str, i);
		if (i >= 0)
		{
			while (str[i] != '\0' && check_for_space(str, i) == 0)
			{
				words[j][k] = str[i];
				i++;
				k++;
			}
			words[j][k] = '\0';
		}
		j++;
		k = 0;
	}
	words[j] = NULL;

	return (words);
}
/**
 * strtow - splits a string into words.
 * @str: string to be split
 * Return: a pointer to an array of strings (words)
 * or NULL otherwise
 */
char **strtow(char *str)
{
	int i = 0, j = 0, m = 0, n = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (check_for_space(str, i) == 1 || str[i] != '\0')
	{
		i = skip_spaces(str, i);
		if (i >= 0)
		{
			m++;
			i++;
			while (str[i] != '\0' && check_for_space(str, i) == 0)
				i++;
		}
	}
	m++;
	i = 0;
	while (check_for_space(str, i) == 1 || str[i] != '\0')
	{
		i = skip_spaces(str, i);
		if (i >= 0)
		{
			j++;
			i++;
			while (str[i] != '\0' && check_for_space(str, i) == 0)
			{
				i++;
				j++;
			}
		}
		if (j > n)
			n = j;
		j = 0;
	}
	n++;
	words = allocate_memory(m, n);
	if (words == NULL)
		return (NULL);
	return (split_string(words, str, m, n));
}
