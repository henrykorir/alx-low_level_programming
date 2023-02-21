#include <stdio.h>
#include "main.h"

/**
 * _putchar - print characters
 *
 * @string: characters to be printed
 *
 * Description: Takes in a string and prints
 * individual characters using putchar()
 *
 * Return: Nothing
 */

void _putchar(char *string)
{
	unsigned int index = 0;

	for (; string[index] != '\0'; index++)
	{
		putchar(string[index]);
	}
}
