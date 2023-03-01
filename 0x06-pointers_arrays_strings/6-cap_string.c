#include "main.h"
/**
 * cap_string - Topic case string
 *
 * @s: string
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;

	while (s[j] != '\0')
		j++;
	while (s[i] != '\0' && j > 0)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' ||
			s[i - 1] == '\v' || s[i - 1] == '\t' ||
			s[i - 1] == '\r' || s[i - 1] == '\f' ||
			s[i - 1] == '.' || s[i - 1] == ',' ||
			s[i - 1] == ';' || s[i - 1] == '?' ||
			s[i - 1] == '!' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' ||
			s[i - 1] == '{' || s[i - 1] == '}') &&
			((s[i] >= 'a') && (s[i] <= 'z'))
			)
			s[i] = 'A' + (s[i] - 'a');
		if (s[i - 1] == '\t')
			s[i - 1] = ' ';
		i++;
	}

	return (s);
}
