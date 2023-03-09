#include "main.h"

/**
 * helper_strlen_no_wild_cards - Returns the length of a string,
 *  ignoring wildcard characters.
 * @str: The string to be measured.
 * Return: The length.
 */

int helper_strlen_no_wild_cards(char *str)

{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;
		index++;
		len += helper_strlen_no_wild_cards(str + index);
	}

	return (len);

}

/**
 * helper_iterator - Iterates through a string located at a wildcard
 * until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through.
 */

void helper_iterator(char **wildstr)

{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		helper_iterator(wildstr);
	}

}

/**
 * helper_postfix_match - Checks if a string str matches the postfix of
 * another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix.
 * Return: If str and postfix are identical - a pointer to the null byte
 * located at the end of postfix.
 *  Otherwise - a pointer to the first unmatched character in postfix.
 */

char *helper_postfix_match(char *str, char *postfix)

{
	int str_len = helper_strlen_no_wild_cards(str) - 1;
	int postfix_len = helper_strlen_no_wild_cards(postfix) - 1;

	if (*postfix == '*')
		helper_iterator(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (helper_postfix_match(str, postfix));
	}

	return (postfix);

}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 * Return: If the strings can be considered identical - 1.
 * Otherwise - 0.
 */

int wildcmp(char *s1, char *s2)

{
	if (*s2 == '*')
	{
		helper_iterator(&s2);
		s2 = helper_postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));

}
