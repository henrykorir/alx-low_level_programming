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
	int i = 0, j = 0, k = 0;

	while (needle[k] != '\0')
		k++;
	if (haystack == NULL || needle == NULL)
		return (NULL);
	while (*haystack != '\0')
	{
		for (i = 0; i < k && *haystack != '\0'; i++)
		{
			if (*haystack != needle[i])
			{
				j = 0;
				break;
			}
			j++;
			haystack++;
		}
		if (j == k)
		{
			break;
		}
		if (*haystack != '\0')
			haystack++;
	}
	if (*haystack == '\0' && j != k)
		return (NULL);
	return (haystack - j);
}
