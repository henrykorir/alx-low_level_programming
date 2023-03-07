#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring.
 *
 * @haystack: string to find in
 * @needle: substring to find
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0, count = 0;

	while (needle[k] != '\0')
		k++;
	if (haystack == NULL || needle == NULL)
		return (NULL);
	while (haystack[i] != '\0')
	{
		count = 0;
		for (j = 0; j < k && haystack[i + j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			count++;
		}
		if (count == k)
			break;
		if (haystack[i + j] == '\0' && count != k)
			return (NULL);
		i += j + 1;
	}
	if (count != k)
		return (NULL);
	return (haystack + i);
}
