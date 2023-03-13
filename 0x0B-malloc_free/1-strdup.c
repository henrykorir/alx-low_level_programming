#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory
 * was available
 */
char *_strdup(char *str)
{
	int i = 0, length = 0;
	char *cptr = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[length] != '\0')
	{
		length++;
	}
	if (length == 0)
		return (NULL);
	cptr = (char *)malloc((length + 1) * sizeof(char));
	if (cptr == NULL)
		return (NULL);
	i = 0;
	while ((cptr[i] = str[i]) != '\0')
		i++;

	return (cptr);
}
