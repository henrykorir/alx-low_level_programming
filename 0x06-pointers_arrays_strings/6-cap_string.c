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
	int i = 0;

	while (s[i] != '\0')
	{
		if ((((s[i] >= 'a') && (s[i] <= 'z')) &&
			(s[i - 1] == ' ' || s[i - 1] == '\n' ||
			s[i - 1] == '\t' || s[i - 1] == '\r' ||
			s[i - 1] == '.' || s[i - 1] == ',' ||
			s[i - 1] == ';' || s[i - 1] == '?' ||
			s[i - 1] == '!' || s[i - 1] == '\"' ||
			s[i - 1] == '(' || s[i - 1] == ')' ||
			s[i - 1] == '{' || s[i - 1] == '}' ||
			s[i - 1] == '\v' || s[i - 1] == '\f')) ||
			(s[0] >= 'a' && s[0] <= 'z')
		)
			s[i] = 'A' + (s[i] - 'a');
		i++;
	}

	return (s);
}
