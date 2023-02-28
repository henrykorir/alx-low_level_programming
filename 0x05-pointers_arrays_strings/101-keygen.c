#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[101];
	unsigned int size, n;
	char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	int key;

	for (size = 1; size <= 100; size++)
	{
		for (n = 0; n < size; n++)
		{
			key = rand() % ((int)((sizeof(chars) / sizeof(char)) - 1));
			str[n] = chars[key];
		}
		str[size] = '\0';
		printf("%s\n", str);
	}

	return (0);
}
